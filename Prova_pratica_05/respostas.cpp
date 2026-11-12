/*                Comentarios de varias linhas
  CEUB  -  FATECS  -  ADS  -  Algoritmos e Estrutura de Dados  -  Prof. Barbosa
  Prova Pratica (PP) - Questao 5 - Fila estatica (static queue)

--------------------------------------------------------------------------
1. RESUMO: FILA ESTATICA (STATIC QUEUE)
--------------------------------------------------------------------------
- Fila (queue) e uma estrutura de dados linear usada para armazenar e
  manipular dados em sequencia.
- Segue o modelo FIFO (First In, First Out): o primeiro elemento que
  entra e o primeiro que sai. Funciona como uma fila de banco.
- E "estatica" porque e implementada com um vetor de tamanho fixo,
  definido por uma constante (SIZE). Ela nao cresce depois de criada.
- O acesso e sequencial: os elementos ficam um ao lado do outro no vetor.
- A variavel de controle "rear" guarda o indice do ultimo elemento:
    rear = -1         -> fila vazia
    rear = SIZE - 1   -> fila cheia
- Operacoes principais:
    startQueue -> inicia a fila vazia (rear = -1)
    enqueue    -> insere no final da fila (incrementa rear)
    dequeue    -> remove do inicio da fila (posicao 0), desloca todos os
                  elementos uma posicao para a esquerda e decrementa rear
    peek       -> consulta o elemento do inicio, sem remover
    isEmpty    -> verifica se a fila esta vazia
    show       -> mostra os elementos da fila
- Cuidados: nao remover nem consultar uma fila vazia (underflow) e nao
  inserir numa fila cheia (overflow).
- Limitacao: o dequeue precisa deslocar todos os elementos, entao fica
  mais lento quanto maior for a fila.
--------------------------------------------------------------------------
*/

#include <stdio.h>            // printf, scanf (biblioteca)
#define SIZE 4                // Constante SIZE, tamanho da fila

int staticQueue[SIZE];        // Fila global
int rear;                     // Controla o fim da fila

void startQueue() {           // Inicia a fila vazia
    rear = -1;
}

int isEmpty() {               // Fila vazia? 1 = sim, 0 = nao
    if (rear == -1) {
        printf("\nQueue empty.\n");
        return 1;
    } else {
        return 0;
    }
}

// 7. Rotina extra: fila cheia? 1 = sim, 0 = nao
int isFull() {
    if (rear == SIZE - 1) {
        printf("\nQueue full.\n");
        return 1;
    } else {
        return 0;
    }
}

void enqueue() {              // Insere no final da fila
    int item;
    if (isFull()) {           // 7. Usa isFull para nao passar do vetor
        return;
    }
    printf("\nElement to be inserted in the Queue: ");
    scanf("%d", &item);
    rear = rear + 1;
    staticQueue[rear] = item;
    printf("Inserted: %d\n", item);
}

// 3. show melhorado com isEmpty (horizontal)
void show() {
    if (isEmpty()) {          // Fila vazia: nao tem o que mostrar
        return;
    }
    printf("\nQueue: (Front) ");
    for (int i = 0; i <= rear; i++) {
        printf("%d ", staticQueue[i]);
    }
    printf("(Rear)\n");
}

// 2. Mostra a fila na vertical
void showVertical() {
    if (isEmpty()) {
        return;
    }
    printf("\nQueue vertical:\n");
    printf("Posicao - valor\n");
    for (int i = 0; i <= rear; i++) {
        printf("%7d - %d", i, staticQueue[i]);
        if (i == 0) {
            printf("   (Front)");
        }
        if (i == rear) {
            printf("   (Rear)");
        }
        printf("\n");
    }
}

// 4. dequeue melhorado com isEmpty
void dequeue() {
    if (isEmpty()) {          // Fila vazia: nao tem quem remover
        return;
    }
    printf("\nRemoved from the queue: %d\n", staticQueue[0]);
    for (int i = 0; i < rear; i++) {        // Desloca para a esquerda
        staticQueue[i] = staticQueue[i + 1];
    }
    staticQueue[rear] = 0;    // Limpa a ultima posicao
    rear = rear - 1;
}

// 5. peek melhorado com isEmpty
void peek() {
    if (isEmpty()) {          // Fila vazia: nao tem inicio
        return;
    }
    printf("\nElemento no inicio da fila: %d\n", staticQueue[0]);
}

// 6. main organizado com menu
int main() {
    int opcao;

    startQueue();

    do {
        printf("\n========== MENU FILA ==========");
        printf("\n1 - Enqueue (inserir)");
        printf("\n2 - Dequeue (remover)");
        printf("\n3 - Show (mostrar na horizontal)");
        printf("\n4 - Show vertical");
        printf("\n5 - Peek (consultar inicio)");
        printf("\n0 - Sair");
        printf("\nOpcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: enqueue();      break;
            case 2: dequeue();      break;
            case 3: show();         break;
            case 4: showVertical(); break;
            case 5: peek();         break;
            case 0: printf("\nEncerrando o programa.\n"); break;
            default: printf("\nOpcao invalida.\n");
        }
    } while (opcao != 0);

    return 0;
}
