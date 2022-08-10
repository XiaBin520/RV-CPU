
tool = verilator


run:
	$(tool) --trace --cc core.v --exe tb_core.cc
	make -C obj_dir/ -f Vcore.mk Vcore
	./obj_dir/Vcore

clean:
	rm -rf obj_dir/