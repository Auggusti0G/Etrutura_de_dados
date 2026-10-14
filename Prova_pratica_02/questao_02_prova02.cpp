// Respostas refrente a Segundo questão da prova protica de C 

// Aluno : Rafael Augusto               // RA: 22508717


//2.Desenvolva o programa que leia cinquenta valores inteiros digitados pelo usuário, armazene-os num vetor (array) e gere a tela de saída com as seguintes informações: 

//Mostre todos os valores armazenados no vetor 
// média aritmética dos valores armazenados no vetor.
// quantidade de valores pares.

//- Obs.: para facilitar os testes de desenvolvimento, resolva com cinco valores

#include <stdio.h>
int main(){
	int i,
	    soma = 0,
	    Contador_pares = 0,
  	    valor[5];
  	float media;
  	
  	//Mensagem orientado o usuairo ao que fazer
  	printf("Digite os  valores do Array:\n");
  	
  	//Loop para a entrada de dados 
  	for(i = 0; i < 5; i++){
  		scanf("%d", &valor[i]);
  		soma = soma + valor[i];
  		
  		if (valor[i] % 2 == 0){
		  Contador_pares ++;
	  }
}
media = (float)soma / 5;

printf("Valores no Vetor:\n");
for(i = 0; i < 5; i ++){
	printf("%d\n", valor[i]);
}

printf("Media aritmetica = %.2f\n", media);
printf("Qunatidade de valores pares noarray = Contador_pares");

return 0 ;
}
