/*               Comentário de várias linhas.
  CEUB  -  FATECS  -  ADS  -  Programação  -  Prof. Barbosa

- Problema:
- Faça o programa que calcule a média aritmética de duas notas 
bimestrais fornecidas pelo usuário.

- Passos para a resolver o problema (algoritmo):
Entrada de dados (leia)
Processamento (cálculo)
Saída de dados (escreva)							

Obs.: %f indica que é um número real (float)
			%d indica que é um número inteiro (int)					
			\n quebra de linha																	

- Fórmula de média aritmética = ___nota1___+___nota2___  (numerador)
                                           2             (denominador)

Teste 1: Entrada: nota1: 4.5 e nota2: 6.1     Saída: Media = 5.3
Teste 2: Entrada: nota1: 7.5 e nota2: 5.1     Saída: Media = 6.3
Teste3 : Entrada: nota1: 7.0 e nota2: 8.2			Saída: Media = 7.60
*/
#include <stdio.h>		          // printf, scanf (bibliotecas)
int main (){				            // Início da função main
   float nota1, nota2, media;   // Tipo real.
   printf ("Primeira nota: "); 	// \n Avança pra próxima linha.
   scanf ("%f", &nota1);        // Com o tipo float usamos "%f"  
   printf ("Segunda nota: ");
   scanf ("%f", &nota2);
   media = (nota1 + nota2) / 2;	// Parênteses obrigatório
   printf ("\nMedia do aluno: %f", media);
} 
// Digite o valor da nota com ponto no lugar da vírgula (notação americana)

/* --- ALTERAÇÕES:
a. Mostre a média com duas casas decimais
b. Refaça-o considerando que o aluno realizou três avaliações.
c. Pule três linhas antes de mostrar o valor da média. 
d. Depois da média, mostre também o valor das três notas.
e. Agora, refaça-o sem usar a variável media.             -

   --- DICAS:
   printf("\nMedia do aluno: %.2f", media); // Com 2 casas decimais // a.
Criar mais uma variável. float nota3;															// b.
   printf ("Digite terceira nota:\n");
   scanf ("%f", & nota3);
   media = (nota1 + nota2 + nota3) / 3;
Use três  \n  :																										// c.
   printf("\n\n\nMedia do aluno: %.2f", media); 
   printf("\nPrimeira nota: %.2f", nota1); // Solução 1						// d.
   printf("\nSegunda nota: %.2f", nota2); 										
   printf("\nTerceira nota: %.2f", nota3); 										
   ...
   printf("\nNotas: %.2f %.2f %.2f", nota1, nota2, nota3); // Solução 2
Faça o cálculo dentro do printf:																 	// e.
   printf("Media do aluno: %.2f", (nota1 + nota2 + nota3) / 3); 
---

- Algoritmo:
início // Calcular a média aritmética de duas notas de um aluno.
  real : nota1, nota2, media;
	leia ( nota1 );
	leia ( nota2 );
	media = (nota1 + nota2) / 2;
	escreva ( "Média: ", media );
fim. 

*/

