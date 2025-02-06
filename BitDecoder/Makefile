# Author: Noah Bennett

gcc_opt = -std=c99 -pedantic -Wimplicit-function-declaration -Wreturn-type -Wformat -g -c

# all targets currently defined in this file
all: bit_decode.zip bit_decode1 bit_decode2

# .zip file
bit_decode.zip: Makefile bit_decode.c LAB2README
	zip lab2.zip Makefile bit_decode.c LAB2README

# binary converter executable that doesn't prompt for input
bit_decode2: bit_decode2.o
	gcc bit_decode2.o -o bit_decode2

# dependency for bit_decode2
bit_decode2.o: bit_decode.c
	gcc $(gcc_opt) -o bit_decode2.o bit_decode.c

# binary converter executable
bit_decode1: bit_decode1.o
	gcc bit_decode1.o -o bit_decode1

# dependency for bit_decode1
bit_decode1.o: bit_decode.c
	gcc $(gcc_opt) -D PROMPT -o bit_decode1.o bit_decode.c

# deletes all files produced from the Makefile
clean:
	rm -rf *.o bit_decode1 bit_decode2 lab2.zip
