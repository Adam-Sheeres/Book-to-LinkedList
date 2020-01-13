#name: Adam Sheeres-Paulicpulle
#student ID: 1035659
#email: asheeres@uoguelph.ca
CFLAGS = -ansi -Wall -pedantic
CC = gcc

all: text.o
	clear
	$(CC) $(CFLAGS) text.c -o text

run:
	clear
	./text

clean:
	rm *.o

add:
	git add text.c
	git add text.h
