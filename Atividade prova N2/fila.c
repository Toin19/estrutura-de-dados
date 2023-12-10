#include <stdio.h>
#include <stdlib.h>

int qretrieve();
void qstore(int i);

#define MAX 6
int fila[MAX];
int fim = 0;
int inicio = 0;

void main(){
    qstore(64);
    qstore(25);
    qstore(12);
    qstore(22);
    qstore(11);
    qstore(9);

    qretrieve();
    qretrieve();
    qretrieve();
    qretrieve();
    qretrieve();
    qretrieve();
}

 void qstore(int i){
    if(fim == MAX){
        printf("A fila esta cheia.\n");
        return;
    }

    fila[fim] = i;
    fim++;
    printf("Enfileirando: %d\n", i);
}

int qretrieve(){
    if(inicio == fim){
        printf("A fila esta vazia.\n");
    }

    inicio++;
    printf("Desenfileirando: %d\n", fila[inicio - 1]);
    return fila [inicio - 1];
}

