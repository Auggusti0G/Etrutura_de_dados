/*                Comentários de várias linhas
  CEUB  -  FATECS  -  ADS  -  Programação  -  Prof. Barbosa

- Estrutura de dados: Fila (queue) estática com acesso sequencial.

  Uma fila em C é uma estrutura de dados linear para armazenar e manipular
os dados. O primeiro elemento inserido é o primeiro elemento a ser removido.

- Implemente (queue - fila segue o modelo FIFO - First In, First Out):

1. Crie uma fila (staticQueue) global vazia de tamanho quatro, use constante
2. Crie uma variável global (rear) para controlar o fim da fila
3. Crie procedimento inicia fila, startQueue, rear = -1
4. Crie procedimento insere no final da fila, enqueue. No main, teste
   Ele não recebe nada
   O usuário digita um valor inteiro
   Atualiza (incrementa) a variável de controle (rear)
   Insere o valor digitado no final da fila, no vetor
   Não retorna nada (void)
5. Crie procedimento mostra fila na horizontal, show. No main, teste	
   for para percorrer o vetor até o fim da fila (rear)
	    mostra o valor na posição do vetor		
6. Cria procedimento sair da fila, dequeue. No main, teste 
   mostra quem saiu da fila
	 percorre a fila com for 
       desloca todos os elementos para esquerda, posição i recebe posição i+1
	 decrementa o rear
7. Cria procedimento consulta inicio da fila, peek. No main, teste
   Mostra o elemento da posição 0 (zero) da fila
8. Cria funçao fila está vazia, isEmpty. No main, teste
   Se rear igual a -1, fila vazia (retorne 1). Senão fila não vazia (retorne 0)
*/
#include <stdio.h>        // printf, scanf (biblioteca)
#define SIZE 4            // Constante SIZE, tamanho da fila
int staticQueue[SIZE];    // Cria fila global vazia									// 1.
int rear;                 // Controla o fim da fila									// 2.
void startQueue() {       // Inicia fila														// 3.
	  rear = - 1;           // Inicia fila vazia
}
void enqueue() { 		// Inserir no final da fila (enqueue)						// 4.
    int item;
    printf("\nElement to be inserted in the Queue: ");
    scanf("%d", &item);							  // Usuário digita um valor
    rear = rear + 1;   // rear += 1;	// rear++;  // incrementa rear
    staticQueue[rear] = item;		      // Coloca valor digitado na fila
}
void show() { 			// Mostrar fila na horizontal										// 5.
    printf("\nQueue: (Front) ");
    for (int i = 0; i <= rear; i++) {
        printf("%d ", staticQueue[i]);
    }
    printf("(Rear)\n--------------------------");
}
void dequeue() { 	// Remover (dequeue) com deslocamento							// 6.
    printf("\nRemoved from the queue: %d\n", staticQueue[0]);
    for (int i = 0; i<rear; i++){ // Desloca todos os elementos para esquerda
        staticQueue[i] = staticQueue[i + 1];
    }
    rear = rear - 1; // rear -= 1; // rear--; // Decrementa final da fila
}
void peek() { 		// Mostra início da fila													// 7.
    printf("\nElemento no inicio da fila: %d\n", staticQueue[0]);
}
int isEmpty() {   // Fila vazia?																		// 8.
    if (rear == -1) {
        printf("\nQueue empty.\n");
		    return 1;  // return true;		// true = 1
		} else {
		    return 0;  // return false;		// false = 0
		}
}

int main() {
    startQueue();		// Chama o procedimento
    enqueue();			// Entra na fila
    enqueue();
    enqueue();
		show();	
    dequeue();			// Sai da fila
    show();
    peek();     		// Início da fila
}

