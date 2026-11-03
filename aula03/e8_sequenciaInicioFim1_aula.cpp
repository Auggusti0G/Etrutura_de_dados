/*            Comentários de várias linhas.
  CEUB  -  FATECS  -  ADS  -  Programação  -  Prof. Barbosa

- Problema:

- Elabore o programa que gere a sequência dos números inteiros de um
em um, onde o usuário fornecerá os valores inicial e final da sequência.

- Passos para resolver do problema (algoritmo):
lê primeiro;
lê ultimo;
for (...){
    escreva;
}

- Teste 1:
- Entrada: Primeiro: x
           Ultimo: y
- Saída:
Sequencia de numeros:
x  x+1  x+2  ...  y
Encerrou a repeticao.                   							*/

#include <stdio.h>   			 // printf, scanf (Bibliotecas)
int main () {     
  int i, primeiro, ultimo; // Intervalo de -2.147.483.648 a 2.147.483.647
  printf("Primeiro numero: ");    // Tela de entrada de dados.
  scanf("%d", &primeiro);         // leia (primeiro);
  printf("Ultimo numero: ");
  scanf("%d", &ultimo);           // leia (ultimo);
  printf("\nSequencia de numeros:\n");
  for(i=primeiro; i<=ultimo; i++) // for(i=primeiro; i<=ultimo; i=i+1)
  {                               // Início da estrutura de repetição for
    printf("%3d", i);             // %3d define o espaço entre os números
  }                               // Fim da estrutura de repetição for.
} 
/* --- Alterações:
a. Este programa tem quantas chaves opcionais?
b. Mostre a quantidade de números gerados na sequência. 
c. Mostre a soma dos números gerados na sequência. 
d. Mostre a média aritmética dos números gerados na sequência.  
e. Mostre o produto dos números gerados na sequência. 
	 --- DICAS:
Tem duas chaves opcionais.																	// a.
Contador: ct ++;    // ct = ct + 1 (Dentro do for)					// b.
Somador: soma += i; // soma = soma + i (Dentro do for) 			// c.
  float media;      // Variável tipo float									// d.
   if (ct > 0) {    // Depois do for. Calcula somente 1 vez
     media = (float) soma / ct;    
     printf ("Media; %.2f", media);
   }  
  int produto = 1;  // Tem que iniciar o produto com 1. 		// e.
    produto *= i;   // produto = produto * i;  // Dentro do for

*/

#include <stdio.h>
int main(){
	
	int i , contador = 0 , somador = 0 ;
	int prim , ulti ;
	float media ;
	double produto = 1;
	
	printf("Digite o primeiro numero:\n\n");
	scanf("%d", &prim);
	
	printf("\nDigite o ultimo numero:\n\n");
	scanf("%d", &ulti);
	
	printf("\nOs numeros da segyeuncia serao:\n\n");
	for( i = prim ; i <= ulti ; i++){
		printf("\t%d",i);
		
		
		contador ++;
		somador += i ;
		produto *= i;
	}
	printf("\n");
	media = somador / contador ;
	printf("\nA media dos valores da seguencia foi : %f\n\n", media);
	printf("A quantidade de numeros foi : %d\n\n", contador);
	printf("A soma de todosos valores sera : %d\n\n", somador);
	printf("o produto da seguencia sera %g", produto);
	
}

