/*               Comentário de várias linhas.
  CEUB  -  FATECS  -  ADS  -  Programação  -  Prof. Barbosa

- Problema:

- Desenvolva o programa que leia vários números digitados pelo 
usuário e use o valor -1 como condição de saída (flag) da 
estrutura de repetição. Na tela de saída, mostre a quantidade 
de números digitados.				

- Passos para resolver o problema (algoritmo):

declara as variáveis
inicia a variável 
estrutura de repetição
    lê número
    testa condição saída
    contador
tela de saída               		

Teste 1: Entrada: 5, 6 e -1       Saída: Quantidade de números: 2
Teste 2: Entrada: 5, 6, 7 e -1    Saída: Quantidade de números: 3
Teste 3: Entrada: 5, 6, 6, 7 e -1 Saída: Quantidade de números: 4 	 

*/

#include <stdio.h> // printf, scanf (Bibliotecas)
int main () {
  int ct;        // Intervalo: de -2.147.483.648 a 2.147.483.647 (int)
  float numero;  // Intervalo: de 3.4E-38 a 3.4E+38 (real)
  ct = 0;        // Inicia a variável.
  printf("Digite [-1] pra sair da repeticao\n"); 
  while (true) {    			// enquanto (verdade) faça
	  printf("Numero: ");
	  scanf("%f", &numero); // leia (numero);    
    if (numero == -1){		// -1, a condição de saída
      break;							// Sai de uma estrutura de repetição
		}
    ct ++;                // ct = ct + 1; ou ct += 1; (Contador)
  }                       // Fim do while   // fimenquanto
  printf("\n\aQuantidade de numeros: %d", ct); // \a Sinal sonoro(beep)
} 
/* --- ALTERAÇÕES:
a. Este programa tem quantas chaves opcionais?
b. Na tela de saída, acrescente a soma dos valores digitados.       
   Teste 4: Entrada: 5, 6 e -1       Saída: Quantidade de números= 2 
                                           Soma= 11                                                                                 
c. Mostre a soma com duas casa digital.
d. Calcule a média dos valores digitados.
e. Limpe a tela, antes de mostrar a tela de saída.

	 --- DICAS:
Tem duas chaves opcionais no if.														// a.
  float soma;																								// b.
	soma = 0;										 		          // Antes do while			
    soma = soma + numero;	// soma += numero	// Dentro do while
  printf("\nSoma= %f", soma);	 		          // Depois do while
  printf("\nSoma= %.2f", soma); 	// Depois do while				// c.
  media = soma /ct;								// Depois do while				// d.
  printf(\nMédia= %.2f", media);	// Depois do while
#include <stdlib.h>      // system       										// e.
  system ("cls");        // Limpa a tela.

---	   

// - Versão sem break:
# include <stdio.h>            // printf, scanf (Bibliotecas)
int main ( ) {                 
  int ct;          // Intervalo: de -2.147.483.648 a 2.147.483.647 (int)
  float nota, soma, media;     // Intervalo: de 3.4E-38 a 3.4E+38 (real)
  ct = 0;                      // Inicializa as variáveis.
  soma = 0;
  printf("Digite [-1] pra sair da repeticao\n"); // -1, condição de saída.
  printf ("Nota do aluno: ");
  scanf ("%f", & nota);        // leia (nota);// Lê somente a primeira nota.
  while (nota != -1) {       // enquanto ( nota <> -1 ) faça
    ct ++;                     // ct = ct + 1;         ( Contador ) 
    soma += nota;              // soma = soma + nota;  ( Somador  )
    printf ("Nota do aluno: ");
    scanf ("%f", & nota);// scanf é sempre o último comando dentro do while
  }          // Fim do while   // fimenquanto
  if ( ct != 0 ) {       // Teste obrigatório, evita erro divisão por zero.
    media = soma / ct;                             // Tela de saída.
    printf ("\n\aQuantidade de alunos: %d", ct);//\a  sinal sonoro (beep)
	printf ("\nMedia da turma: %.1f", media);  // Mostra com uma casa decimal.
  }       
}

*/
