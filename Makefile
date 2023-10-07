
CC = gcc
CFLAGS = -Wall

exe: main.o copy.o
	$(CC) $(CFLAGS) -o $@ $^

main.o: main.c copy.h
	$(CC) $(CFLAGS) -c $<

copy.o: copy.c
	$(CC) $(CFLAGS) -c $<

