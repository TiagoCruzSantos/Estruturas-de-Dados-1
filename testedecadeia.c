#include <stdio.h>
#include <stdlib.h>
#include "testelistaenc.h"

int main(){
    sent* nova = startList();
    int rem;
    for(int i = 0; i < 10; i++){
        insere(criar_item(), nova);
    }
    imprime(nova);
    printf("DIgite um numero a remover: ");
    scanf("%d", &rem);
    retira(rem, nova);
    imprime(nova);
    destroi(nova);
    return 0;
}
