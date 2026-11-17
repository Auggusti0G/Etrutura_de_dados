//---------------------------------------
//------Ecerxicios de lista -------------
//---------------------------------------

//Oque é decrementar??
// R: Decrementar é diminuir 1 de uma variável. qtd-- é o mesmo que qtd = qtd - 1.
//    O contrário (somar 1) é incrementar: qtd++

#include <stdio.h>

// 1- Criando uma lista Global 

#define SIZE 4                 // CORRIGIDO: #define não leva ponto e vírgula
int lista_global[SIZE];        // CORRIGIDO: era "size" minúsculo; C diferencia maiúsculas

// 2- Iniciando a lista co uma variavel de cotrole
int qtd = 0;

//3 - Elaborando o Create vamos coloca elementos dentro da lista 

//Receb valor como parametro 
// CORRIGIDO: removi o "int valor;" global. O valor já chega pelo parâmetro da função
void inseri_final(int valor){
	lista_global[qtd] = valor;                           //Por que que aqui tem qu colocar quantidade e nao i //??
	// R: Porque qtd sempre aponta para a próxima posição livre do vetor.
	//    Com 0 elementos, insere em [0]; com 1 elemento, em [1], e assim por diante.
	//    Aqui não tem laço, então não existe i para usar.
	printf("Valor %d inserido\n", lista_global[qtd]);    // CORRIGIDO: era "lista"; adicionei \n
	qtd++;
}

// 4 - Criando o procedimento qu vai mostaa toda lista 
void mostra(){
	printf("Mostrando todos os elementos da lista: ");
		
		for (int i = 0; i < qtd; i++){                   // CORRIGIDO: i declarado no for, não global
			printf("%d ", lista_global[i]);              //Por qu ultilizamos ie nao ultilizamos qtd
			// R: Porque aqui precisamos visitar TODAS as posições, uma por uma.
			//    O i anda de 0 até qtd-1. O qtd só diz onde parar.
			//    Se usasse lista_global[qtd], imprimiria sempre a mesma posição, que está vazia.
		}
		printf("\n-------------------------------------------------\n");  // CORRIGIDO: faltava ;
}

//5.0 - Criando funcao qu reira um valor d fial da lisa

void retire_elmeno(){
	
	//Elaborando um condicional 
	if(qtd == 0) {
		printf("Lista vazia, nada a remover\n");
		return;
	}
	qtd--;                                                // decrementa: agora qtd aponta pro último
	printf("Valor %d removido\n", lista_global[qtd]);    // CORRIGIDO: era "lista"
	lista_global[qtd] = 0;                                // zera a posição removida
}

//4.1 - Puxando tudo ar o main

//Na funcao principal do progam nos temso que puxar
//fucnoes e colocar os paramets quando cessario
int main(){
	inseri_final(10);
	inseri_final(20);
	inseri_final(30);
	mostra();            // 10 20 30

	retire_elmeno();     // remove 30
	mostra();            // 10 20

	retire_elmeno();
	retire_elmeno();
	retire_elmeno();     // lista vazia
	mostra();

	return 0;
}
