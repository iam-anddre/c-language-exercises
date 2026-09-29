#include <stdio.h>

int main() {

    int numero;
    int fatorial = 1;

    do {
        printf("Digite um numero inteiro entre 0 e 10: ");
        scanf("%d", &numero);

        if (numero < 0 || numero > 10) {
            printf("Numero invalido! Digite novamente.\n");
        }

    } while (numero < 0 || numero > 10);

    for (int i = 1; i <= numero; i++) {
        fatorial = fatorial * i;
    }

    printf("%d! = %d\n", numero, fatorial);

    return 0;
}
