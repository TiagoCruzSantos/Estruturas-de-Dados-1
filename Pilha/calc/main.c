#include <stdio.h>
#include "calculadora.h"

int main(){
    Cell* pilha = cria_pilha();
    int n;
    char c;
    int k = 1;
    printf("Teste\n>>> ");
    while(k){
        if(scanf("%d", &n) != 1){
            scanf("%c", &c);
            switch(c){
                case '+':
                    add(pilha);
                    break;
                case '-':
                    sub(pilha);
                    break;
                case '/':
                    pdiv(pilha);
                    break;
                case '*':
                    mult(pilha);
                    break;
                default:
                    k = 0;
                    break;
            }
        }else{
            push(n, pilha);
        }
    }
    printar(pilha);
    deleta_pilha(pilha);
    return 0;
}
