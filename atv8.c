#include <stdio.h>

int main() {

    float nota1, nota2, nota3;
    float media;

    int aprovados = 0;
    int reprovados = 0;
    int recuperacao = 0;

    char continuar;

    do {
        printf("Digite as 3 notas do aluno para calcular a media:\n");
        scanf("%f %f %f", &nota1, &nota2, &nota3);

        media = (nota1 + nota2 + nota3) / 3;

        if (media >= 7.0) {
            aprovados++;
            printf("Aprovado!\n");

        } else if (media >= 5.0) {
            recuperacao++;
            printf("Recuperacao!\n");

        } else {
            reprovados++;
            printf("Reprovado!\n");
        }

        printf("Deseja cadastrar mais um aluno? [s/n]: ");
        scanf(" %c", &continuar);

        printf("\n");

    } while (continuar == 's' || continuar == 'S');

    printf("Quantidade de alunos aprovados: %d\n", aprovados);
    printf("Quantidade de alunos reprovados: %d\n", reprovados);
    printf("Quantidade de alunos em recuperacao: %d\n", recuperacao);

    return 0;
}
