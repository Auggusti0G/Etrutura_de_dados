#include <stdio.h>
 
#define SIZE 4
 
int staticQueue[SIZE];
int rear;
 
// Inicializa a fila vazia
void startQueue() {
    rear = -1;
}
 
// Verifica se a fila está vazia
int isEmpty() {
    if (rear == -1) {
        printf("\nFila vazia\n");
        return 1;
    } else {
        return 0;
    }
}
 
// Insere um valor no final da fila
void enQueue() {
    int valor; // item
 
    printf("Insira um valor inteiro: ");
    scanf("%d", &valor);
 
    rear += 1;
    staticQueue[rear] = valor;
}
 
// Remove o elemento do início da fila
void adiciona_remove() {
    printf("\nRemoved from the queue: %d\n", staticQueue[0]);
 
    for (int i = 0; i < rear; i++) {
        staticQueue[i] = staticQueue[i + 1];
    }
 
    rear = rear - 1;
}
 
// Mostra os valores da fila
void show() {
    printf("Valores da lista: \n");
 
    for (int i = 0; i <= rear; i++) {
        printf(" %d ", staticQueue[i]);
    }
 
    printf("(Rear)\n---------------------------------\n");
}
 
// Mostrando a funcao melhorada
void show_melhorada() {
    if (isEmpty()) {
        return;
    }
 
    printf("\nQueue : (Front)");
 
    for (int i = 0; i <= rear; i++) {
        printf(" %d ", staticQueue[i]);
    }
 
    printf("(Rear)\n");
}
 
// Mostrando elemento do inicio da fila
void peek() {
    printf("\nElemento no inicio da fila: %d\n", staticQueue[0]);
}
 
int main() {
    startQueue();
 
    enQueue();
    enQueue();
    show();
 
    adiciona_remove();
    show();
 
    peek();
    show_melhorada();
 
    return 0;
}
 
