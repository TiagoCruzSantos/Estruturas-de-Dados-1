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

void insere(item a, sent* b){
    node* novo = malloc(sizeof(node));
    if(b->ult == NULL){
        b->prim = b->ult = novo;
    } else {
        b->ult->prox = novo;
        b->ult = b->ult->prox;
    }
    b->ult->b = a;
    b->ult->prox = NULL;
}

void retira(int num, sent* lista){
    node* ant = NULL;
    node* per = lista->prim;
    while(per != NULL && per->b.a != num){
        ant = per;
        per = per->prox;
    }
    ant->prox = per->prox;
    free(per);
}

item criar_item(){
    item a;
    printf("Insira um item: ");
    scanf("%d", &a.a);
    return a;
}

void imprime(sent* a){
    if(eh_vazia(a)){
        printf("Lista vazia\n");
        return;
    }
    node* agr = a->prim;
    while(agr != NULL){
        printf("Número: %d\n", agr->b.a);
        agr = agr->prox;
    }
}

void destroi(sent* a){
    a->ult = NULL;
    node* b;
    while(a->prim != NULL){
        b = a->prim;
        a->prim = b->prox;
        free(b);
    }
    free(a);
}