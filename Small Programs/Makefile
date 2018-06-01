all: HelloWorld.s

HelloWorld.s: HelloWorld.s.o
	gcc -o $@ $+
HelloWorld.s.o: HelloWorld.s.s
	as -o $@ $<
clean: 
	rm -vf HelloWorld.s *.o
