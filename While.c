#include <stdio.h>

int main() {
    int n, i = 1;

    printf("Digite o numero de termos (N): ");
    scanf("%d", &n);

    if (n < 1) {
        printf("O valor de N deve ser maior ou igual a 1.\n");
        return 1;
    }

    printf("Sequencia de numeros em ordem crescente:\n");

    while (i <= n) {
        printf("%d ", i);
        i++;
    }

    printf("\n");

    return 0;
}
