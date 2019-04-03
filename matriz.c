#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

struct matriz{
    int l, c;
    int **mat;
};

Matriz* inicializaMatriz (int nlinhas, int ncolunas){
    Matriz* mtr = malloc(sizeof(Matriz));
    mtr->l = nlinhas;
    mtr->c = ncolunas;
    mtr->mat = malloc(sizeof(int*)*nlinhas);
    for(int i = 0; i < ncolunas; i++){
        mtr->mat[i] = malloc(sizeof(int)*ncolunas);
    }
    return mtr;
}



void modificaElemento (Matriz* mat, int linha, int coluna, int elem){
    if(mat == NULL && linha < mat->l && coluna < mat->c){
        printf("Invalido\n");
    }else{
        mat->mat[linha][coluna] = elem;
    }
}


int recuperaElemento(Matriz* mat, int linha, int coluna){
    if(mat == NULL && linha < mat->l && coluna < mat->c){
        printf("Invalido\n");
    }else{
        return (mat->mat[linha][coluna]);
    }
}


int recuperaNColunas (Matriz* mat){
    if(mat = NULL){
        printf("Invalido\n");
    }else{
        return (mat->c);
    }
}

/*
int recuperaNLinhas (Matriz* mat){

}

Matriz* transposta (Matriz* mat){

}

Matriz* multiplicacao (Matriz* mat1, Matriz* mat2){

}

void imprimeMatriz(Matriz* mat){

}

void destroiMatriz(Matriz* mat){

}
*/