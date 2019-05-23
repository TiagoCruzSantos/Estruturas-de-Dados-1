#include <stdio.h>
#include "calculadora.h"

int main(){
    Cell* pilha = cria_pilha();
    push(4, pilha);
    push(9, pilha);
    push(9, pilha);
    push(7, pilha);
    push(1, pilha);
    push(5, pilha);
    printar(pilha);
    multi(pilha);
    printar(pilha);
    add(pilha);
    printar(pilha);
    pdiv(pilha);
    printar(pilha);
    sub(pilha);
    printar(pilha);
    pop(pilha);
    printar(pilha);
    deleta_pilha(pilha);
    return 0;
}
