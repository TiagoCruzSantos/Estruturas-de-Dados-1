CC=gcc
CFLAGS=-I. -Wall  -lm  -g
DEPS = listahet.h
OBJ = proglistahet.o listahet.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)


proglistahet: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o