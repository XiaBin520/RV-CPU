
tool = verilator


run:
	$(tool) --trace --cc CPU.v --exe tb_CPU.cc
	make -C obj_dir/ -f VCPU.mk VCPU
	./obj_dir/VCPU

clean:
	rm -rf obj_dir/