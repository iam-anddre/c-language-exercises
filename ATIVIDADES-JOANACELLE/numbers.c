#include <stdio.h>

int main (){

    int a, b, c;
    printf("Digite tres numeros inteiros: \n");
    scanf("%d %d %d", &a, &b ,&c);
    if (a>b && a>c){
        printf("O maior numero e: %d\n", a);
    }else if (b>a && b>c){
        printf("O maior numero e: %d\n", b);
    }else{
        printf("O maior numero e: %d\n", c);
    }if (a<b && a<c){
        printf("O menor numero e: %d\n", a);
    }else if (b<a && b<c){
        printf("O menor numero e: %d\n", b);
    }else{
        printf("O menor numero e: %d\n", c);
    }
        if (a==b && a==c){
            printf("Os tres numeros sao iguais\n");
        }else if (a==b || a==c || b==c){
            printf("Dois numeros sao iguais\n");
        }
        if (a>b && a>c){
            printf("os numeros em ordem crescente sao: %d, %d, %d\n", a, b, c);
        }else {
            printf("os numeros em ordem decrescente sao: %d, %d, %d\n", c, b, a);
        }
}

<!-- #include <stdio.h>

int main() {
    int a, b, c, maior, menor, meio;

    printf("Digite tres numeros inteiros: \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b) {
        if (b >= c)      { maior = a; meio = b; menor = c; }
        else if (a >= c) { maior = a; meio = c; menor = b; }
        else             { maior = c; meio = a; menor = b; }
    } else {
        if (a >= c)      { maior = b; meio = a; menor = c; }
        else if (b >= c) { maior = b; meio = c; menor = a; }
        else             { maior = c; meio = b; menor = a; }
    }

    printf("O maior numero e: %d\n", maior);
    printf("O menor numero e: %d\n", menor);
    printf("O valor intermediario e: %d\n", meio);

    if (a == b && a == c) {
        printf("Os tres numeros sao iguais\n");
    } else if (a == b || a == c || b == c) {
        printf("Dois numeros sao iguais\n");
    }

    if (a < b && b < c) {
        printf("Os numeros estao em ordem crescente\n");
    } else if (a > b && b > c) {
        printf("Os numeros estao em ordem decrescente\n");
    } else {
        printf("Os numeros nao estao em ordem crescente nem decrescente\n");
    }

    return 0;
}-->