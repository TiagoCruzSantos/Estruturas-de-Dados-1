#include <stdio.h>
#include <stdlib.h>
#include "loja.h"

int main(){
    Lista prods;
    int cod;
    produto produto_rem;
    produto return_prod;
    criar(&prods);
    if(Vazia(prods)){
        printf("Vazia\n");
    }else{
        printf("Com itens\n");
    }
    for(int i = 0; i < 5; i++){
        Insere(criar_prod(), &prods);
    }
    if(Vazia(prods)){
        printf("Vazia\n");
    }else{
        printf("Com itens\n");
    }
    printar_lista(&prods);
    printf("Insira o produto a ser removido: ");
    scanf("%d", &cod);
    Retira(cod, &prods, &produto_rem);
    printar_lista(&prods);
    printf("Insira o produto a ser buscado: ");
    scanf("%d", &cod);
    return_prod = buscacodigo(&prods, cod);
    printar_produto(return_prod);
    return_prod = maisBarato(&prods);
    printar_produto(return_prod);
    return 0;
}