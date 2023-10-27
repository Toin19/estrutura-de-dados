#include <stdio.h>

int main(){
    int numero;
    
    printf("Digite um numero:");
    scanf("%d", &numero);
    
    if(numero % 2 == 0){
        printf("O numero %d é par\n", numero);
    }else{
        printf("O numero %d é impar\n", numero);
    }
      //verificar se o numero é positivo ou negativo
    if(numero > 0){
        printf("O numero %d é positivo\n", numero);
    }else if(numero < 0){
        printf("O numero %d é negativo\n, numero");
    }else{
        printf("O numero é zero\n");
    }
        return 0;
}