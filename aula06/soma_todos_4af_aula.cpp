/*               Comentários de várias linhas.
  CEUB  -  FATECS  -  ADS  -  Programação  -  Prof. Barbosa

- Problema anterior:
- Desenvolva o programa que leia quarenta valores inteiros digitados 
pelo usuário, armazene-os num vetor (array) e calcule a soma de todos
os valores do vetor. Gere a tela de saída com as seguintes informações:
mostre os valores armazenados no vetor e a soma de todos os valores do
vetor. Use uma constante para definir o tamanho do vetor.


- Problema atual:

- Refaça o problema anterior usando procedimento e o main.

1- Crie a função soma vetor, ela recebe o endereço do vetor e o tamanho do
vetor, calcula a soma de todos os valores no vetor e retorna a soma dos valores

2- A função principal (main) lê quarenta valores inteiros digitados pelo
usuário, armazene-os num vetor (array), chama a função soma vetor 
passando o endereço do vetor, o tamanho do vetor e mostra o valor retornado pela
função soma vetor, ou seja, o resultado recebido. Use variável local.		

- Para facilitar os testes de desenvolvimento, resolva com quatro valores

- Testes:

- Entrada de dados: 
Valor inteiro: 5, 6, 7, 2

- Saída de dados:
- Valores no vetor:
5	6	7	2
Soma dos valores = 20						  			*/

#include <stdio.h>  // printf, scanf (Bibliotecas)
int somaVetor(int vValores[], int tam){ // A função recebe o vetor e o tamanho
  int soma = 0;
  for (int i = 0; i < tam; i++) {
    soma = soma + vValores[i]; // soma += vValores[i];
  }
  return soma;                 // Retorna o valor da soma para função main.
} 

int main() {                           
  int i, valorRetorno,
        valor [4]; 	 // Vetor com 4 posições, da posição 0 a posição 3
  printf("- Entrada de dados:\n"); // Tela de entrada
  for (i = 0; i < 4; i++) {
    printf("Valor: "); 					   // Mensagem estática.
    scanf("%d", &valor[i]);
  }
  valorRetorno = somaVetor(valor, 4); // Chama a função, passa o vetor e o tamanho
  printf("\nSoma dos valores = %d", valorRetorno);
  printf("\n\n- Valores no vetor:"); // Tela de saída
  for(i = 0; i < 4; i++) {
    printf("\n%2d", valor[i]); 
  }
} 
/* --- ALTERAÇÕES:
a. Este programa tem quantas chaves opcionais?
b. Crie o procedimento mostraVetor. Ela recebe o endereço do vetor, 
   mostra todos os valores armazenados no vetor e não retorna nada.
c. Na tela de saída, acrescente a posição (índice), ou seja, mostre
   a posição (índice) do vetor e o valor armazenado na posição.

	--- DICAS:
Na função soma tem duas chaves opcionais, nomain tem duas chaves 				 // a.
void mostraVetor(int vetorNum[], int tam){ // Recebe o endereço do vetor // b.
	printf("\n\n- Saida de dados:\n"); // Tela de saída de dados.
	for (int i = 0; i < tam; i++) {
		printf("%d\n", vetorNum[i] );
	}
}
  ...																																			// c.
  for(i = 0; i < tam; i++) {
    printf("\n%d - %2d", i, valor[i]); 
  }
  ...

*/
