#include <stdio.h>

int main() {

    int numero;
    char continuar;

    do {
        printf("Digite um numero para fazer sua tabuada: ");
        scanf("%d", &numero);

        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", numero, i, numero * i);
        }

        printf("Deseja continuar? [s/n]: ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    return 0;
}
