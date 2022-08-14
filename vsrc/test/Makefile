
tool = verilator


run:
	$(tool) --trace --cc test.v --exe tb_test.cc
	make -C obj_dir/ -f Vtest.mk Vtest
	./obj_dir/Vtest

clean:
	rm -rf obj_dir/