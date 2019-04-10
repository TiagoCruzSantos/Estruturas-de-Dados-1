#include <stdio.h>
#include <stdlib.h>
#include "loja.h"

int main(){
    Lista prods;
    criar(&prods);
    for(int i = 0; i < 5; i++){
        Insere(criar_prod(), &prods);
    }
    return 0;
}