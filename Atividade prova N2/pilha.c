#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_PILHA 6

typedef struct
{
    int vetor[TAMANHO_PILHA];
    int topo;
}Pilha;

void empilha(int valor, Pilha *pilha);
void desempillha(Pilha *pilha);

void empilha(int valor, Pilha *pilha){
    if(pilha-> topo < TAMANHO_PILHA){
        pilha-> vetor[pilha-> topo] = valor;
        pilha->topo++;
    }else{ //pilha cheia
        printf("Nao ha mais espaco na pilha");
    }
}

void desempillha(Pilha *pilha){
    if(pilha->topo > 0){
        pilha->topo;
        printf("Numero retirado da pilha: %d\n", pilha->vetor[pilha->topo]);
    }else{ //pilha vazia
        printf("A pilha esta vazia. \n");
    }
}

void imprimePilha(Pilha *pilha){
    int i;

    for(i=(pilha->topo); i--; i>=0){
        printf("%02d\n", pilha->vetor[i]);
    }
}

int main(){
    Pilha p;
    p.topo = 0;

    empilha(11, &p); //primero item
    empilha(25, &p); //segundo item
    empilha(22, &p); //terceiro item
    empilha(12,&p); //quarto item
    empilha(64, &p); //quinto item
    empilha(9, &p); //ultimo item
    printf("Pilha: \n");

    imprimePilha(&p);

    return 0;
}
