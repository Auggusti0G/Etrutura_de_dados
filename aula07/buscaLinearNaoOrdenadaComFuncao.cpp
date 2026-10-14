/*               Comentários de várias linhas.
  CEUB  -  FATECS  -  ADS  -  Programação  -  Prof. Barbosa

- Estrutura de dados: 
- Busca sequencial ou linear com rotina e com dados não ordenados.

- Implemente:

1. No main, crie um vetor para armazenar os valores: 23, 4, 67, -8, 54, 90, 21
2. No main, leia o valor da pesquisa (busca) digitado pelo usuário.
3. No main, chame a função passando os argumentos
4. Crie a função busca linear ordenada que recebe 3 parâmetros: o endereço
   do vetor, o tamanho do vetor e o valor de pesquisa. E retorna um valor.

5. Lógica da função busca linear ou sequencial:
 a. Crie a variável "encontrou" (flag) com valor incial -1
 b. Percorra o vetor e verifica se o valor da pesquisa é igual a um dos 
    valores do vetor. Se o valor for encontrado:
    - A função retorna o índice (posição) do vetor, 
	  - Caso contrário, a função retorna -1.
6. Na main, chame a função e mostre uma das mensagens:
   "Valor nao encontrado." ou "Valor encontrado na posicao (índice) x."   */  

#include <stdio.h>
int buscaLinear(int v[], int n, int busca){                    	// 4.
    int i;						// Variável de controle do for
    int encontrou = -1; // Flag -1, indica elemento não encontrado
    for (i = 0; i < n; i++){
        if (busca == v[i]){																			// 5b
            encontrou = i; // Elemento encontrado na posição i
            break;  		   // Sai do for quando encontra o elemento  
       }
    }
    return encontrou;																						// 5b.
} 
int main() {     
    int qtd = 7;
    int vet[qtd] = {23, 4, 67, -8, 54, 90, 21};             		// 1.
    int valorPesquisa, v_retorno;
    printf("Valor da pesquisa (busca): ");
    scanf("%d", &valorPesquisa);                            		// 2.
    v_retorno = buscaLinear(vet, qtd, valorPesquisa);       		// 3.
    if (v_retorno == -1) // v_retorno recebe o valor que a função retornou
        printf("\nValor nao encontrado.\n");										// 6.
    else
        printf("\nValor encontrado no indice %d.\n", v_retorno);
    mostraVetorVertical(vet, qtd);	
} /* --- ALTERAÇÕES:
a. Refaça a função sem usar a variável encontrou (o flag).
b. No final, mostre todos os valores armazenados no vetor, na vertical.
c. No final, mostre todos os valores armazenados no vetor, na horizontal.
d. Crie um procedimento para mostrar os valores do vetor na vertical.
	 --- DICAS:
int buscaLinear(int v[], int n, int busca){                   // a.
    int i; 						// Solução sem usar a variável encontrou (flag)
    for (i = 0; i < N; i++){ 
        if (valorPesquisa == V[i])
            return i; // Elemento encontrado na posição i
    }
    return -1;        // Elemento não encontrado
}
    // ... no final	do main																		// b.
    printf("\nValores do vetor na vertical:");											
		for (i = 0; i < qtd; i++){                      				
		    printf("\n%d", vet[i]);
	  }
    ...	no final do main																			// c.
    printf("\nValores do vetor na horizontal:");											
		for (i = 0; i < qtd; i++){                      				
		    printf("%d\t", vet[i]);
	  }
void mostraVetorVertical(int v[], int n){											// d.
    int i;
    printf("\nValores do vetor na vertical:");											
		for (i = 0; i < n; i++){                      				
		    printf("\n%d", v[i]);
	  }
}
*/
