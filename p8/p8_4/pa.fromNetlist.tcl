
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name p88 -dir "G:/cpu/p8_4/planAhead_run_2" -part xc6slx100fgg676-2
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "G:/cpu/p8_4/mips.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {G:/cpu/p8_4} {ipcore_dir} }
add_files [list {ipcore_dir/DMM.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/IMM.ncf}] -fileset [get_property constrset [current_run]]
set_property target_constrs_file "PIN.ucf" [current_fileset -constrset]
add_files [list {PIN.ucf}] -fileset [get_property constrset [current_run]]
link_design
