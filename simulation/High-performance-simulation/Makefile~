#-------------------------------------------------------------------
#	
#	Filename      : makefile
#	Author        : Pang Yalong
#	Created       : 2017-9-15
#	Description   : makefile to use vcs
#  	Targets	      :	make vcslog	compile with vcs
#			make vcsim	run simulation with vcs
#
#-------------------------------------------------------------------

#*** VARIABLES *****************************************************************

NAME_TOP			:= top
USERNAME			:= $(shell whoami)
SOURCE_FILE     	        := file.list


OUT_DIR=out
LOG_DIR=log

#*** MAIN BODY *****************************************************************

default:
	@echo 
	@echo "Make targets:"
	@echo "  make vcssim     run simulations using vcs"
	@echo "  make vcslog     compile modules only using vcs"
	@echo 

# compile with vcs 
vcslog:
	mkdir -p $(LOG_DIR)
	vcs +v2k  -f  $(SOURCE_FILE) -full64 -sverilog -debug_pp +notimingcheck -timescale=1ns/10ps | tee $(LOG_DIR)/sim_pre.log

# run simulation with vcs
vcssim: vcslog
	mkdir -p $(OUT_DIR)
	./simv   -ucli -do do.tcl |tee  $(LOG_DIR)/sim.log 
# clean 
clean:
	rm -rf $(LOG_DIR) $(OUT_DIR)  simv DVEfiles/  csrc/  simv.daidir/ ucli.key  inter.vpd 

