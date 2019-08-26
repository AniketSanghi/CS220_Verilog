
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name Rotor -dir "/users/btech/sanghi/CS220/Lab5_1/Rotor/planAhead_run_2" -part xc3s500efg320-4
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "rotor_top.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {Rotor.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {led_ripple.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {rotor_top.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top rotor_top $srcset
add_files [list {rotor_top.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc3s500efg320-4
