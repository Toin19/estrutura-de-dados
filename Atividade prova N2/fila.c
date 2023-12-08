#include <stdio.h>
#include <stdlib.h>

#define ELEMENTOS_FILA 6

typedef struct{
    int vetor[ELEMENTOS_FILA];
    int fim;
}fila;

int main(){
    int i;
    fila f;
    f.fim = 0;

    //incluindo os numeros na fila
    f.vetor[f.fim] = 25;
    f.fim++;
    
    f.vetor[f.fim] = 64;
    f.fim++;

    f.vetor[f.fim] = 12;
    f.fim++;
    
    f.vetor[f.fim] = 22;
    f.fim++;

    f.vetor[f.fim] = 11;
    f.fim++;

    f.vetor[f.fim] = 9;
    f.fim++;
  
    for(int i = 0; i<(f.fim); i++){
        printf("%02d ", f.vetor[i]);
    }

    //retirar da fila
    printf("Numero que saiu da fila: %d\n", f.vetor[0]);

    for(int i = 0; i<f.fim; i++){
        f.vetor[i] = f.vetor[i+1];
    }
    f.fim--;

    for(int i = 0; i<(f.fim); i++){
        printf("%02d ", f.vetor[i]);
    }
    return 0;

}