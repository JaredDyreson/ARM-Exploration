all: ../Small Programs/HelloWorld.asm

../Small Programs/HelloWorld.asm: ../Small Programs/HelloWorld.asm.o
	gcc -o $@ $+
../Small Programs/HelloWorld.asm.o: ../Small Programs/HelloWorld.asm.s
	as -o $@ $<
clean: 
	rm -vf ../Small Programs/HelloWorld.asm *.o
