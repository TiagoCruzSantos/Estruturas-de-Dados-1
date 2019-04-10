#include "loja.h"

void criar(Lista* new){
    new->primeiro = INICIOARRANJO;
    new->ultimo = new->primeiro;
}

int existe(produto x, Lista *lista){
    for(int i = lista->primeiro - 1; i < lista->ultimo; i++){
        if(x.codigo == lista->itens[i].codigo){
            return 1;
        }
    }
    return 0;
}

produto criar_prod(){
    produto p;
    printf("Codigo: ");
    scanf("%d", &p.codigo);
    getchar();
    printf("Nome: ");
    fgets(p.nome, 30, stdin);
    printf("Preço: ");
    scanf("%f", &p.preco);
    printf("Quantidade: ");
    scanf("%d", &p.qtd);
    return p;
}

void Insere(produto x, Lista *itens){
    if(existe(x, itens)){
        printf("Ja existe produto\n");
        return;
    }
    if(itens->ultimo == MAXTAM){
        printf("Não é possivel inserir\n");
    }else{
        itens->itens[itens->ultimo - 1] = x;
        itens->ultimo++;
    }
}

int Vazia(Lista itens){
    return (itens.primeiro == itens.ultimo);
}



void Retira(produto p, Lista *itens, produto *Item){
    int aux = -1;
    int aux2;
    if(Vazia(*itens)){
        printf("Invalido\n");
        return;
    }
    for(int i = 0; i < itens->ultimo; i++){
        if(p.codigo == itens->itens[i].codigo){
            aux = i+1;
            break;
        }
    }
    if(aux == -1){
        printf("Não existe esse produto\n");
        return;
    }
    *Item = itens->itens[aux-1];
    for(aux2 = aux; aux2 < itens->ultimo; aux2++){
        itens->itens[aux2 - 1] = itens->itens[aux2];
    }
}

int Quantidade(Lista itens){
    return (itens.ultimo - 1);
}

void printar_produto(){
    
}

void pritar_lista(Lista itens){
    for(int i = 0; i < itens->ultimo; i++){

    }
}