create_project prj -part xc7z020-clg484-1 -force
set_property target_language verilog [current_project]
set vivado_ver [version -short]
set COE_DIR "../../syn/verilog"
source "/root/fpgaconvnet-tutorial/tutorial/1_simple_end_to_end/partition_0/solution/syn/verilog/fpgaconvnet_ip_ap_dcmp_2_no_dsp_64_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips fpgaconvnet_ip_ap_dcmp_2_no_dsp_64]]
}
