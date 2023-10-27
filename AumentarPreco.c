#include <stdio.h>

int main(){
    float preco, novoPreco;
    
    printf("Digite o preço do produto: R$");
    scanf("%f", &preco);
    
    if(preco < 100){
        novoPreco = preco * 1.20;
        printf("Valor original: R$%.2f\n", preco);
        printf("Aumento de 20%%\n");
    }else{
        novoPreco = preco * 1.10;
        printf("Valor original: R$%.2f\n", preco);
        printf("Aumento de 10%%\n");
    }
        printf("Valor final: R$%.2f\n", novoPreco);
        return 0;
}