.PHONY: clean all test
CC = gcc
FLAGS= -g -Wall

all: StrList test

clean:
    rm -f *.o *.a StrList test

StrList: StrList.o Main.o
    $(CC) $(FLAGS) StrList.o Main.o -o StrList

test: test.o StrList.o
    $(CC) $(FLAGS) test.o StrList.o -o test

StrList.o: StrList.c StrList.h
    $(CC) $(FLAGS) -c StrList.c

Main.o: Main.c StrList.h
    $(CC) $(FLAGS) -c Main.c

test.o: test.c StrList.h
    $(CC) $(FLAGS) -c test.c
