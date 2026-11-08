/*               Comentários de várias linhas
  CEUB  -  FATECS  -  ADS  -  Programação  -  Prof. Barbosa

- Problema anterior:
- Use vetor, construa o programa que calcule a média aritmética de uma turma
com trinta alunos, onde cada aluno realizou uma avaliação. Na tela de saída, 
além da média aritmética da turma, mostre também a nota de todos os alunos. 


- Problema atual:

- Refaça o problema anterior usando procedimento e o main.

1- Crie a função mediaVetor. Ela recebe o endereço do vetor, calcula a média
aritmética dos valores armazenados no vetor e retorna o valor da média. 

2- A função main declara o vetor, lê os valores para carregar o vetor, 
chama a função e mostra o relatório de saída. 
Use uma constante para definir o tamanho do vetor.

- Fórmula de média aritmética: 		media = ___soma___
						 			 						 			   		quantidade
- Para facilitar os testes de desenvolvimento, resolva com três valores		*/



#include <stdio.h>      	// printf, scanf (Bibliotecas)
#define N 3								// Cria a constante global N.

float mediaVetor(float vNotas[]){ // Função recebe o endereço do vetor.
  float soma = 0, media;
  for (int i = 0; i < N; i++) {
    soma = soma + vNotas [i];			// soma += vNotas[i];  
  }
  media = soma / N;
  return media;           // Retorna o valor da média pra função main.
} 

int main ( ) {                           
  int i;
  float vlRetorno, 
        nota [N]; // Vetor com N posições, da posição 0 a posição N-1
  printf ("- Entrada de dados:\n"); // Tela de entrada
  for (i = 0; i < N; i++) {
    printf ("Nota do aluno %2d: ", i+1); // Mensagem dinâmica.
    scanf ("%f", &nota[i]);
  }
  vlRetorno = mediaVetor(nota); // Chama a função, passa o endereço do vetor
  printf ("\n\nMedia da turma: %.2f\n", vlRetorno);
  printf("\n- Nota dos alunos");  	// Tela de saída
  for (i = 0; i < N; i ++){
    printf ("\n%2.1f", nota [i]);	// Uma casa decimal
	} 
} 
/* --- ALTERAÇÕES:
a. Este programa tem quantas chaves opcionais?
b. Na tela de saída, acrescente o número do aluno, ou seja, mostre
   o número do aluno e a nota do aluno. Veja o layout:
	Número - Nota do aluno:
	1 - 5.5
	2 - 6.5
	3 - 7.0							
c. Crie o procedimento mostraVetor. Ela recebe o endereço do vetor, 
   mostra todos os valores armazenados no vetor e não retorna nada.
d. Mostre a quantidade de alunos aprovados (nota maior ou igual a 5).
	--- DICAS:
Tem quatro chaves opcionais																				// a.
  printf("\nNumero - Nota do aluno");  // Tela de saída de dados.	// b.
  for (i = 0; i < N; i ++){
    printf ("\n%2d     - %4.1f", i+1, vNotas [i]);
	} 
void mostraVetor(float vNotas[]){ // Recebe endereço do vetor 		// c.
  int i;
	printf("\nNumero - Nota do aluno"); // Tela de saída de dados.
  for (i = 0; i < N; i ++){
    printf ("\n%2d     - %4.1f", i+1, vNotas [i]);
	} 
} 
  ...
	mostraVetor(nota);	// No final do main, chama o procedimento

   int ct_aprov = 0;     					// Antes do for								// d.
   if ( nota [i] > 5 )            // Dentro do for.
     ct_aprov ++;
   printf ("\nQtde aprovados: %d ", ctMaior); // Depois do for.     

*/
#include <stdio.h> //Biblioteca printf scanf

//Criando uma funcao que vai devolver uma media aritmetica 

// mostrando oque o vetor devolve e passando duas variavesi como parmetros

//Recebe dois parametors e devole float:
void mostrar_posicao(float vetor_posi[] , float tmn){
	int i ;
	
	for(i = 0 ; i < tmn ; i++){
		printf("%d - %.2f\n",i+1, vetor_posi[i]);
	}
}

float mostrar_media( float vetor[], int tamanho ){
	
	
	int contador = 0 ;   // Conta os valores somados quantidade 
	int somador = 0 ;   //soma todos os numeros digitado
	
	int i ;             // Controla o for servindo de indice 
	
	int media ;
	
	for(i= 0 ; i < tamanho ; i++){
		printf("%.2f ", vetor[i]);
		
		contador++;
		somador+=vetor[i];
	}
	if(contador <= 0){
		printf("Nao foi digitdo nenhum numero :");
	}else{
		printf("\n\nMostrando a media : \n\n");
	    media = somador / contador ;
   }
   return media ;
}

int main( ){
	
	float vet[3];
	int i ;
	float resultado ;
	
	int resultado_posi_notas ;
	
	printf("Entrada de dados : \n\n");
	
	for(i = 0 ; i < 3; i++){
		printf("Digite os valores do vetor: \n\n ");
		scanf("%f", &vet[i]);
	}
	printf("valores vetor : \n\n");
	
	resultado = mostrar_media(vet,3);
	
	printf("\n%2.f\n\n",resultado);
	
	
	printf("Mostrando as notas e suas posicoes :\n");
	mostrar_posicao(vet, 3);
	
}

