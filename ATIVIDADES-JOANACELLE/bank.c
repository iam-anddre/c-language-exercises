#include <stdio.h>

int main(){

    int nota200 = 200,
        nota100 = 100,
        nota50 = 50,
        nota20 = 20,
        nota10 = 10,
        nota5 = 5;

    int saque, n;
    int totalNotas200, totalNotas100, totalNotas50, totalNotas20, totalNotas10, totalNotas5;

    printf("Digite o valor do saque: \n");
    printf("Existem 10 notas de cada valor disponiveis para saque\n");
    scanf("%d", &saque);

    if (saque < 5 || saque % 5 != 0){
        printf("Valor invalido para saque");
    }
    else {

        totalNotas200 = saque / nota200;
        if (totalNotas200 > 9)
            totalNotas200 = 9;

        n = saque - totalNotas200 * nota200;


        totalNotas100 = n / nota100;
        if (totalNotas100 > 9)
            totalNotas100 = 9;

        n = n - totalNotas100 * nota100;


        totalNotas50 = n / nota50;
        if (totalNotas50 > 9)
            totalNotas50 = 9;

        n = n - totalNotas50 * nota50;


        totalNotas20 = n / nota20;
        if (totalNotas20 > 9)
            totalNotas20 = 9;

        n = n - totalNotas20 * nota20;


        totalNotas10 = n / nota10;
        if (totalNotas10 > 9)
            totalNotas10 = 9;

        n = n - totalNotas10 * nota10;


        totalNotas5 = n / nota5;
        if (totalNotas5 > 9)
            totalNotas5 = 9;


        printf("\nNotas de 200: %d", totalNotas200);
        printf("\nNotas de 100: %d", totalNotas100);
        printf("\nNotas de 50: %d", totalNotas50);
        printf("\nNotas de 20: %d", totalNotas20);
        printf("\nNotas de 10: %d", totalNotas10);
        printf("\nNotas de 5: %d", totalNotas5);
    }

    return 0;
}