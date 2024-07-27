CC=gcc
CFLAGS=-Wall

all: sort

sort: main.o SelectionSort.o InsertionSort.o
    $(CC) $(CFLAGS) -o sort main.o SelectionSort.o InsertionSort.o

main.o: main.c
    $(CC) $(CFLAGS) -c main.c

SelectionSort.o: SelectionSort.c
    $(CC) $(CFLAGS) -c SelectionSort.c

InsertionSort.o: InsertionSort.c
    $(CC) $(CFLAGS) -c InsertionSort.c

clean:
    rm -f *.o sort
