/*            Comentários de várias linhas
  CEUB  -  FATECS  -  ADS  -  Programação  -  Prof. Barbosa

- Problema:

- Implemente um programa com uma função e a função principal (main):

1. A função recebe os dois parâmetros (dois valores), calcula a soma
dos dois valores e retorna o resultado do cálculo.

2- A função principal (main) lê os dois valores inteiros digitados pelo 
usuário, chama a função passando os dois argumentos (dois valores lidos) 
e depois mostra o valor retornado pela função. Use variável local.

Teste: Entrada: 2 e 3                   Saída: Soma = 5				*/

#include <stdio.h>             	 // printf, scanf (Biblioteca)

// A funcao recebe 2 parâmetros inteiros e retorna a soma para função main
int retornaSoma(int v1, int v2){ // "v1" recebe valor1, "v2" recebe valor2
  int soma;      // Variável local.
  soma = v1 + v2;
  return soma;   // Retorna o valor da variável "soma" para função main
}

int main () {                      
  int valor1, valor2, retorno; // Variável local
  printf("Valor 1: "); 				 // Tela de entrada de dados
  scanf("%d", &valor1); 
  printf("Valor 2: ");
  scanf("%d", &valor2);
  retorno = retornaSoma(valor1, valor2); // Chama a função e passa os valores
  printf("\nSoma = %d\n", retorno);
} 
/* --- Alterações:
a. Refaça a tela de saida para mostrar este layout: 2 + 3 = 5
b. Acrescente mais uma função. A função somaTres recebe três valores
   inteiros e retorna a soma dos três valores.
c. No final do main, chame a função somaTres passando três argumentos
d. Altere a função retornaSoma, refaça a função sem usar a variável soma.
e. No final do main, chame a função retornaSoma mais uma vez, passe 
   os valores (4, 6). 
	--- DICAS: 
  printf("\n%d + %d = %d\n", valor1, valor2, retorno);					// a.
int retornaSomaTres(int v1, int v2, int v3) {  									// b.
	int sm;             		// Variável local.
	sm = v1 + v2 + v3;
	return sm;          		// Retorna o valor de sm pra função main.      
}
  int valor3, retorno2; 			 																	// c.
  ...
  printf("Valor 3: ");																			
  scanf("%d", &valor3);
	retorno2 = retornaSomaTres (valor1, valor2, valor3);    							
  printf("\n%d + %d + %d = %d\n", valor1, valor2, valor3, retorno2);

int retornaSoma(int v1, int v2){ 																// d.
  return v1 + v2;
}
  retorno1 = retornaSoma (4, 6);		      # No final do main		// e.
  printf("\n%4 + %6 = %d\n", retorno1);

*/

