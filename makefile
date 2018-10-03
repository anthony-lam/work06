all: struct.o
	gcc -o struct.out struct.o

struct.o: struct.c
	gcc -c struct.c

run:
	./struct.out

clean:
	rm *.o
