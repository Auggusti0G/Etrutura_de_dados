/*            Comentários de várias linhas
  CEUB  -  FATECS  -  ADS  -  Programação  -  Prof. Barbosa

- Problema:

- Leia trinta valores inteiros digitados pelo usuário e armazene-os num
vetor. Gere a tela de saída com os valores armazenados no vetor.

- Para facilitar os testes de desenvolvimento, resolva com três valores

- Testes:

- Entrada de dados: 
Valor ineiro: 5, 6, 7				

- Saida de dados:
5
6
7					*/

#include <stdio.h> // printf, puts, scanf (biblioteca)
int main () {
	int i;          // Variável de controle do for.
	int numero [3]; // Vetor de inteiro com 3 posições, da posição 0 a 2
	printf("- Entrada de dados:\n"); // Tela de entrada de dados.
	for(i = 0; i < 3; i++) {         // for(i = 0; i <= 2; i = i + 1) 
	  printf("Valor inteiro: ");        
	  scanf("%d", &numero[i]);
	}

	printf("\n\n- Saida de dados:\n"); // Tela de saída de dados.
	for(i = 0; i < 3; i++) {					 // for(i = 0; i <= 2; i=i+1)
	  printf("%d\n", numero[i]);
	}
} 
/* --- ALTERAÇÕES:
a. Este programa tem quantas chaves opcionais?
b. Na saída, mostre também a posição onde o valor está armazenado no vetor
	 Posição - valor
	 0 - 5
	 1 - 6
	 2 - 7
c. Depois do for da tela de saída, altere o valor da posição 1 do vetor.
   Armazene 33 na posição 1 (índice 1) do vetor. 
d. Mostre o vetor novamente pra verificar a alteração do item anterior.
e. Refaça a letra "c" com valor digitado pelo usuário
f. Mostre o vetor novamente pra verificar a alteração do item anterior.

	--- DICAS:
Tem duas chaves opcionais.																					// a.
  printf("Posição - Valor");
	for (i = 0; i < 3; i ++) {																				// b.
    printf("%d - %d\n", i, numero [i]); // Mostra posição e valor	 
  }
  ...
  numero [1] = 33;               // Colocar depois do segundo for		// c.
	printf("\n\n- Saida de dados:\n"); // Tela de saída de dados.		  // d.
	for(i = 0; i < 3; i++) {					 // for(i = 0; i <= 2; i=i+1)
	  printf("%d\n", numero[i]);
	}
  printf("Valor inteiro da posição 1: "); // Digite um valor				// e.
  scanf ("%d", &numero[1]);
	printf("\n\n- Saida de dados:\n"); // Tela de saída de dados.		  // f.
	for(i = 0; i < 3; i++) {					 // for(i = 0; i <= 2; i=i+1)
	  printf("%d\n", numero[i]);
	}

*/

