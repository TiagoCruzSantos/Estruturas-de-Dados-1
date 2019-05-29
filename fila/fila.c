#include "fila.h"

Fila* cria_fila(void){
    Fila* novo = malloc(sizeof(Fila));
    novo->principal = cria_pilha();
    novo->auxiliar = cria_pilha();
    return novo;
}

void insere(Pessoa* pessoa, Fila* f){
    push(pessoa, f->principal);
}

Pessoa* retira(Fila* f){
    Pessoa *p;
    while(!vazia_pilha(f->principal)){
        push(pop(f->principal), f->auxiliar);
    }
    p = pop(f->auxiliar);
    while(!vazia_pilha(f->auxiliar)){
        push(pop(f->auxiliar), f->principal);
    }
    return p;
}

void imprime_fila(Fila* f){
    imprime_pilha(f->principal);
}

Fila* destroi_fila(Fila* f){
    destroi_pilha(f->principal);
    destroi_pilha(f->auxiliar);
    free(f);
}
