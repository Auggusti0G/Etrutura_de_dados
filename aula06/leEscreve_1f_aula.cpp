/*               Comentários de várias linhas.
  CEUB  -  FATECS  -  ADS  -  Programação  -  Prof. Barbosa

- Problema anterior:
- Leia trinta valores inteiros digitados pelo usuário e armazene-os num
vetor. Gere a tela de saída com os valores armazenados no vetor.


- Problema atual:

- Refaça o problema anterior usando procedimento e o main.

1- Crie o procedimento mostraVetor. Ele recebe o endereço do vetor
e o tamanho do vetor, gera a tela de saída com o conteúdo completo
do vetor e não retorna nada. 

2- A função main declara o vetor, lê os valores do vetor digitado pelo usuário
e chama o procedimento passando os argumentos (o vetor e o tamanho do vetor).
Para facilitar os testes de desenvolvimento, resolva com três valores		*/

#include <stdio.h>         // printf, puts, scanf (Bibliotecas)

void mostraVetor(int vetorNum[], int tam){ // Recebe o endereço do vetor e tamanho
	printf("\n\n- Saida de dados:\n");    	 // Tela de saída de dados.
	for (int i = 0; i < tam; i++) {
		printf("%d\n", vetorNum[i] );
	}
}

int main () {
	int numero [3]; // Vetor de inteiro com 3 posições, da posição 0 a 2
	printf("- Entrada de dados:\n");      	 // Tela de entrada de dados.
	for (int i = 0; i < 3; i ++) {         
		printf("Valor inteiro: ");   
		scanf( "%d", &numero[i]);
	}
	mostraVetor(numero, 3); // Chama o procedimento, passa vetor e o tamanho
} 
/* --- ALTERAÇÕES:
a. Este programa tem quantas chaves opcionais?
b. No final do main, depois de chamar procedimento mostraVetor, altere o valor
da posição 1 (índice 1) do vetor. Armazene 33 na posição 1 (índice 1) do vetor.
c. No final do main, chame o procedimento mostraVetor navamente pra ver
a alteração do item anterior.
d. No procedimento, na tela de saída, mostre também a posição onde os
valores estão armazenados.

	 --- DICAS:
Tem duas chaves opcionais no for do procedimento mostra vetor. 		// a.
  ...
	numero [1] = 33;         // Altera a posição 1 do vetor. 				// b.
	mostraVetor(numero, 3);  // Chama a função pela segunda vez. 		// c.

	printf("\n\n- Saida de dados:\n"); // Tela de saída de dados 		// d.
	for (int i = 0; i < tam; i++) {
		printf ("%d - %d\n", i, vetorNum [i] );
	}

*/
