// Respostas referente a primeira quetao da Terceira prova protica de C 

// Aluno : Rafael Augusto               // RA: 22508717

// 1. Desenvolva o programa que leia cinquenta valores inteiros digitados pelo usuário, armazene-os num vetor (array) e gere a tela de saída com as seguintes informações: 

// Mostre todos os valores armazenados no vetor 
// A média aritmética dos valores armazenados no vetor.
// A quantidade de valores pares.

//- Obs.: para facilitar os testes de desenvolvimento, resolva com cinco valores

#include <stdio.h>

int main() {
    int vetor[5];
    int soma = 0;
    int qtd_pares = 0;

    // Leitura dos dados
    for (int i = 0; i < 5; i++) {
        printf("Digite o %dº valor inteiro: ", i + 1);
        scanf("%d", &vetor[i]);

        soma += vetor[i];
        if (vetor[i] % 2 == 0) {
            qtd_pares++;
        }
    }

    // Saída de dados
    printf("\n--- RESULTADOS ---\n");
    printf("Valores armazenados: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    float media = (float)soma / 5;
    printf("Média aritmética: %.2f\n", media);
    printf("Quantidade de valores pares: %d\n", qtd_pares);

    return 0;
}
