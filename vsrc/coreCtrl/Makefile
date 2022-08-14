
tool = verilator


run:
	$(tool) --trace --cc coreCtrl.v --exe tb_coreCtrl.cc
	make -C obj_dir/ -f VcoreCtrl.mk VcoreCtrl
	./obj_dir/VcoreCtrl

clean:
	rm -rf obj_dir/