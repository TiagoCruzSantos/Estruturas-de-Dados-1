#include "listaencadeada.h"

void FLVazia(TipoLista* lista){
    lista->primeiro = NULL;
    lista->ultimo = NULL;
}

int Vazia(TipoLista* lista){
    return (lista->primeiro == NULL);
}

void Insere(Produto x, TipoLista* lista){
    TipoCelula* aux = malloc(sizeof(TipoCelula));
    aux->proximo = NULL;
    aux->item = x;
    if(Vazia(lista)){
        lista->primeiro = aux;
        lista->ultimo = aux;
    }else{
        lista->ultimo->proximo = aux;
        lista->ultimo = aux;
    }
}

Produto criaProduto(int cod, char *nome, int qtd, float preco){
    Produto new;
    new.codigo = cod;
    new.nome = nome;
    new.qtd = qtd;
    new.preco = preco;
    return new;
}

void Retira(int codigo, TipoLista *lista, Produto *Item){
    TipoCelula* anterior = NULL;
    TipoCelula* atual = lista->primeiro;
    while(atual != NULL && codigo != atual->item.codigo){
        anterior = atual;
        atual = atual->proximo;
    }
    if(atual == NULL){
        printf("Tal produto não existe\n");
        return;
    }
    anterior->proximo = atual->proximo;
    *Item = atual->item;
    //free(atual->item.nome);
    free(atual);
}

void ImprimeLista(TipoLista* lista){
    TipoCelula* aux = lista->primeiro;
    while(aux != NULL){
        ImprimeProduto(aux->item);
        aux = aux->proximo;
    }
}

void ImprimeProduto(Produto p){
    printf("Codigo: %d\n", p.codigo);
    printf("Nome: %s\n", p.nome);
    printf("Preço: %.2f\n", p.preco);
    printf("Quantidade: %d\n", p.qtd);
}

void DestruirLista(TipoLista* lista){
    TipoCelula* aux2 = NULL;
    TipoCelula* aux = lista->primeiro;
    while(aux != NULL){
        aux2 = aux;
        aux = aux->proximo;
        free(aux2);
    }
}

Produto maisBarato(TipoLista* lista){
    Produto pre = lista->primeiro->item;
    TipoCelula* aux = lista->primeiro;
    while(aux != NULL){
        if(aux->item.preco < pre.preco){
            pre = aux->item;
        }
        aux = aux->proximo;
    }
    return pre;
}