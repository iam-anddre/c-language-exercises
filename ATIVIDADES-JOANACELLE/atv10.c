

#include <stdio.h>

int main() {

    int soma = 0;
    int numero;
    int positivos = 0;
    int negativos = 0;

    do {
        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);

        if (numero > 0) {
            positivos++;
            soma += numero;
        } 
        else if (numero < 0) {
            negativos++;
        }

    } while (numero != 0);

    printf("Existem %d numeros positivos.\n", positivos);
    printf("Existem %d numeros negativos.\n", negativos);
    printf("A soma dos numeros positivos eh %d.\n", soma);

    return 0;
}
