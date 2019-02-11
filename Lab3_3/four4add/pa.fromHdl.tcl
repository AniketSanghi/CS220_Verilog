
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name four4add -dir "/users/btech/sanghi/CS220/Lab3_3/four4add/planAhead_run_1" -part xc3s500efg320-4
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "five4add.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {full_adder.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {sixbitadder.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {fourbitadder.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {fivebitadder.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {five4add.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top five4add $srcset
add_files [list {five4add.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc3s500efg320-4
