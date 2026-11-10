/*               Comentários de várias linhas.
  CEUB  -  FATECS  -  ADS  -  Programação  -  Prof. Barbosa

- Estrutura de dados: pilha (stack) estática com acesso sequencial.

- Implemente (pilha segue o modelo LIFO (Last In, First Out):

1. Crie uma pilha global vazia de tamanho quatro, use constante
2. Inicie a pilha vazia, use a variável global top = -1
3. Crie o procedimento empilha (insere na pilha), push. No main, teste
	 não recebe nada			(- Dicas para Implementar)
	 lê o valor				
	 incrementa a variável top, 
	 insere o valor na pilha (vetor), 
	 mostra o valor empilhado
4. Crie o procedimento mostra pilha, showStack. No main, teste
	 não recebe nada			(- Dicas para Implementar)
	 for de 0 até top		
	    mostrar vetor			
5. Crie o procedimento desempilhar (remove da pilha), pop. No main, teste
	 mostra o valor da posição top	(- Dicas para Implementar)
	 coloca zero na posição top
	 decrementa o top
6. Crie o procedimento Consulta topo, peek. No main, teste. 
   Mostra o elemento no topo e o índice onde ele está (- Dicas implementação)
7. Crie a funçao pilha está vazia, isEmpty. Retorne true (1) ou false (0)
*/

#include <stdio.h>		// printf, scanf (biblioteca)
#define TAM 4					// Constante, tamanho da pilha
int stack[TAM]; 			// Cria pilha global										// 1.
int	top = -1;					// Inicia pilha vazia, variável global	// 2.

void push(){					// Empilha															// 3.
	int valor;
	printf("\nValor inteiro: ");
	scanf("%i", &valor);
	top++;							// top = top + 1
	stack[top] = valor;
	printf("Pushed: %d", valor);
}

void showStack(){			// Mostra na horizontal									// 4.
	printf("\nStack horizontal: (base) ");
	for(int cont = 0; cont <= top; cont++){		
		printf(" %i ", stack[cont]);
	}
	printf(" (top)");
}

void pop(){						// Desempilha														// 5.
	printf("\nPopped: %d", stack[top]);
	stack[top] = 0;
	top--;
}

void peek(){					// Consulta topo												// 6. 
  printf("\nElemento no topo: %i", stack[top]);	
  printf("\nPosicao (indice) do topo: %d", top );
}

int isEmpty(){ 				// Colocar antes de todas as rotinas			// 7.
	if(top == -1){			// Pilha vazia?
	  printf("\nStack empty.");
		return true;			// return 1;	
	}else{
		return false;			// return 0;
	}
}

int main(){			
	push(); printf("\n--------------------------");
	push(); printf("\n--------------------------");
	push(); printf("\n--------------------------");
	showStack(); printf("\n--------------------------");
	pop(); printf("\n--------------------------");
	showStack(); printf("\n--------------------------");
	peek(); printf("\n--------------------------");
  printf("\n%d", isEmpty()); printf("\n--------------------------ddd");
}

