
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name SevenBit_2sComplement -dir "/users/btech/sanghi/CS220/Lab6_1/SevenBit_2sComplement/planAhead_run_1" -part xc3s500efg320-4
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "sevenadd_top.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {onebitadder.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {sevenbitadder.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {rotor.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {sevenadd_top.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top sevenadd_top $srcset
add_files [list {sevenadd_top.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc3s500efg320-4
