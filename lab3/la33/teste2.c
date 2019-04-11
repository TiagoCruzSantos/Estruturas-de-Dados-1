#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char vetor[30], vetor2[30];
    fgets(vetor, 30, stdin);
    fgets(vetor2, 30, stdin);
    if(!strcmp(vetor, vetor2)){
        printf("Iguais\n");
    }else{
        printf("Não iguais\n");
    }
    return 0;
}