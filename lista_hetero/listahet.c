#include "listahet.h"

typedef struct cliente {
    char* nome;
    int id;
}Cliente;

typedef struct movel{
    int placa;
    int ano;
    float valor;
}Movel;

typedef struct imovel{
    int identificador;
    int ano;
    float valor;
}Imovel;

typedef struct listahet{
    Cliente* dono;
    void* item;
    int identificador;
    struct listahet *proximo;
}ListaHet;

ListaHet* cria(){
    ListaHet* novo = malloc(sizeof(ListaHet));
    novo->proximo = NULL;
    return novo;
}

Cliente* cria_cliente (char* nome, int id){
    Cliente* novo = malloc(sizeof(Cliente));
    novo->nome = nome;
    novo->id = id;
    return novo;
}

Movel* cria_movel (int placa, int ano, float valor){
    Movel* novo = malloc(sizeof(Movel));
    novo->placa = placa;
    novo->ano = ano;
    novo->valor = valor;
    return novo;
}

Imovel* cria_imovel (int id, int ano, float valor){
    Imovel* novo = malloc(sizeof(Imovel));
    novo->identificador = id;
    novo->ano = ano;
    novo->valor = valor;
    return novo;
}

ListaHet* insere_movel (ListaHet* lista, Cliente* dono, Movel* item){
    ListaHet* aux = malloc(sizeof(ListaHet));
    aux->dono = dono;
    aux->item = (Movel*) item;
    aux->proximo = lista->proximo;
    aux->identificador = 0;
    lista->proximo = aux;
    return lista;
}

ListaHet* insere_imovel (ListaHet* lista, Cliente* dono, Imovel* item){
    ListaHet* aux = malloc(sizeof(ListaHet));
    aux->dono = dono;
    aux->item = (Imovel*) item;
    aux->proximo = lista->proximo;
    aux->identificador = 1;
    lista->proximo = aux;
    return lista;
}



void ImprimeCliente(Cliente* dono){
    printf("Cliente: %s\n", dono->nome);
    printf("Id do cliente: %d\n", dono->id);
}

void ImprimeMovel(Movel* movel){
    printf("Placa: %d\n", movel->placa);
    printf("Ano: %d\n", movel->ano);
    printf("Valor: %.2f\n", movel->valor);
}

void ImprimeImovel(Imovel* imovel){
    printf("Id: %d\n", imovel->identificador);
    printf("Ano: %d\n", imovel->ano);
    printf("Valor: %.2f\n", imovel->valor);
}

void imprime (ListaHet* lista){
    ListaHet* aux = lista->proximo;
    while(aux != NULL){
        ImprimeCliente(aux->dono);
        switch(aux->identificador){
            case 0:
                ImprimeMovel((Movel*) aux->item);
                break;
            case 1:
                ImprimeImovel((Imovel*) aux->item);
                break;
        }
        aux = aux->proximo;
    }
}

void DestroiLista(ListaHet* lista){
    ListaHet* aux = lista;
    ListaHet* aux2 = NULL;
    while(aux != NULL){
        aux2 = aux;
        aux = aux->proximo;
        free(aux2->item);
        free(aux2);
    }
}