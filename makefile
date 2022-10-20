CC = gcc

makeVec: main.o vec.o
	$(CC) -o test main.o vec.o

main.o: main.c 
	$(CC) -c main.c

vec.o: vec.c vec.h
	$(CC) -c vec.c

clean: 
	del *.o

.PHONY: clean