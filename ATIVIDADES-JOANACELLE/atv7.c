#include <stdio.h>

int main (){

    int totalpassos = 0;
    int totalhoras = 0;
    int passos;
    int horas;

    while (totalpassos <= 10000){
        printf("quantos passos voce deu em quanto tempo?\n");
        scanf("%i %i", &passos, &horas);
        totalpassos += passos;
        totalhoras += horas;

    }printf("foram necessarias %i horas para dar +10.000 passos:", totalhoras);
}