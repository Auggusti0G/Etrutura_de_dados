/*             Comentários de várias linhas
  CEUB  -  FATECS  -  ADS  -  Programação  -  Prof. Barbosa

- Problema:
- Elabore o programa que gere a sequência dos números naturais
pares até 12 na horizontal.

- Passos para resolver o problema (algoritmo):
declara as variáveis
mostra cabeçalho
estrutura de repetição de 0 até 12 de 2 em 2:
    escreva variável_for
mostra mensagem

- Teste - Tela de saída:
Números pares:
0 2 4 6 ... 12
Encerrou o programa.		*/

#include <stdio.h>  	// printf, puts, scanf (Bibliotecas)
int main ( ) {                     
  int par;            // Intervalo de -2.147.483.648 a 2.147.483.647.
  printf("\a\nNumeros pares:\n"); //  \a  Gera um beep (sinal sonoro).
  for (par=0; par <= 12; par += 2) // for (par=0; par <= 12; par=par+2)
  {                             // Início da estrutura de repetição for
    printf("\t%2d", par);       //  \t  Deslocamento horizontal (tab).
  }                             // Fim da estrutura de repetição for.
  printf("\nEncerrou o programa.");
} 
/* --- Alterações: 
a. Este programa tem quantas chaves opcionais?
b. Quantos números foram gerados na sequência? Resposta: Quantidade: 7
c. Calcule a soma dos valores gerados na sequência. Resposta: Soma: 42
d. Algumas linguagens de programação não tem passo 2, só existe passo +1
   ou passo -1. Refaça o programa considerando essa restrição.       

	 --- DICAS:
Tem duas chaves opcionais.																					// a.
  int ct = 0;               // Antes do for (declara o contador ct) // b.
    ct ++;                  // Dentro do for (ct = ct + 1);
  printf("\nQuantidade: %d", ct); // Depois do for.           
  int soma = 0;             // Antes do for, eclara o somador soma  // c.
    soma += par:            // Dentro do for (soma = soma + par;)
  printf ("\nSoma: %d", soma); // Depois do for           

  for ( i = 0; i <= 12; i += 1 ) {																	// d.
    if ( i % 2 == 0 )            // Verifica se o i é divisível por 2.
      printf ("\n\t%2d", i);     //  \t  Deslocamento horizontal(tab).
    }                            // Fim da estrutura de repetição for

*/
