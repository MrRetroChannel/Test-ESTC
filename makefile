CC = gcc

DEPS = main.o vec.o

makeVec: $(DEPS)
	$(CC) -o test $^

%.o: %.c
	$(CC) -c $^

clean: 
	del *.o

.PHONY: clean
