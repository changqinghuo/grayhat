meet:meet.o
	cc -o meet meet.o

meet.o: meet.c
	cc -c -ggdb  -mpreferred-stack-boundary=2 -fno-stack-protector -z execstack meet.c
clean:
	rm meet.o
