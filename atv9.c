#include <stdio.h>

int main (){
    
    int numero;
    int maior;
    int menor;
    int diferenca;
    
    for (int i = 1; i <= 10; i++) {
        
        printf("digite 10 numeros inteiros: \n",i);
        scanf("%d", &numero);
        
    if (i == 1){
        menor = numero;
        maior = numero;
    }else {
        if (numero > maior ){
            maior = numero;
            
        }if (numero < menor){
            menor = numero;
        }
    }
}
    diferenca = maior - menor;
    
    printf("\nMaior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
    printf("Diferenca: %d\n", diferenca);

}
