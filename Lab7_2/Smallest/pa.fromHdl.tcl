
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name Smallest -dir "/users/btech/sanghi/CS220/Lab7_2/Smallest/planAhead_run_2" -part xc3s500efg320-4
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "Smallest.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {lcd_driver.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Smallest.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top Smallest $srcset
add_files [list {Smallest.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc3s500efg320-4
