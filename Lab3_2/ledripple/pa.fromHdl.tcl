
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name ledripple -dir "/users/btech/sanghi/CS220/Lab3_2/ledripple/planAhead_run_2" -part xc3s500efg320-4
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "ledripple.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {ledripple.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top ledripple $srcset
add_files [list {ledripple.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc3s500efg320-4
