/*

Tiago da Cruz Santos

AULA 1

*/

#include <stdio.h>
#include <stdlib.h>


void ex1(){
    int inteiro, *pInteiro;
    float real, *pReal;
    char caractere, *pCharactere;
    
    pInteiro = &inteiro;
    pReal = &real;
    pCharactere = &caractere;

    scanf("%d", pInteiro);
    scanf("%f", pReal);
    scanf(" %c", pCharactere);
    printf("%d---%.2f---%c\n", inteiro, real, caractere);
}

void ex2(void *a, void *b){
    if(a >= b){
        printf("%p\n", a);
    }else{
        printf("%p\n", b);
    }
}

int trocaInteiros(int *a, int *b){
   int help;
   
   if(*a > *b){
       help = *a;
       *a = *b;
       *b = help;
       return 1;
   }else{
       return 0;
   }
}

void ex4(int *p, int t, int a){
    for(int i = 0; i < t; i++){
        *p = a;
        p++;
    }
}

int main(){
    int var1 = 5;
    int var2 = 4;
    int *vetor = malloc(sizeof(int) * 10);
    ex1();
    ex2(&var1, &var2);
    if(trocaInteiros(&var1, &var2)){
        printf("TROCADO: %d %d\n", var1, var2);
    }else{
        printf("ORIGINAL: %d %d\n", var1, var2);
    }
    ex4(vetor, 10, 5);
    for(int i = 0; i < 10; i++){
        printf("%d, ", vetor[i]);
    }
    printf("\n");
    free(vetor);
    return 0;
}