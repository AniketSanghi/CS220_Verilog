
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name seven_bit_adder -dir "/users/btech/sanghi/Lab2_2/seven_bit_adder/planAhead_run_2" -part xc3s500efg320-4
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "seven_bit_adder.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {full_adder.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {seven_bit_adder.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top seven_bit_adder $srcset
add_files [list {seven_bit_adder.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc3s500efg320-4
