/*               Comentários de várias linhas.
  CEUB  -  FATECS  -  ADS  -  Programação  -  Prof. Barbosa
  
- Estrutura de dados: 

- Busca linear ou sequencial sem rotina e com dados não ordenados.

- Implemente:

1. No main, crie um vetor com os valores: 23, 4, 67, -8, 54, 90, 21
2. Crie a variável "encontrou" (flag) com valor incial -1
3. Leia o valor da pesquisa (busca) digitado pelo usuário.

4. Lógica de busca linear ou sequencial não ordenada:
 a. Percorra o vetor e verifique se o valor da pesquisa está no vetor.
 b. Se o valor da pesquisa for igual a um dos valores no vetor, armazene  
 		o índice e pare o for (valor encontrado).
 c. Ao término da pesquisa no array, se não encontrar: 
 		a variável "encontrou" continua com o valor –1, indicando que o valor
    buscado não existe no array.
5. No final, mostre uma das mensagens:
   "Valor nao encontrado." ou "Valor encontrado na posicao (índice) x."  */
#include <stdio.h>    	// printf, scanf (biblioteca)
int main(){     
    int qtd = 7;      	// Quantidade de valores no vetor.
    int vet[qtd] = {23, 4, 67, -8, 54, 90, 21};     						// 1. 
    int encontrou = -1; // Flag, indica elemento não encontrado // 2.
    int valorPesquisa, i; // Outras variáveis
    printf("Valor da pesquisa (busca): ");          						// 3.
    scanf("%d", &valorPesquisa);
    for (i = 0; i < qtd; i++){                      						// 4a.
        if (valorPesquisa == vet[i]){ 													// 4b.
            encontrou = i; // Elemento encontrado na posição i
        }   // Fim do if
    }       // Fim do for
    if (encontrou == -1)                            						// 4c.
        printf("\nValor nao encontrado.\n");										// 5.
    else
        printf("\nValor encontrado na posicao (indice) %d.\n", encontrou);
} /* --- ALTERAÇÕES:
a. Mostre quantas repetições foram realizados na pesquisa, use contador.
b. Quando encontrar o valor pesquisado, como melhorar o algoritmo para
   realizar menos repetições.
c. No final, mostre todos os valores armazenados no vetor, na vertical.
d. No final, mostre todos os valores armazenados no vetor, na horizontal.

	 --- DICAS:
    int ct = 0;  									// Antes do for									// a.
		    ct++;											// Dentro do for
    printf("Quantidade: %d", ct)  // Depois do for
    // ...																												// b.
    for (i = 0; i < qtd; i++){                      		
        if (valorPesquisa == vet[i]){ 
            encontrou = i; // Elemento encontrado na posição i
            break; // Sai do for quando encontra o elemento (otimiza) //b.
        }   // Fim do if
    }       // Fim do for
    // ... no final																								// c.
    printf("\nValores do vetor na vertical:");											
		for (i = 0; i < qtd; i++){                      				
		    printf("\n%d", vet[i]);
	  }
    ...																														// d.
    printf("\nValores do vetor na horizontal:");											
		for (i = 0; i < qtd; i++){                      				
		    printf("%d\t", vet[i]);			//  \t	tab
	  }
*/
