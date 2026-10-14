/*             Comentários de várias linhas.
  CEUB  -  FATECS  -  ADS  -  Programação  -  Prof. Barbosa

- Problema:

- Elabore o programa que gere a sequência dos números naturais até 10
na vertical.

- Passos para resolver o problema (algoritmo):
declara as variáveis
mostra cabeçalho
estrutura de repetição de 0 até 10 de 1 em 1:
    mostra variável do for
mostra mensagem

- Tela de saída:
Números naturais na vertical:
  0
  1
  2 
  3
 ...
 10
Encerrou o programa.									

*/
#include <stdio.h>  // printf, puts, scanf (Bibliotecas)
int main () {                   
  int i;            // Intervalo de -2.147.483.648 a 2.147.483.647.
  printf("Numeros naturais na vertical:");  // Cabeçalho.
  for (i = 0; i <= 10; i ++)     // para i de 0 até 10 passo 1 faça
  // for(i = 0; i <= 10; i += 1) // Outra maneira de usar o passo 1.
  {	                             // %3d  Mostra os números na coluna 3.
    printf("\n%3d", i);          // \n Avança pro início da próxima linha
  }                              // fimpara;
  printf("\nEncerrou o programa.");
} 
/* --- Alterações:
a. Este programa tem quantas chaves opcionais?
b. Mostre a sequência (os números) na coluna 15 da tela. 
c. No final, mostre a quantidade de números da sequência. Use contador. 
   Saída:  Quantidade: 11

	--- DICAS:
Tem duas chaves opcionais.          								// a.
printf ("\n%15d", i);               								// b. 
int ct = 0;										// Antes do for				// c.
ct++;													// Dentro do for
printf("Quantidade: %d", ct);	// Depois do for

*/
