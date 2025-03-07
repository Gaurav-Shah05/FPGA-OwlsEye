set moduleName Relu_1_relu358
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {Relu_1_relu358}
set C_modelType { void 0 }
set C_modelArgList {
	{ in_V_V14 int 16 regular {fifo 0 volatile }  }
	{ out_V_V29 int 16 regular {fifo 1 volatile }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "in_V_V14", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "out_V_V29", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 13
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ in_V_V14_dout sc_in sc_lv 16 signal 0 } 
	{ in_V_V14_empty_n sc_in sc_logic 1 signal 0 } 
	{ in_V_V14_read sc_out sc_logic 1 signal 0 } 
	{ out_V_V29_din sc_out sc_lv 16 signal 1 } 
	{ out_V_V29_full_n sc_in sc_logic 1 signal 1 } 
	{ out_V_V29_write sc_out sc_logic 1 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "in_V_V14_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "in_V_V14", "role": "dout" }} , 
 	{ "name": "in_V_V14_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V_V14", "role": "empty_n" }} , 
 	{ "name": "in_V_V14_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V_V14", "role": "read" }} , 
 	{ "name": "out_V_V29_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_V_V29", "role": "din" }} , 
 	{ "name": "out_V_V29_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_V_V29", "role": "full_n" }} , 
 	{ "name": "out_V_V29_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_V_V29", "role": "write" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "Relu_1_relu358",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "589", "EstimateLatencyMax" : "590",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_relu_fu_18"}],
		"Port" : [
			{"Name" : "in_V_V14", "Type" : "Fifo", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_relu_fu_18", "Port" : "in_V_V"}]},
			{"Name" : "out_V_V29", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_relu_fu_18", "Port" : "out_V_V"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_relu_fu_18", "Parent" : "0", "Child" : ["2", "3", "4"],
		"CDFG" : "relu",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Rewind", "UnalignedPipeline" : "0", "RewindPipeline" : "1", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "588", "EstimateLatencyMax" : "589",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_V_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "in_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_V_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "out_V_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_relu_fu_18.fpgaconvnet_ip_dcfYi_U2548", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_relu_fu_18.fpgaconvnet_ip_ls9j0_U2549", "Parent" : "1"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_relu_fu_18.fpgaconvnet_ip_shbak_U2550", "Parent" : "1"}]}


set ArgLastReadFirstWriteLatency {
	Relu_1_relu358 {
		in_V_V14 {Type I LastRead 1 FirstWrite -1}
		out_V_V29 {Type O LastRead -1 FirstWrite 14}}
	relu {
		in_V_V {Type I LastRead 1 FirstWrite -1}
		out_V_V {Type O LastRead -1 FirstWrite 14}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "589", "Max" : "590"}
	, {"Name" : "Interval", "Min" : "589", "Max" : "590"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	in_V_V14 { ap_fifo {  { in_V_V14_dout fifo_data 0 16 }  { in_V_V14_empty_n fifo_status 0 1 }  { in_V_V14_read fifo_update 1 1 } } }
	out_V_V29 { ap_fifo {  { out_V_V29_din fifo_data 1 16 }  { out_V_V29_full_n fifo_status 0 1 }  { out_V_V29_write fifo_update 1 1 } } }
}
