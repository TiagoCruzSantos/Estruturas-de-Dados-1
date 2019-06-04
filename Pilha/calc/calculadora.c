#include "calculadora.h"

void push(float a, Cell* pilha){
    Cell* novo = malloc(sizeof(Cell));
    novo->id = 1;
    novo->num = a;
    novo->prox = pilha->prox;
    pilha->prox = novo;
}

Cell* cria_pilha(){
    Cell* novo = malloc(sizeof(Cell));
    novo->prox = NULL;
    novo->id = 0;
    return novo;
}

void printx(Cell* pilha){
    if(pilha->prox != NULL){
        printx(pilha->prox);
    }
    if(pilha->id == 1){
        printf("%.2f ", pilha->num);
    }
}

void printar(Cell* pilha){
    printx(pilha);
    printf("\n");
}

void pop(Cell* pilha){
    Cell* aux = pilha->prox;
    pilha->prox = aux->prox;
    free(aux);
}

void deleta_pilha(Cell* pilha){
    Cell* aux = pilha;
    Cell* aux2 = NULL;
    while(aux != NULL){
        aux2 = aux;
        aux = aux->prox;
        free(aux2);
    }
}

void add(Cell* pilha){
    pilha->prox->prox->num = pilha->prox->num + pilha->prox->prox->num;
    pop(pilha);
}

void mult(Cell * pilha){
    pilha->prox->prox->num = pilha->prox->num * pilha->prox->prox->num;
    pop(pilha);

}

void sub(Cell* pilha){
    pilha->prox->prox->num = pilha->prox->num - pilha->prox->prox->num;
    pop(pilha);
}

void pdiv(Cell *pilha){
    pilha->prox->prox->num = pilha->prox->num / pilha->prox->prox->num;
    pop(pilha);
}

int eh_vazia(Cell* pilha){
    return (pilha->prox == NULL);
}
