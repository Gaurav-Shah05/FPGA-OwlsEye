"""
The Pad module is used to combine streams
used for channel parallelism in the
Convolution layer together.

.. figure:: ../../../figures/glue_diagram.png
"""
import math
import os
import sys
from dataclasses import dataclass, field
from collections import namedtuple

import numpy as np
import pydot

from fpgaconvnet.models.modules import int2bits, Module3D, MODULE_3D_FONTSIZE

# from fpgaconvnet.models.modules import Pad

@dataclass
class Pad3D(Module3D):
    pad_top: int
    pad_bottom: int
    pad_left: int
    pad_right: int
    pad_front: int
    pad_back: int
    backend: str = "chisel"
    regression_model: str = "linear_regression"
    data_width: int = field(default=32, init=False)
    streams: int = 1
    latency_mode: int = False
    block: int = False

    def __post_init__(self):
        pass

    def rsc(self, coef=None, model=None):
        """
        Returns
        -------
        dict
            estimated resource usage of the module. Uses the
            resource coefficients for the estimate.
        """
        return {
            "LUT"   : 16,
            "FF"    : 35,
            "BRAM"  : 0,
            "DSP"   : 0
        }

    def rows_out(self):
        return (self.rows_in()+self.pad_top+self.pad_bottom)

    def cols_out(self):
        return (self.cols_in()+self.pad_left+self.pad_right)

    def depth_out(self):
        return (self.depth_in()+self.pad_back+self.pad_front)

    def rate_in(self):
        return (self.rows_in()*self.cols_in()*self.depth_in())/float(
                (self.rows_out()*self.cols_out()*self.depth_out()))

    def module_info(self):
        # get the base module fields
        info = Module3D.module_info(self)
        # add module-specific info fields
        info["pad_top"]     = self.pad_top
        info["pad_bottom"]  = self.pad_bottom
        info["pad_left"]    = self.pad_left
        info["pad_right"]   = self.pad_right
        info["pad_front"]   = self.pad_front
        info["pad_back"]    = self.pad_back
        # return the info
        return info

    def visualise(self, name):
        return pydot.Node(name,label="glue3d", shape="box",
                style="filled", fillcolor="fuchsia",
                fontsize=MODULE_3D_FONTSIZE)

    def functional_model(self,data):
        # check input dimensionality
        assert data.shape[0] == self.rows    , "ERROR: invalid row dimension"
        assert data.shape[1] == self.cols    , "ERROR: invalid column dimension"
        assert data.shape[2] == self.depth    , "ERROR: invalid depth dimension"
        assert data.shape[3] == int(self.filters/self.coarse_out) , "ERROR: invalid  dimension"
        assert data.shape[4] == self.coarse_in , "ERROR: invalid  dimension"
        assert data.shape[5] == self.coarse_out , "ERROR: invalid  dimension"

        out = np.zeros((
            self.rows,
            self.cols,
            self.depth,
            int(self.filters/self.coarse_out),
            self.coarse_out),dtype=float)

        for index,_ in np.ndenumerate(out):
            for c in range(self.coarse_in):
                out[index] += data[index[0],index[1],index[2],index[3],c,index[4]]

        return out

