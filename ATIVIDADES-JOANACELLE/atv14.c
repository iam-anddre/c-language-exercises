#include <stdio.h>

int main() {

    int secreto = 73;
    int palpite;
    int tentativas;
    int acertou = 0;

    for (tentativas = 1; tentativas <= 10; tentativas++) {

        printf("Tentativa %d de 10\n", tentativas);
        printf("Digite seu palpite (1 a 100): ");
        scanf("%d", &palpite);

        if (palpite < secreto) {
            printf("O numero secreto eh maior.\n\n");

        } else if (palpite > secreto) {
            printf("O numero secreto eh menor.\n\n");

        } else {
            printf("Parabens! Voce acertou!\n");
            acertou = 1;
            break;
        }
    }

    if (acertou == 1) {
        printf("Quantidade de tentativas: %d\n", tentativas);
    } else {
        printf("Voce nao acertou em 10 tentativas.\n");
        printf("O numero secreto era: %d\n", secreto);
    }

    return 0;
}