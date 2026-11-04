/*            Comentários de várias linhas
  CEUB  -  FATECS  -  ADS  -  Programação  -  Prof. Barbosa

- Problema:

- Implemente um programa com uma função e a função principal (main):

1- A função recebe dois parâmetros (dois números inteiros), compara os
   dois valores e retorna o maior valor. Se os números forem iguais, a
   função retorne um deles. Use variável local.

2- A função main lê dois números digitados pelo usuário, chama a função 
   passando os dois argumentos (os dois números lidos) e gera a tela de
	 saída com o valor retornado pela função. Use variável local.

Teste 1:    Entrada: 2 e 3          Saída: Maior valor: 3
Teste 2:    Entrada: 4 e 3          Saída: Maior valor: 4
Teste 3:    Entrada: 5 e 5          Saída: Maior valor: 5			*/

#include <stdio.h>          // printf, scanf (Bibliotecas)
int maximo_dois(int n1, int n2){ // A função recebe 2 int e retorna 1 int.
  int maior;                // Variável local da função
  if (n1 > n2) {            // Se n1 for maior que n2
    maior = n1;
  }
  else {
    maior = n2;
  }
  return maior; // Retorna pra função main o valor da variável maior
}

int main() {
  int valor1, valor2, vl_retorno; // Variáveis locais
  printf("Primeiro valor: "); 		// Tela de entrada de dados.
  scanf("%d", &valor1);						// Lê dois números do usuário
  printf("Segundo valor: "); 
  scanf("%d", &valor2);    
  vl_retorno = maximo_dois(valor1, valor2); // Chama função, passa 2 argumentos
  printf("\nMaior valor: %d\n", vl_retorno);
} 
/* --- ALTERAÇÕES:
a. Refaça a função main sem usar a variável local vl_retorno.
b. Refaça a função maximo_dois sem usar a variável local maior.
c. Acrescente a função minimo. Ela recebe 2 valores e retorna o menor deles

    ---DICAS: 
  printf("\nMaior valor: %d\n", maximo_dois(valor1, valor2));		//a.
int maximo_dois (int n1, int n2) {   														// b.
   if (n1 > n2)       			// Sem a variável maior.                  
     return n1;
   else
     return n2;                         
int min (int n1, int n2) {              												// c.
   if (n1 < n2)                                    
     return n1;
   else
     return n2;                         .

*/

#include <stdio.h>

int funcao_compara(int numero01, int numero02) {
    if (numero01 > numero02) {
        printf("O valor de num 01 e maior: ");
        return numero01;
    } else if (numero02 > numero01) {
        printf("O numero maior e o num 02: ");
        return numero02;
    } else {
        printf("Os valores sao iguais: ");
        return numero01;
    }
}

int menor(int numero01, int numero02) {
    if (numero01 < numero02) {
        printf("O menor numero e o num 01: ");
        return numero01;
    } else if (numero02 < numero01) {
        printf("O menor numero e o num 02: ");
        return numero02;
    } else {
        printf("Sao iguais: ");
        return numero01;
    }
}

int main() {
    int num01, num02, resultado;

    printf("Digite o numero 01: ");
    scanf("%d", &num01);

    printf("Digite o numero 02: ");
    scanf("%d", &num02);

    printf("\n");

    resultado = funcao_compara(num01, num02);
    printf("%d\n\n", resultado);

    printf("Mostrando sem usar a variavel auxiliar:\n");
    printf("%d\n\n", funcao_compara(num01, num02));

    printf("Mostrando o menor sem usar a variavel auxiliar:\n");
    printf("%d\n", menor(num01, num02));

    return 0;
}
//--------------------------------------------------------
//--------Segunda versao e mas correta das auterações ----
//-------------------------------------------------------
#include <stdio.h>

int funcao_compara(int num01 , int num02){
	if (num01 > num01){
		return num01;
	}else if(num02 > num01){
		return num02;
	}else{
		return num01;
	}
}
int funcao_menor(int num01, int num02){
	if (num01 < num02){
		return num01;
	}else if (num02 < num01){
		return num02;
	}else {
		return num01;
	}
}
int main(){
	
	int numero01, numero02;
	
	printf("Digite o numero01 :");
	scanf("%d", &numero01);
	
	printf("Digite o numero02 :");
	scanf("%d", &numero02);
	
	printf("\nMostrando sem variavel\n");
	printf("numero maior %d\n\n", funcao_compara(numero01, numero02));
	
	// Usando a variavel auxiliar local 
	int resultado ;
	resultado = funcao_compara(numero01, numero02) ;
	
	printf("Mostrando com a variavel auxiliar local :\n");
	printf("numero maior %d\n\n", resultado);
	
	// Mostrando a funcao menor 
	int resultado_menor ;
	resultado_menor = funcao_menor(numero01, numero02);
	
	printf("Mostrando o menor valor dentro os dois\n");
	printf("numero menor %d\n\n", resultado_menor );
	
	printf("Mostrando sem usar a variavel logal auxiliar:\n");
	printf("menor numero %d",funcao_menor(numero01,numero02));
	

}
