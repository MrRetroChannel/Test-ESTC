CC = gcc

makeVec: main.o vec.o

	$(CC) main.o vec.o