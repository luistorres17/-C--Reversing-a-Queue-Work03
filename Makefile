
CC           = g++
CFLAGS   = -ansi -Wall
LDFLAGS = 

all: test clean

test: main.o Stack.o Queue.o
	$(CC) -o $@ $^ $(LDFLAGS)

main.o: colainvertida.cpp
	$(CC) -o $@ -c $(CFLAGS) $<

Stack.o: libs/Stack.cpp libs/Stack.h
	$(CC) -o $@ -c $(CFLAGS) $<

Queue.o: libs/Queue.cpp libs/Queue.h
	$(CC) -o $@ -c $(CFLAGS) $<


.PHONY: clean cleanest

clean:
	rm *.o

cleanest: clean
	rm test