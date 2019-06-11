#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"
//aaaaaaaaaaaaaaaa
struct matriz{
    int l, c;
    int **mat;
};

Matriz* inicializaMatriz (int nlinhas, int ncolunas){
    Matriz* mtr = malloc(sizeof(Matriz));
    mtr->l = nlinhas;
    mtr->c = ncolunas;
    mtr->mat = malloc(sizeof(int*)*nlinhas);
    for(int i = 0; i < nlinhas; i++){
        mtr->mat[i] = malloc(sizeof(int)*ncolunas);
    }
    return mtr;

}


void modificaElemento (Matriz* mat, int linha, int coluna, int elem){
    if(mat == NULL && linha > mat->l && coluna > mat->c){
        printf("Invalido\n");
    }else{
        mat->mat[linha][coluna] = elem;
    }
}


int recuperaElemento(Matriz* mat, int linha, int coluna){
    if(mat == NULL && linha > mat->l && coluna > mat->c){
        printf("Invalido\n");
    }else{
        return (mat->mat[linha][coluna]);
    }
}


int recuperaNColunas (Matriz* mat){
    if(mat == NULL){
        printf("Invalido\n");
    }else{
        return (mat->c);
    }
}


int recuperaNLinhas (Matriz* mat){
    if(mat == NULL){
        printf("Invalido\n");
    }else{
        return (mat->l);
    }
}


Matriz* transposta (Matriz* mat){
    Matriz* trans = inicializaMatriz(mat->c, mat->l);
    for(int i = 0; i < mat->l; i++){
        for(int j = 0; j < mat->c; j++){
            trans->mat[i][j] = mat->mat[j][i];
        }
    }
    return trans;
    /*
    f(n) = n + m*n
    O(n) = m*n
    */
}


Matriz* multiplicacao (Matriz* mat1, Matriz* mat2){
    Matriz* mult = inicializaMatriz(mat1->l, mat2->c);
    for(int i = 0; i < mat2->c; i++){
        for(int j = 0; mat2->l; j++){
        }
    }
}


void imprimeMatriz(Matriz* mat){
    for(int i = 0; i < mat->l; i++){
        for(int j = 0; j < mat->c; j++){
            printf("%d ", mat->mat[i][j]);
        }
        printf("\n");
    }
}

void destroiMatriz(Matriz* mat){
    for(int i = 0; i < mat->l; i++){
        free(mat->mat[i]);
    }
    free(mat->mat);
    free(mat);
}
