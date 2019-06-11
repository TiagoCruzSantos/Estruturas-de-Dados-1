#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

struct fila{
    Pessoa* pessoa;
    struct fila *prox;
};

Fila* cria_fila(void){
    Fila *novo = malloc(sizeof(Fila));
    novo->pessoa = NULL;
    novo->prox = NULL;
}

void insere(Pessoa *pessoa, Fila* f){
    Fila* novo = malloc(sizeof(Fila));
    novo->pessoa = pessoa;
    novo->prox = f->prox;
    f->prox = novo;
}

Pessoa* retira(Fila* f){
    Fila* aux2 = NULL;
    Fila* aux = f;
    while(aux->prox != NULL){
        aux2 = aux;
        aux = aux->prox;
    }
    aux2->prox = NULL;
    Pessoa* p = aux->pessoa;
    free(aux);
    return p;
}

void imprime_fila(Fila *f){
    Fila *aux = f->prox;
    while(aux != NULL){
        imprimepessoa(aux->pessoa);
        aux = aux->prox;
    }
}

int Vazia_fila(Fila *f){
    if(f->prox == NULL){
        return 1;
    }
    return 0;
}

Fila *destroi_fila(Fila *f){
    Fila *aux = NULL;
    Fila *aux2 = f;
    while(aux2 != NULL){
        aux = aux2;
        aux2 = aux2->prox;
        if(aux->pessoa != NULL){
            destroi_pessoa(aux->pessoa);
        }
        free(aux);
    }
    return NULL;
}
