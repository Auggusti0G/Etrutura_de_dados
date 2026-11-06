// Respostas refrente a quarta questão quetsao da prova protica de C 

// Aluno : Rafael Augusto               // RA: 22508717

//4. Projete a função potencia que recebe dois valores inteiros, a base e o expoente, e retorna o valor da potência correspondente. 
//A função main lê o valor da a base e do expoente, chama a função potencia passando os dois argumentos (os valores lidos) e mostra o valor
//retornado pela função potencia. Considere que a base pode ser um valor inteiro positivo, nulo ou negativo e o expoente, um inteiro positivo ou nulo.
//Definição: potência é a base multiplicada por ela mesma expoente vezes.

#include <stdio.h>

// Função que calcula e retorna o valor absoluto (módulo)


 #include <stdio.>

int valor_potencia(int numero , int expoente){
	int resultado = numero ** potncia ;
	return resultado ;
}

int main (){
	
	int valor , expo ;
	
	printf("Digite um numero inteiro :");
	scanf("%d", &valor);
	
	printf("Digite um expoente inteiro :");
	scanf("%d", &expo);
	
	int resultado = valor_potencia(valor, expo);
	printf("O valor da potencia sera : %d", resultado );
	
}
