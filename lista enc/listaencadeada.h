#ifndef LISTAENC_H_
#define LISTAENC_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
  int codigo;
  char *nome;
  float preco;
  int qtd;
}Produto;


typedef struct TipoCelula {
  Produto item;
  struct TipoCelula* proximo;
} TipoCelula;

typedef struct {
  TipoCelula *primeiro, *ultimo;
} TipoLista;


/* Faz a lista ficar vazia */
void FLVazia(TipoLista *Lista);

/*Verifica se a lista esta vazia*/
int Vazia(TipoLista* Lista);

/* Insere x apos o ultimo elemento da lista */
void Insere(Produto x, TipoLista *Lista);

/** Busca um produto pelo codigo - retornando a celula inteira*/
TipoCelula* BuscaCodigo(int codigo, TipoLista *lista);

/*Retira um elemento da lista */
void Retira(int codigo, TipoLista *Lista, Produto *Item);

/*Imprime a lista */
void ImprimeLista(TipoLista* Lista);

/*Quantidade de elementos na lista*/
int Quantidade(TipoLista Lista);

/**FUNCOES OPACAS DO STRUCT PRODUTO **/
Produto  criaProduto(int cod, char *nome, int qtd, float preco);

void ImprimeProduto(Produto p);

Produto maisBarato(TipoLista* lista);

void DestruirLista(TipoLista* lista);


#endif /* LISTAENC_H_ */
