// Respostas referente a questão da lista 04 de algoritmos e estrutura de dados 

// Aluno : Rafael Augusto               // RA: 22508717

#include <stdio.h>
#include <stdlib.h>

/* 
================================================================================
QUESTÃO 1: RESUMO DOS CONCEITOS E CARACTERÍSTICAS DO BUBBLE SORT
================================================================================
- Conceito: Algoritmo de ordenação que percorre o vetor comparando elementos 
  adjacentes (i e i+1). Se o elemento atual for maior que o próximo, realiza a troca.
- Comportamento: A cada passagem, o maior valor "flutua" até à sua posição final.
- Características:
  * Simples de implementar.
  * In-place: Não exige memória extra (Complexidade de Espaço: O(1)).
  * Ineficiente para grandes vetores (Complexidade de Tempo: O(n²)).
================================================================================
*/

// =============================================================================
// QUESTÃO 2: PROCEDIMENTO PARA MOSTRAR OS VALORES DO VETOR DESORDENADO
// Recebe o endereço do vetor e o seu tamanho
// =============================================================================
void mostrarVetor(int *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", *(vetor + i)); // Acesso ao vetor via ponteiro
    }
    printf("\n");
}

// =============================================================================
// QUESTÃO 3: PROCEDIMENTO PARA REALIZAR O BUBBLE SORT
// Recebe o endereço do vetor, o tamanho e executa a lógica de ordenação
// =============================================================================
void bubbleSort(int *vetor, int tamanho) {
    int i, j, temp;
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - 1 - i; j++) {
            // Lógica do Bubble Sort:
            // Verificar se o valor da posição "j" é maior que o valor da posição "j+1"
            if (*(vetor + j) > *(vetor + j + 1)) {
                // Se for verdade: troca o conteúdo das posições "j" e "j+1"
                temp = *(vetor + j);
                *(vetor + j) = *(vetor + j + 1);
                *(vetor + j + 1) = temp;
            }
        }
    }
}

// =============================================================================
// QUESTÃO 4: PROCEDIMENTO PARA MOSTRAR OS VALORES NA VERTICAL
// =============================================================================
void mostrarVetorVertical(int *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d\n", *(vetor + i));
    }
}

// =============================================================================
// QUESTÃO 5: PROCEDIMENTO PARA MOSTRAR OS VALORES NA HORIZONTAL
// =============================================================================
void mostrarVetorHorizontal(int *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", *(vetor + i));
    }
    printf("\n");
}

int main() {
    // Declaração do vetor de teste e cálculo do seu tamanho
    int vetor[] = {45, 12, 89, 3, 27, 64, 18};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    // Execução do procedimento da Questão 2 (Exibir desordenado)
    printf("=== VETOR DESORDENADO ===\n");
    mostrarVetor(vetor, tamanho);
    printf("\n");

    // Execução do procedimento da Questão 3 (Ordenação Bubble Sort)
    bubbleSort(vetor, tamanho);

    // Execução do procedimento da Questão 4 (Exibir na vertical)
    printf("=== VETOR ORDENADO (NA VERTICAL) ===\n");
    mostrarVetorVertical(vetor, tamanho);
    printf("\n");

    // Execução do procedimento da Questão 5 (Exibir na horizontal)
    printf("=== VETOR ORDENADO (NA HORIZONTAL) ===\n");
    mostrarVetorHorizontal(vetor, tamanho);
    printf("\n");

    return 0;
}
