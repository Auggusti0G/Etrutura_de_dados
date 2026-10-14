// // Respostas refrente a primeira quetsao da Segunda protica de C 

// Aluno : Rafael Augusto               // RA: 22508717


//1.Desenvolva o programa que leia quarenta valores inteiros digitados pelo usuário, armazene-os num vetor (array) e gere a tela de saída com as seguintes informações: 

// todos os valores armazenados no vetor 
//A soma de todos os valores do vetor.
// quantidade de valores maior que vinte.

//- Obs.: para facilitar os testes de desenvolvimento, resolva com quatro valores

#include <stdio.h>
int main(){
	int i,
	soma =  0 ,
	maior20 = 0,
	valor[4];
	
	// Mensagem orientando o usuario oque  diitar:
	printf("Digite  os valores para serem quardados dentro do Array:\n");
	
	//Entrada de dados
	for(i = 0; i < 4 ; i++){
		scanf("%d",&valor[i]);
		soma = soma + valor[i];
		
	// Verifica se o  valor é  mairo que vinte 
	if (valor[i] > 20){
		maior20++;
	}
}

//Siada  de dados que mostram os valores
printf("Valor no vetor:\n");
for(i = 0; i < 4; i++){
	printf("%d\n", valor[i]);
}
//Saida de dados: Soma de valores  e quantidade  maiores que 20 
printf("Soma dos valores = %d\n", soma);
printf("Quantidade de valores maior que vinte = %d\n", maior20);

return 0;
}



