CC=gcc
CFLAGS=-Wall

all: sort

sort: main.o selection_sort.o insertion_sort.o
    $(CC) $(CFLAGS) -o sort main.o selection_sort.o insertion_sort.o

main.o: main.c
    $(CC) $(CFLAGS) -c main.c

selection_sort.o: selection_sort.c
    $(CC) $(CFLAGS) -c selection_sort.c

insertion_sort.o: insertion_sort.c
    $(CC) $(CFLAGS) -c insertion_sort.c

clean:
    rm -f *.o sort
