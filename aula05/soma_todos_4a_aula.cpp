/*               Comentários de várias linhas.
  CEUB  -  FATECS  -  ADS  -  Programação  -  Prof. Barbosa

- Problema:

- Desenvolva o programa que leia quarenta valores inteiros digitados 
pelo usuário, armazene-os num vetor (array) e calcule a soma de todos
os valores do vetor. Gere a tela de saída com as seguintes informações:
mostre os valores armazenados no vetor e a soma de todos os valores do
vetor. Use uma constante para definir o tamanho do vetor.

- Para facilitar os testes de desenvolvimento, resolva com quatro valores.

- Testes:

- Entrada de dados: 
Valor inteiro: 5, 6, 7, 2
- Saída de dados:

- Valores no vetor:
5
6
7
2
Soma dos valores = 20						  

*/
#include <stdio.h> // printf, scanf (Bibliotecas)
int main ( ) {                           
  int i, 					 // Variável usada no for
      soma = 0, 	 // Somador
      valor [4]; 	 // Vetor com 4 posições, da posição 0 a posição 3
  printf("- Entrada de dados:\n"); // Tela de entrada de dados
	for(i = 0; i < 4; i++){          // for(i = 0; i < 4; i = i + 1){
	  printf("Valor inteiro: ");        
    scanf("%d", &valor[i]);
    soma = soma + valor[i];				 // soma += valor[i]; (somador)
  }
  printf("\n\n- Valores no vetor:"); // Tela de saída de dados
  for(i = 0; i < 4; i++) {
    printf("\n%2d", valor[i]); 
  }
  printf("\nSoma dos valores = %d", soma);
} 
/* --- ALTERAÇÕES:
a. Este programa tem quantas chaves opcionais?
b. Na tela de saída, acrescente a posição (índice), ou seja, mostre
   a posição (índice) do vetor e o valor armazenado na posição.
c. Conte e mostre a quantidade de valores maior que vinte.
d. Conte e mostre a quantidade de valores pares.
e. Na tela de entrada, mostre a mensagem dinâmica antes do scanf.
   Exemplo: Valor inteiro da posição 0:
	 --- DICAS:
Tem duas chaves opcionais no segundo for.												// a.
	for (i = 0; i < 4; i++){ 																			// b.
    printf("posicao %d: %d\n", i, valor[i]); // Mostra posição e valor
  }
  int ct = 0;																										// c.
  ...
  if (valor[i] > 20){
    ct = ct + 1;
  }

  int resto, pares = 0;																					// d.
	...																																		
  for (i = 0; i < 4; i++) {
    printf ("Valor inteiro");
    scanf ("%d", &valor[i]);
    soma += valor[i];  						// soma = soma + valor[i];
		resto = valor[i] % 2
    if(resto == 0) {
      pares++;
  }
  printf("\nPares: %d", pares);

*/
