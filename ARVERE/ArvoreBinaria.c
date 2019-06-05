#include "ArvoreBinaria.h"

typedef struct NO{
    int info;
    struct NO *dir;
    struct NO *esq;
}NO;

ArvBin* cria_ArvBin(){
    ArvBin* novo = malloc(sizeof(ArvBin));
    (*novo) = NULL;
    return novo;
}

int insere_ArvBin(ArvBin* raiz, int valor){
    if(raiz == NULL){
        return 0;
    }
    NO* novo = malloc(sizeof(NO));
    novo->dir = NULL;
    novo->esq = NULL;
    novo->info = valor;
    NO* aux = (*raiz);
    if((*raiz) == NULL){
        (*raiz) = novo;
        return 1;
    }else{
        while(aux->esq != NULL || aux->dir != NULL ){
            if(valor < aux->info){
                if(aux->esq == NULL){
                    break;
                }
                aux = aux->esq;
            }else{
                if(aux->dir == NULL){
                    break;
                }
                aux = aux->dir;
            }
        }

        if(valor < aux->info){
            aux->esq = novo;
        }else{
            aux->dir = novo;
        }
        return 1;
    }
}

int consulta_ArvBin(ArvBin *raiz, int valor){
    NO* aux = (*raiz);
    while(aux != NULL && aux->info != valor){
        if(valor < aux->info){
            aux = aux->esq;
        }else{
            aux = aux->dir;
        }
    }
    if(aux != NULL){
        return 1;
    }else{
        return 0;
    }
}

void preOrdem_ArvBin(ArvBin *raiz){
    NO* aux = (*raiz);
    printf("%d, ", aux->info);
    if(aux->esq != NULL){
        preOrdem_ArvBin(&(aux->esq));
    }
    if(aux->dir !=NULL){
        preOrdem_ArvBin(&(aux->dir));
    }
}

void emOrdem_ArvBin(ArvBin* raiz){
    NO* aux = (*raiz);
    if(aux->esq != NULL){
        emOrdem_ArvBin(&(aux->esq));
    }
    printf("%d, ", aux->info);
    if(aux->dir != NULL){
        emOrdem_ArvBin(&(aux->dir));
    }
}

void pos(){
    
}
