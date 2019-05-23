#include <stdio.h>
#include <stdlib.h>

typedef struct pilha{
    int num;
    struct pilha *prox;
    int id;
}Cell;

void push(int a, Cell* pilha);

void pop(Cell* pilha);

Cell* cria_pilha();

void deleta_pilha(Cell* pilha);

void printar(Cell* pilha);

void mult(Cell* pilha);

void add(Cell *pilha);

void multi(Cell *pilha);

void sub(Cell* pilha);

void pdiv(Cell* pilha);
