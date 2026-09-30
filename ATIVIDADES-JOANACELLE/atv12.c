#include <stdio.h>

int main() {

    int numero;
    int divisores = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++) {

        if (numero % i == 0) {
            divisores++;
        }
    }

    if (divisores == 2) {
        printf("O numero %d eh primo.\n", numero);
    } else {
        printf("O numero %d nao eh primo.\n", numero);
    }

    return 0;
}
