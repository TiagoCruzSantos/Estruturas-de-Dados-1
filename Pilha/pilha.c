#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>

struct pessoa{
  char *nome;
  int idade;
  char *endereco;
};

struct pilha{
    int topo, base;
    Pessoa* pessoas[10];
};

Pilha *cria_pilha(){
    Pilha *new = malloc(sizeof(Pilha));
    new->topo = 0;
    new->base = 0;
    return new;
}

void push(Pessoa *pessoa, Pilha* pilha){
    if(pilha->topo < 10){
        pilha->pessoas[pilha->topo] = pessoa;
        pilha->topo++;
    }else{
        printf("Pilha cheia\n");
    }
}

Pessoa* inicializaPessoa(char* nome, int idade, char* endereco){
    Pessoa *new = malloc(sizeof(Pessoa));
    new->nome = nome;
    new->idade = idade;
    new->endereco = endereco;
    return new;
}

void imprime_pilha(Pilha* pilha){
    for(int i = 0; i < pilha->topo; i++){
        printf("Nome: %s\nIdade: %d\nEndereco: %s\n", pilha->pessoas[i]->nome, pilha->pessoas[i]->idade, pilha->pessoas[i]->endereco);
    }
    //printf("TOPO: N: %s, I: %d, E: %s\n", pilha->pessoas[pilha->topo]->nome, pilha->pessoas[pilha->topo]->idade, pilha->pessoas[pilha->topo]->endereco);
}

Pessoa* pop(Pilha *pilha){
    pilha->topo--;
    return pilha->pessoas[pilha->topo];
}

Pilha* destroi_pilha(Pilha* pilha){
    for(int i = 0; i < pilha->topo; i++){
        free(pilha->pessoas[i]);
    }
    free(pilha);
}
