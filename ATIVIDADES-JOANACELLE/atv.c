#include <stdio.h>

//ler o nome de um aluno e nota e exibir

/*int main(){
    char nome[100];
    float media;

    printf("digite o nome completo do aluno:\n ");
    fgets(nome, sizeof(nome), stdin);

    printf("digite a nota do aluno:\n ");
    scanf("%f", &media);

    printf("Nome: %s", nome);
    printf("Media: %.2f\n", media);
}
int main(){

    char nome[100];
    float media;

    for (int i = 1; i <=30 ; i++){
        printf("Digite o nome completo do aluno:\n");
        fgets(nome, sizeof(nome), stdin); 
    
        printf("Digite a media de cada aluno: \n");
        scanf("%f", &media);

    }
    printf("Nome completo e media respectivamente: %s %.2f", nome, media);
}*/

int main(){

    char nomes[30][50];
    float media[30];

    for (int i = 0 ; i < 30 ; i++){
        printf("digite o nome do aluno %d: \n", i + 1);
        scanf(" %49[^\n]", nomes[i]);

        printf("digite a media do aluno: \n");
        scanf("%f", &media[i]);
    }

    for (int i = 0 ; i < 30 ; i++){
        printf("Nome: %s | Media: %.2f \n", nomes[i], media[i]);
    }
}