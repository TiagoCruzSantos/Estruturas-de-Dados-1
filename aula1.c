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

void ex3(){
    
}

int main(){
    ex1();
    int var1;
    int var2;
    ex2(&var1, &var2);
    printf("%p, %p\n", &var1, &var2);
    return 0;
}