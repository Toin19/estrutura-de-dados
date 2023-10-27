#include <stdio.h>

int main() {
    double valor1, valor2;
    char operador;
    double resultado;

    printf("Digite o primeiro valor: ");
    scanf("%lf", &valor1);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);  // O espaço antes de %c evita que o caractere de nova linha anterior seja lido.

    printf("Digite o segundo valor: ");
    scanf("%lf", &valor2);

    switch (operador) {
        case '+':
            resultado = valor1 + valor2;
            break;
        case '-':
            resultado = valor1 - valor2;
            break;
        case '*':
            resultado = valor1 * valor2;
            break;
        case '/':
            if (valor2 != 0) {
                resultado = valor1 / valor2;
            } else {
                printf("Erro: Divisão por zero não é permitida.\n");
                return 1; // Saia do programa com um código de erro.
            }
            break;
        default:
            printf("Operador inválido\n");
            return 1; // Saia do programa com um código de erro.
    }

    printf("Resultado: %.2lf\n", resultado);

    return 0;
}
