CC = gcc
TARGET = calculadora

all: objs
	$(CC) funcoes.o main.o -o $(TARGET)

objs:
	$(CC) -c funcoes.c
	$(CC) -c main.c

clear:
	rm *.o
