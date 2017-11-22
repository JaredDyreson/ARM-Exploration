all: sum

sum: sum.o
	gcc -o $@ $+
sum.o: sum.s
	as -o $@ $<
clean: 
	rm -vf sum *.o
