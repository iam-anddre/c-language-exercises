#include <stdio.h>

int main() {

    int pares = 0;
    int impares = 0;
    int numeros;

    for (int i = 1; i <= 10; i++) {
        printf("Digite o %d numero: \n", i);
        scanf("%d", &numeros);

        if (numeros % 2 == 0) {
            printf("O valor eh par\n");
            pares++;
        } else {
            printf("O numero eh impar\n");
            impares++;
        }
    }

    printf("Existem %d numeros pares e %d numeros impares\n", pares, impares);

    return 0;
}