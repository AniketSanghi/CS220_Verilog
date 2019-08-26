
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name mini_processor -dir "/users/btech/sanghi/CS220/Lab10_1/mini_processor/planAhead_run_1" -part xc3s500efg320-4
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "mini_processor.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {mini_processor.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top mini_processor $srcset
add_files [list {mini_processor.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc3s500efg320-4
