// Respostas refrente a primeira quetsao da prova protica de C 

// Aluno : Rafael Augusto               // RA: 22508717

// 1. Desenvolva um programa que calcule a média aritmética de uma turma, onde cada aluno realizou uma avaliação. Não sabemos a quantidade de alunos, por isso usamos o valor "-1" como condição de saída (flag).
//	Na tela de saída, mostre a média aritmética da turma e a quantidade de alunos da turma.

#include <stdio.h>

int main() {
    float nota = 0.0;
    float soma = 0.0;
    int quantidade = 0;

    printf("--- Calculo de Media da Turma ---\n");
    printf("Digite as notas dos alunos (ou -1 para encerrar):\n");

    while (1) {
        printf("Nota do aluno %d: ", quantidade + 1);
        scanf("%f", &nota);

        // Verifica a condicao de parada (flag)
        if (nota == -1) {
            break;
        }

        // Validacao simples para evitar notas negativas invalida
        if (nota < 0) {
            printf("Nota invalida! Digite uma nota maior ou igual a zero ou -1 para sair.\n");
            continue;
        }

        soma += nota;
        quantidade++;
    }

    // Exibicao dos resultados com verificacao para evitar divisao por zero
    printf("\n---------------------------------\n");
    if (quantidade > 0) {
        float media = soma / quantidade;
        printf("Quantidade de alunos: %d\n", quantidade);
        printf("Media aritmetica da turma: %.2f\n", media);
    } else {
        printf("Nenhuma nota foi informada.\n");
    }

    return 0;
}
