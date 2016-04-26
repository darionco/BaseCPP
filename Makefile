CC      = gcc
CFLAGS  = -g
RM      = rm -f


default: all

all: Main

Main: main.cpp
	mkdir -p bin
	$(CC) $(CFLAGS) -o bin/main main.cpp

clean veryclean:
	$(RM) main
    