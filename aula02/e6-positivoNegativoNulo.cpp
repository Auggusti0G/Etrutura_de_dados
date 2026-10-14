/*               Comentário de várias linhas.
  CEUB  -  FATECS  -  ADS  -  Programação  -  Prof. Barbosa

- Problema:

- Elabore o programa que leia um número qualquer e verifique 
se ele é positivo, nulo ou negativo.

Teste 1: Entrada: numero = 4       	Saída: Número Positivo
Teste 2: Entrada: numero = 0        Saída: Número Nulo
Teste 3: Entrada: numero = -4       Saída: Número Negativo

- Passos para resolver o problema (algoritmo):
Entrada de dados (leia)
Testes (se ...)
Saída de dados (escreva)								
*/

#include <stdio.h>		        		// printf, scanf (biblioteca)
int main () {     
  float numero;               		// Declara variável real
  printf("Digite o numero: ");
  scanf("%f", &numero);           // leia (numero);
  if (numero > 0)                 // se (numero > 0) então
    printf("\nNumero positivo."); //    escreva (" … ");
  else if (numero < 0)            // senão se (numero < 0) então
    printf("\nNumero negativo."); //    escreva (" … ");
  else                            // senão
    printf("\nNumero nulo.");     //    escreva (" … ");
} 
/* --- Alterações:
a. Além da mensagem, mostre também o número digitado pelo usuário.
b. Se o número for positivo, mostre a mensagem, o valor da variável 
   numero e o dobro;
   Se negativo, mostre a mensagem, o valor da variável numero e o triplo;
c. Altere o tipo da variável numero para inteiro (int). 
   Se nulo, mostre a mensagem, o valor da variável numero.
   --- DICAS:
   printf ("Valor digitado %f", numero);															// a.
   if ( numero > 0 ) {                 // se ( numero > 0 ) então			// b.
     printf ("\nNumero positivo.");    //    escreva (" … ");
     printf ("\nValor digitado %d", numero);
     printf ("\nDobro %f", numero * 2);
   {
   else if ( numero < 0 ) {            //    se ( numero < 0 ) então
     printf ("\nNumero negativo.");  //    escreva (" … ");
     printf ("\nValor digitado %f", numero);
     printf ("\nTriplo %f", numero * 3);
   }
   else {                            //    senão
     printf ("\nNumero nulo.");      //       escreva (" … ");
     printf ("\nValor digitado %f", numero);
   }
   int numero;																												// c.
   scanf ("%d", & numero);
   
---

- Algoritmo:

início // Verificar se o número lido é positivo, negativo ou nulo.
	real : numero;
	leia ( numero );
	se ( numero > 0 ) então
		escreva ("Valor positivo");
	senão
		se ( numero < 0 ) então
			escreva ("Valor negativo");
		senão
			escreva ("Valor nulo");
		fimse;
	fimse;
fim.     

*/
