#include <stdio.h>
#include <stdlib.h>

typedef struct pilha{
    float num;
    struct pilha *prox;
    int id;
}Cell;

void push(float a, Cell* pilha);

void pop(Cell* pilha);

Cell* cria_pilha();

void deleta_pilha(Cell* pilha);

void printar(Cell* pilha);

void mult(Cell* pilha);

void add(Cell *pilha);

void sub(Cell* pilha);

void pdiv(Cell* pilha);

int eh_vazia(Cell* pilha);
