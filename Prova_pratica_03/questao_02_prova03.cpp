// Respostas referente a segunda quetao da Terceira prova protica de C 

// Aluno : Rafael Augusto               // RA: 22508717

// 2. Refaça o exercício anterior. 

// - Crie o procedimento mostra vetor, ele recebe o endereço do vetor, gera a tela de saída com o conteúdo do vetor e não retorna nada. Use variável local.

// - Crie também a função media vetor, ele recebe o endereço do vetor, calcula a média dos valores no vetor e retorna a média dos valores.

// - E desenvolva a função main para gerenciar todo o exercício usando essas rotinas.
// - Obs.: para facilitar os testes de desenvolvimento, resolva com cinco valores

#include <stdio.h>

// Procedimento: recebe o endereço do vetor, usa variável local i e gera a tela
void mostra_vetor(int *v, int tamanho) {
    int i; // Variável local
    printf("Valores armazenados: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", *(v + i));
    }
    printf("\n");
}

// Função: recebe o endereço do vetor, calcula e retorna a média
float media_vetor(int *v, int tamanho) {
    int i; // Variável local
    int soma = 0;
    for (i = 0; i < tamanho; i++) {
        soma += v[i];
    }
    return (float)soma / tamanho;
}

int main() {
    int vetor[5];
    int qtd_pares = 0;
    int i;

    // Leitura dos dados
    for (i = 0; i < 5; i++) {
        printf("Digite o %dº valor inteiro: ", i + 1);
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0) {
            qtd_pares++;
        }
    }

    printf("\n--- RESULTADOS ---\n");

    // Chamadas passando o tamanho 5 diretamente
    mostra_vetor(vetor, 5);

    float media = media_vetor(vetor, 5);
    printf("Média aritmética: %.2f\n", media);

    printf("Quantidade de valores pares: %d\n", qtd_pares);

    return 0;
}
