/*               Comentário de várias linhas.
  CEUB  -  FATECS  -  ADS  -  Programação  -  Prof. Barbosa

- Problema:

- Refaça o programa que calcule a média aritmética de um aluno 
que realizou duas avaliações. Além do valor da média, inclua 
na tela de saída uma das mensagens: “Aluno aprovado.” ou 
“Aluno reprovado.”.
  Considere que o aluno será aprovado com a média maior ou 
igual a cinco.

Teste 1: Entrada: nota1: 5, nota2: 6    Saída: Média = 5.5
                                               Aluno aprovado.
Teste 2: Entrada: nota1: 5, nota2: 2    Saída: Média = 3.5
                                               Aluno reprovado.

- Passos para resolver o problema (algoritmo):
Entrada de dados (leia)
Processamento (calcule)
Testes (se ...)
Saída de dados (escreva) 

Obs.: %f indica que é um número real (float)
			%d indica que é um número inteiro (int)					
			\n quebra de linha

- Fórmula de média aritmética: 	media = ____soma____	(numerador)
                                         quantidade		(denominador) 

- Fórmula de média aritmética: 	media = __nota1__+__nota2__	(numerador)
                                                 2		      (denominador)
*/

#include <stdio.h>  								// printf, scanf (bibliotecas)
int main () {     
   float prova1, prova2, media;    	// Variáveis do tipo real
   printf("Primeira nota: ");       // escreva (" . . . ");
   scanf("%f", &prova1);            // leia (prova1);
   printf("Segunda nota: ");
   scanf("%f", &prova2);            // leia (prova2);
   media = (prova1 + prova2) / 2;   // Processamento
   printf("\nMedia aritmetica: %f", media);  
   if (media >= 5) {                // se (media >= 5) então
      printf("\nAluno aprovado.");  	  
   }                                     
   else {                           // senão
      printf("\nAluno reprovado.");
   }                                     
} /* --- Alterações:
a. Este programa tem quantas chaves opcionais? 
b. Mostre o valor da média aritmética com duas casas decimais.
c. Depois do valor da média, mostre também o valor das duas notas lidas.   
d. Altere a saída. Mostre a média e a mensagem na mesma linha:
   Média: x.xxx           Aluno aprovado ou reprovado
e. Refaça-o considerando que a primeira prova tem peso três e 
   a segunda, peso cinco. Ou seja, calcule a média ponderada do aluno.
f. Deixe o programa mais interessante, permita que o usuário forneça 
   o valor dos pesos para o cálculo da média ponderada.
	--- DICAS:
Tem quatro chaves opcionais.																	// a.
   printf("\nMedia: %.2f", media);  	// 2 casas decimais.		// b.
   printf("\nProva 1: %.2f", prova1); // No final do programa // c.
   printf("\nProva 2: %.2f", prova2);
Retire o segundo \n deste comando: 														// d.
   printf("\nMedia: %.2f\nAluno aprovado", media);
   media = (prova1 * 3 + prova2 * 5) / (3 + 5);								// e.
   float peso1, peso2;      // Declara mais duas variáveis.		// f.
   printf ("\nDigite o peso 1: ");       
   scanf ("%f", & peso1);              
   printf ("\nDigite o peso 2: "); 
   scanf ("%f", & peso2);          
   media = (prova1 * peso1 + prova2 * peso2) / (peso1 + peso2);
*/
