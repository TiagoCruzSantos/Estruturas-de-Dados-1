#include <stdio.h>
#include <stdlib.h>
#include "testelistaenc.h"

sent* startList(){
    sent* newList = malloc(sizeof(sent));
    newList->prim = NULL;
    newList->ult = NULL;
    return newList;
}

int eh_vazia(sent* a){
    return (a->prim == NULL);
}

void insere(item *a, sent* b){
    node* novo = malloc(sizeof(node));
    if(b->ult == NULL){
        b->prim = b->ult = novo;
    } else {
        b->ult->prox = novo;
        b->ult = b->ult->prox;
    }
    b->ult->b = *a;
    b->ult->prox = NULL;
}

void retira(int num, sent* lista){
    
}