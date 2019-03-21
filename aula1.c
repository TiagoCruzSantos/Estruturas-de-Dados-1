/*

Tiago da Cruz Santos

AULA 1

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void ex1(){ //exercicio 1
    int inteiro, *pInteiro;
    float real, *pReal;
    char caractere, *pCharactere;
    
    pInteiro = &inteiro;
    pReal = &real;
    pCharactere = &caractere;

    scanf("%d", pInteiro);
    getchar();
    scanf("%f", pReal);
    getchar();
    scanf(" %c", pCharactere);
    getchar();
    printf("%d---%.2f---%c\n", inteiro, real, caractere);
}

void ex2(void *a, void *b){ //exercicio 2
    if(a >= b){
        printf("%p\n", a);
    }else{
        printf("%p\n", b);
    }
}

int trocaInteiros(int *a, int *b){ //exercicio 3
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

void ex4(int *p, int t, int a){ //exercicio 4
    for(int i = 0; i < t; i++){
        *p = a;
        p++;
    }
}

void inverte(int n, int *vet){ //exercicio 6
    int aux;
    for(int i = 0; i < (n/2); i++){
        aux = vet[i];
        vet[i] = vet[n - (i+1)];
        vet[n - (i+1)] = aux;
    }
}

int strContida(char *p, char *c){ //exercicio 7
    int a = strlen(p);
    int b = strlen(c);
    int count = 0;
    for(int i = 0; i < a; i++){
        if(*p == *c){
            for(int j = 0; j < b; j++){
                if(*p == *c){
                    count++;
                }
                p++;
                c++;
            }
            if(count == b){
                return 1;
            }else{
                count = 0;
            }
            c -= b;
            p -= b - 1;
        }else{
            p++;
        }
    }
    return 0;
}

int main(){
    int var1 = 5;
    int var2 = 4;
    int *vetor = malloc(sizeof(int) * 10);
    char *frase1 = malloc(sizeof(char) * 30);
    char *frase2 = malloc(sizeof(char) * 20);
    
    ex1();// exercicio 1

    ex2(&var1, &var2);//exercicio 2

    if(trocaInteiros(&var1, &var2)){ //exercicio 3
        printf("TROCADO: %d %d\n", var1, var2);
    }else{
        printf("ORIGINAL: %d %d\n", var1, var2);
    }

    ex4(vetor, 10, 5);//exercicio 4

    for(int i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");


    for(int i = 0; i < 10; i++){
        vetor[i] = i;
    }

    for(int i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");

    inverte(10, vetor);// exercicio 6

    for(int i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");

    fgets(frase1, 30, stdin);
    fgets(frase2, 20, stdin);

    frase1[strlen(frase1) - 1] = '\0';
    frase2[strlen(frase2) - 1] = '\0';

    if(strContida(frase1, frase2)){// exercicio 7
        printf("%s está contido em %s\n", frase2, frase1);
    }else{
        printf("%s não está contido em %s\n", frase2, frase1);
    }

    free(vetor);
    free(frase1);
    free(frase2);
    return 0;
}