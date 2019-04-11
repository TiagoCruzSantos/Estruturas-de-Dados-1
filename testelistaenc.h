#include <stdio.h>
#include <stdlib.h>

typedef struct item{
    int a;
}item;

typedef struct celula{
    item b;
    struct celula* prox;
}node;

typedef struct lista{
    node* prim;
    node* ult;
}sent;

sent* startList();

int eh_vazia(sent* a);

void insere(item *a, sent* b);
