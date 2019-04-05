#include <stdio.h>
#include <stdlib.h>

typedef struct item{
    int a;
}Num;

typedef struct celula{
    Num b;
    struct celula* prox;
}node;

typedef struct lista{
    node* prim;
    node* ult;
}sent;

sent* startList(){
    sent* newList = malloc(sizeof(sent));
    newList->prim = NULL;
    newList->ult = NULL;
    return newList;
}

int vazia(sent* a){
    return (a->prim == NULL);
}

void insere(item a, sent* b){
    node* novo = malloc(sizeof(node));
    
    if(b->ult == NULL){
        b->prim = b->ult = novo;
    }
}

int main(){

}