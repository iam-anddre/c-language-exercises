#include <stdio.h>

int main (){

    float cofre;
    float total = 0;
    char continuar;

    do {
        printf("quanto voce gostaria de colocar no cofrinho?\n");
        printf("[R$0,50] [R$1,00] [R$2,00]\n");
        scanf("%f", &cofre);
        total += cofre;

        printf("Total guardado ate agora: R$%.2f\n", total);

        printf("deseja continuar guardando? [s/n]\n");
        scanf(" %c", &continuar);
    }while (continuar == 's'|| continuar == 'S');

printf("voce guardou no total: %.2f", total);
}