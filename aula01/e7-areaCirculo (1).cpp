/*                Comentário de várias linhas.
  CEUB  -  FATECS  -  ADS  -  Programação  -  Prof. Barbosa

- Problema:

- Construa o programa que calcule a área de um círculo. O usuário fornecerá 
o valor do raio. 
Onde:	área = pi . r2    

- Passos para a elaboração do programa:
Entrada de dados (leia)
Processamento (cálculo)
Saída de dados (escreva)

Teste 1: Entrada: raio: 2 		Saída: Valor da area: 12.560 
*/

#include <stdio.h>		// printf, scanf	    (Bibliotecas)
#include <math.h>		  // pow (base, expoente)
int main ( ) {           
	float raio, area;
	printf ("Digite o valor do raio: ");      	// Entrada de dados.
	scanf ("%f", & raio);
	area = 3.14 * pow(raio, 2);                 // pot ( base, expoente );
//	area = 3.14 * raio * raio);               // Outra soluçao  
	printf ("\n\nValor da area: %.3f", area);   // Com 3 casas decimais.
} 
/* Alterações:
a. Altere a saída pra este leiaute:
   Raio: X.XX     Area: x.xxx              (duas variáveis na mesma linha).
b. Crie uma constante para definir o valor de pi.
#define PI 3.141593     // Definição do programador da constante PI.
      Comentários de mais de uma linha.
      PI é a constante 3.141593 definida pelo desenvolvedor
      Exponenciação:       pow(base, expoente)                

---
- Algoritmo:

início // Calcular a área de um círculo.
	real : raio, area;
	leia ( raio );
	area = 3.14 * pot(raio, 2);		    //  area = 3.14 * sqr(raio);  
	escreva ( "Área do círculo: ", area );
fim.     

	
*/

