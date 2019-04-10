#include <stdlib.h>
#include <stdio.h>
#define INICIOARRANJO   1
#define MAXTAM          1000

typedef int Posicao;

typedef struct Produto{
    int codigo;
    char nome[30];
    float preco;
    int qtd;
}produto;

typedef struct TipoLista{
    produto itens[MAXTAM];
    Posicao primeiro, ultimo;
}Lista;

produto criar_prod();

void criar(Lista* new);

void Insere(produto x, Lista *itens);

void Retira(produto p, Lista *itens, produto *Item);

int Vazia(Lista itens);

int Quantidade(Lista itens);

produto buscacodigo(Lista *l, int codigo);

produto maisBarato(Lista *l);