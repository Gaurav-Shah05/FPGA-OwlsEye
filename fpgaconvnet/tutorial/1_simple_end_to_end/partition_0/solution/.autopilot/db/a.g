#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /root/fpgaconvnet-tutorial/tutorial/1_simple_end_to_end/partition_0/solution/.autopilot/db/a.g.bc ${1+"$@"}
