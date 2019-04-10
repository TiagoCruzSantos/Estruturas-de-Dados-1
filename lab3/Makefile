CC=gcc
CFLAGS=-I. -Wall  -lm
DEPS = listaarranjo.h
OBJ = proglista_arranjo.o listaarranjo.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

progListaArr: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o
