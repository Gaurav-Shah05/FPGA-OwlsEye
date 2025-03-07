#ifndef SINGLE_LAYER_TOP_HPP_
#define SINGLE_LAYER_TOP_HPP_

#include "common.hpp"
#include "Conv_0.hpp"
#include "Conv_0_squeeze_Relu_1.hpp"
#include "Relu_1.hpp"
#include "squeeze_Relu_1.hpp"

#include "mem_read.hpp"
#include "mem_write.hpp"
#include "wr.hpp"

#define SINGLE_LAYER_BATCH_SIZE   1

#define SINGLE_LAYER_ROWS_IN      28
#define SINGLE_LAYER_COLS_IN      28
#define SINGLE_LAYER_CHANNELS_IN  1

#define SINGLE_LAYER_ROWS_OUT     24
#define SINGLE_LAYER_COLS_OUT     24
#define SINGLE_LAYER_CHANNELS_OUT 16

#define SINGLE_LAYER_STREAMS_IN   1
#define SINGLE_LAYER_STREAMS_OUT  4
#define SINGLE_LAYER_STREAMS_WR   1

#define SINGLE_LAYER_PORTS        1
#define SINGLE_LAYER_PORTS_IN     1  //SINGLE_LAYER_PORTS
#define SINGLE_LAYER_PORTS_OUT    1  //SINGLE_LAYER_PORTS
#define SINGLE_LAYER_PORTS_WR     1 //SINGLE_LAYER_PORTS

#define SINGLE_LAYER_WEIGHTS_RELOADING_FACTOR 1
#define SINGLE_LAYER_WEIGHTS_RELOADING_LAYER  Conv_0
#define SINGLE_LAYER_WEIGHTS_RELOADING_FLAG   1

#define SINGLE_LAYER_SIZE_IN  SINGLE_LAYER_BATCH_SIZE*SINGLE_LAYER_ROWS_IN*SINGLE_LAYER_COLS_IN*DIVIDE(SINGLE_LAYER_CHANNELS_IN,SINGLE_LAYER_STREAMS_IN)
#define SINGLE_LAYER_SIZE_OUT SINGLE_LAYER_BATCH_SIZE*SINGLE_LAYER_ROWS_OUT*SINGLE_LAYER_COLS_OUT*DIVIDE(SINGLE_LAYER_CHANNELS_OUT,SINGLE_LAYER_STREAMS_OUT)*SINGLE_LAYER_WEIGHTS_RELOADING_FACTOR

typedef Conv_0_input_t   single_layer_input_t;
typedef squeeze_Relu_1_output_t single_layer_output_t;

#if SINGLE_LAYER_WEIGHTS_RELOADING_FLAG
#define SINGLE_LAYER_WR_COARSE_IN       CONV_0_COARSE_IN
#define SINGLE_LAYER_WR_COARSE_OUT      CONV_0_COARSE_OUT
#define SINGLE_LAYER_WR_COARSE_GROUP    CONV_0_COARSE_GROUP
#define SINGLE_LAYER_WR_WEIGHTS         CONV_0_WEIGHTS
#define SINGLE_LAYER_WR_KERNEL_SIZE_X   CONV_0_KERNEL_SIZE_X
#define SINGLE_LAYER_WR_KERNEL_SIZE_Y   CONV_0_KERNEL_SIZE_Y

#define SINGLE_LAYER_SIZE_WR  DIVIDE(SINGLE_LAYER_WR_WEIGHTS,SINGLE_LAYER_STREAMS_WR)

#define SINGLE_LAYER_WR_BATCH_SIZE    1
#define SINGLE_LAYER_WR_ROWS_IN       1
#define SINGLE_LAYER_WR_COLS_IN       1
#define SINGLE_LAYER_WR_CHANNELS_IN   SINGLE_LAYER_SIZE_WR
#define SINGLE_LAYER_WR_PORTS_IN      SINGLE_LAYER_PORTS_WR
#define SINGLE_LAYER_WR_STREAMS_IN    SINGLE_LAYER_STREAMS_WR

void reload_weights(
    int weights_reloading_index,
    volatile mem_int wr_hw[SINGLE_LAYER_PORTS_WR][SINGLE_LAYER_SIZE_WR],
    Conv_0_weight_t weights[SINGLE_LAYER_WR_COARSE_IN*SINGLE_LAYER_WR_COARSE_GROUP][SINGLE_LAYER_WR_COARSE_OUT][DIVIDE(SINGLE_LAYER_WR_WEIGHTS,SINGLE_LAYER_WR_COARSE_IN*SINGLE_LAYER_WR_COARSE_GROUP*SINGLE_LAYER_WR_COARSE_OUT*SINGLE_LAYER_WR_KERNEL_SIZE_X*SINGLE_LAYER_WR_KERNEL_SIZE_Y)][SINGLE_LAYER_WR_KERNEL_SIZE_X][SINGLE_LAYER_WR_KERNEL_SIZE_Y]
);
#endif

#define SINGLE_LAYER_DMA_WIDTH            64
#define SINGLE_LAYER_IN_DATA_WIDTH        16
#define SINGLE_LAYER_WEIGHTS_DATA_WIDTH   16
#define SINGLE_LAYER_OUT_DATA_WIDTH       16

void process(
    int weights_reloading_index,
    volatile mem_int in_hw[SINGLE_LAYER_PORTS_IN][SINGLE_LAYER_SIZE_IN],
    volatile mem_int out_hw[SINGLE_LAYER_PORTS_OUT][SINGLE_LAYER_SIZE_OUT]
);

void fpgaconvnet_ip(
    int mode,
    int weights_reloading_index,
#if SINGLE_LAYER_WEIGHTS_RELOADING_FLAG
    volatile mem_int wr_hw[SINGLE_LAYER_PORTS_WR][SINGLE_LAYER_SIZE_WR],
#endif
    volatile mem_int in_hw[SINGLE_LAYER_PORTS_IN][SINGLE_LAYER_SIZE_IN],
    volatile mem_int out_hw[SINGLE_LAYER_PORTS_OUT][SINGLE_LAYER_SIZE_OUT]
);

#endif
