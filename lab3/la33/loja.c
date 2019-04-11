#include "loja.h"

void criar(Lista* new){
    new->primeiro = INICIOARRANJO;
    new->ultimo = new->primeiro;
}

int existe(produto x, Lista *lista){
    for(int i = lista->primeiro - 1; i < lista->ultimo-1; i++){
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



void Retira(int p, Lista *itens, produto *Item){
    int aux = -1;
    int aux2;
    if(Vazia(*itens)){
        printf("Invalido\n");
        return;
    }
    for(int i = 0; i < itens->ultimo-1; i++){
        if(p == itens->itens[i].codigo){
            if(itens->itens[i].qtd > 0){
                printf("Produto em estoque não pode ser removido\n");
                return;
            }
            aux = i+1;
            break;
        }
    }
    if(aux == -1){
        printf("Não existe esse produto\n");
        return;
    }
    *Item = itens->itens[aux-1];
    for(aux2 = aux; aux2 < itens->ultimo-1; aux2++){
        itens->itens[aux2 - 1] = itens->itens[aux2];
    }
    itens->ultimo--;
}

int Quantidade(Lista itens){
    return (itens.ultimo - 1);
}

void printar_produto(produto p){
    printf("\n");
    printf("Codigo: %d\n", p.codigo);
    printf("Nome: %s", p.nome);
    printf("Preço: %.2f\n", p.preco);
    printf("Quamtidade: %d\n", p.qtd);
}

void printar_lista(Lista* itens){
    for(int i = 0; i < itens->ultimo-1; i++){
        printar_produto(itens->itens[i]);
    }
}

produto buscacodigo(Lista *l, int codigo){
    produto prod;
    prod.codigo = 0;
    for(int i = 0; i < 29; i++){
        prod.nome[i] = '0';
    }
    prod.nome[29] = '\n';
    prod.preco = 0;
    prod.qtd = 0;
    for(int i = 0; i < l->ultimo - 1; i++){
        if(codigo == l->itens[i].codigo){
            return (l->itens[i]);
        }
    }
    return prod;
}

produto maisBarato(Lista *l){
    produto prod_aux = l->itens[0];
    for(int i = 1; i < l->ultimo - 1; i++){
        if(l->itens[i].preco < prod_aux.preco){
            prod_aux = l->itens[i];
        }
    }
    return prod_aux;
}