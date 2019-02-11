
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name eight_bit_compartor -dir "/users/btech/sanghi/CS220/Lab2_3/eight_bit_compartor/planAhead_run_2" -part xc3s500efg320-4
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "eight_bit_comparator.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {comparator.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {eight_bit_comparator.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top eight_bit_comparator $srcset
add_files [list {eight_bit_comparator.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc3s500efg320-4
