/*            	Comentários de várias linhas.
  CEUB  -  FATECS  -  ADS  -  Programação  -  Prof. Barbosa

- Problema:

- Implemente o programa que calcula a média aritmética de uma turma com
cinquenta alunos. Onde cada aluno realizou uma avaliação. O usuário vai
digitar a nota dos alunos. Resolva com a estrutura de repetição for.
Obs.: facilite os testes no desenvolvimento, troque o valor cinquenta por cinco.

  Esse problema já foi resolvido com a estrutura de repetição while, agora,
vamos faze com a estrutura de repetição for (loop - laço).

- Passos para resolver o problema (algoritmo):

declara as variáveis
inicia as variáveis         // Antes do for, na coluna 1
for (num = v_inicial, num < v_final, num++): // Controla quantas repetições
    le nota                 // Indentação
    contador
    somador
    // Fim da repetição
calcula média               // Depois do for, na coluna 1
mostra média

- Fórmula de média aritmética: 			media = ____soma____	(numerador)
						 			 												   quantidade		(denominador)

Teste 1:    Entrada: nota: 2, 4, 6, 8, 10      Saída: Média da turma = 6
Teste 2:    Entrada: nota: 3, 4, 6, 8, 10      Saída: Média da turma = 6.2 
*/

#include <stdio.h>    // printf, puts, scanf (Bibliotecas)
int main ( ) {                       
  int num, ct;        // Intervalo de -2.147.483.648 a 2.147.483.647
  float nota, soma, media;
	ct = 0;             // Inicia o contador
	soma = 0;           // Inicia o somador
  // ct = soma = 0;		// Inicia as duas variáveis com zero na mesma linha
  for (num = 1 ; num < 6 ; num ++) { // Início da estrutura de repetição
    printf ("Nota do aluno: ");  // Mensagem estática.
    scanf ("%f", &nota);         // leia (nota);
    ct = ct + 1;	               // ct += 1 	// ct ++; (contador)
    soma = soma + nota;          // soma += nota; (somador ou acumulador)
  }
  media = soma / ct;
  printf("\nMedia da turma = %f", media);   // Tela de saída.
} 
/* --- Alterações:
a. Este programa tem quantas chaves opcionais?
b. Mostre a média da turma com duas casas decimais.
c. Coloque a mensagem dinâmica abaixo dentro da repetição:
   "Digite a nota do aluno número 1"
d. A quantidade de alunos aprovados com nota maior ou igual a cinco. 
e. A quantidade de alunos reprovados com nota menor que cinco. 
	 --- DICAS:
Não tem chaves opcionais.																			 	// a. 
  printf("\nMedia da turma = %.1f", media); 										// b.
printf ("Nota do aluno número %d: ", i); // Mensagem dinâmica. 	// c. 
   if ( nota >= 5 )																							// d.
      ct_aprov ++;
   else																													// e.
      ct_reprov ++;

*/
