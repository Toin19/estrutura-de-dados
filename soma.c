#include <stdio.h>

int main() {
    int n, i, soma = 0;

    printf("Digite o número de termos (N): ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        printf("%d ", i);
        soma += i;
    }

    printf("\nA soma da sequência é: %d\n", soma);

    return 0;
}
