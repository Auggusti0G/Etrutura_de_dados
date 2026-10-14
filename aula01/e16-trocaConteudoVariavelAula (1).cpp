/*               Comentário de várias linhas.
  CEUB  -  FATECS  -  ADS  -  Programação  -  Prof. Barbosa

- Problema:

- Leia dois valores digitados pelo usuário e troque o conteúdo (o valor)
das duas variáveis. No final, o valor da variável 1 deve ficar na variável 2
e o valor da variável 2 deve ficar na variável 1.

- Passos para resolver o problema (algoritmo):

Entrada de dados (leia)
Processamento (troca o conteúdo)
Saída de dados (escreva)

Teste: Entrada: valor1: 10  		Saída: valor1: 20 
			 					valor2: 20					 	 valor2: 10			

Dica: use uma variávael auxiliar (temporária)		

Mova de valor1 para auxiliar
Mova de valor2 para valor1
Mova de auxiliar para valor2					*/

#include <stdio.h>	               		// printf, scanf (bibliotecas)
int main () {				              		// Início da função main
	int valor1, valor2, auxiliar;
	printf("Valor 1: ");								// Entrada
	scanf("%d", &valor1);
	printf("Valor 2: ");
	scanf("%d", &valor2);
	auxiliar = valor1;									// Troca 
	valor1 = valor2;
	valor2 = auxiliar;
	printf("\nValor 1 = %d ", valor1);	// Saída
	printf("\nValor 2 = %d ", valor2);
}

