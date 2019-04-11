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

void printar_lista(Lista* itens);

void Retira(int p, Lista *itens, produto *Item);

int Vazia(Lista itens);

int Quantidade(Lista itens);

void printar_produto(produto p);

produto buscacodigo(Lista *l, int codigo);

produto maisBarato(Lista *l);