#include <stdio.h>

// atividade dos triangulos

int main(){
    int lado1, lado2, lado3;
    printf("Digite o valor do lado 1: ");
    scanf("%d", &lado1);
    printf("Digite o valor do lado 2: ");
    scanf("%d", &lado2);
    printf("Digite o valor do lado 3: ");
    scanf("%d", &lado3);

    if (lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado2){
        if(lado1 == lado2 && lado2 == lado3){
            printf("O triangulo e equilatero");
        }else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
            printf("O triangulo e isosceles");
        }else{
            printf("O triangulo e escaleno");
        }

        if (lado1*lado1 == lado2*2 + lado3*2 || lado2*2 == lado1*2 + lado3*2 || lado3*2 == lado1*2 + lado2*2){
            printf(" e retangulo");
        }else if(lado1*lado1 > lado2*lado2 + lado3*lado3 || lado2*lado2 > lado1*lado1 + lado3*lado3 || lado3*lado3 > lado1*lado1 + lado2*lado2){
            printf(" e obtusangulo");
        }else{
            printf(" e acutangulo");
        }
    }else{
        printf("Nao e um triangulo");
    }
    return 0;
}