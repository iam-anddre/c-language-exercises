#include <stdio.h>

int main() {
    int escolha;
    int numero;
    int quadrado;

    while (1) {
        printf("===============================MENU===============================\n");
        printf("digite um numero\n");
        scanf("%d", &numero);
        printf("escolha uma das opcoes abaixo:\n");
        printf("1 - Opcao 1 - verifica se o numero eh impar ou par:\n");
        printf("2 - Opcao 2 - verifica se o numero eh positivo ou negativo:\n");
        printf("3 - Opcao 3 - calcula o quadrado do numero:\n");
        printf("4 - Opcao 4 - sair\n");
        scanf("%d", &escolha);

        if (escolha == 4) {
            break;
        }
        switch (escolha) {
            case 1: {
                if (numero % 2 == 0){
                    printf("o numero eh par!\n");
                }else {
                    printf("o numero eh impar\n");
                }break;
            }
            case 2: {
                if (numero > 0 ){
                    printf("o numero é positivo\n");
                }else {
                    printf("o numero é negativo\n");
                }break;
            }
            case 3:
                if (numero != 0){
                    quadrado = numero * numero;
                    printf("o quadrado de %d eh %d\n", numero, quadrado);
                }break;
        default:
                printf("Opcao invalida!\n");
                break;
        }

       

            printf("Saindo...\n");
            return 0;    
        }
    }

