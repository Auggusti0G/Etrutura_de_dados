/*               Comentários de várias linhas
  CEUB  -  FATECS  -  ADS  -  Programação  -  Prof. Barbosa
- Estrutura de dados: ordenação por “bolha” (Bubble Sort)

- Implemente o Bubble Sort na ordem crescente:
1. Crie um vetor com cinco valores desordenados: 23, 4, 67, -8, 21
2. Mostre todos os valores do vetor com os dados desordenados na horizontal.
3. Algoritmo Bubble Sort (Lógica do Bubble Sort):
 a. Percorra o vetor várias vezes, use estrutura de repetição aninhada.
 b. Verificar se o valor da posição "j" é maior que o valor da posição "j+1".
   - Se verdade: troca o conteúdo das posições "j" e "j+1".
 c. Ao final da passagem, o maior elemento "flutua" para o final do vetor.
 d. Repetida o processo até não ter mais trocas ou até que todas as
   posições estejam ordenadas.
4. Mostre todos os valores do vetor com os dados ordenados.				*/

#include <stdio.h>                     // prinf, scanf (biblioteca)
int main(){
    int size = 5;                      // 1. Tamanho do vetor
    int vet[size] = {23, 4, 67, -8, 21};	
    int i, j, aux;
    printf("Valores desordenados na horizontal:\n"); // 2. Mostra vetor
    for (i = 0; i < size; i++) {
        printf("%d  ", vet[i]);
    }

    for(i = 0; i < size-1; i++) {		  // for externo // 3. Bubble sort
        for(j = 0; j < size-1; j++){  // for interno
            if (vet[j] > vet[j + 1]){	// Posição j maior que posição j+1 // 3b.
                aux = vet[j];					// Troca o valor de duas posições
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
            }		// Fim do if
        }				// Fim do for interno
    }						// Fim do for externo

    printf("\n\nValores ordenados na horizontal:\n");	// 4. Mostra vetor
    for (i = 0; i < size; i++) {
        printf("%d  ", vet[i]);
    }
} /* --- ALTERAÇÕES:
a. Quantos teste (repetições) foram feitos dentro do for interno?
   Quantidade de comparacoes: 16 (use contador)
b. Melhore o algoritmo Bubble Sort para executar menos testes (fase 1)
c. Crie um procedimento para mostrar os valores do vetor, ele recebe o
endereço do vetor e o tamanho do vetor. O procedimento vai ser chamado
duas vezes do programa principal (função main).

	--- DICAS:
    int ct = 0;								// Antes dos fors										// a.
				 		ct ++;						// Dentro do for interno
		printf("\n\nQuantidade de comparacoes: %d", ct); // Depois dos fors

Quantidade de comparacoes: 10	(fase 1)														// b.
		...
    int ct = 0;			
    for (i = 0; i < size - 1; i++) {		
//      for (j = 0; j < size - 1; j++){  		// Retirar esse for
        for (j = 0; j < size - 1 - i; j++){ // Fase 1
				 		ct ++;
            if (vet[j] > vet[j + 1]) {
                aux = vet[j];	
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
            }
        }
    }
		printf("\n\nQuantidade de comparacoes: %d", ct);

void printArray(int v[], int n){	// Procedimento			// c.
    int i;
    for(i = 0; i < n; i++)
        printf("%2d ", v[i]);
    printf("\n");
}

*/
