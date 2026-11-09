#include <stdio.h>

int lendo(int v[], int tmn ){
	
	int contador = 0 ;
	int somador = 0 ;
	int i ;
	float media = 0 ;
	int maior_q = 0;
	int pares = 0 ;
	
	printf("\n\nMostrando valores vetor :\n\n");
	for(i = 0 ; i < tmn ; i++){
		printf("%d ", v[i]);
		
		somador += v[i];
		contador++;
		
		if (v[i] > 20){
		   maior_q++;
    	}
    	if (v[i] % 2 == 0){
		   pares++;
    	}	
	}
	
	if (contador == 0){
		printf("Nenhum numero foi digitado :");
	}else {
		media = (float)somador / contador ;
	}
	
	printf("\nMostrando a soma de todos os valores : %d\n\n", somador);
	printf("Mostrando a quantidade de numeros : %d\n\n", contador );
	printf("Mostrando quantidade de valores maior que 20 : %d\n\n", maior_q);
	printf("Mostrando os numeros pares : %d\n\n", pares);
	
	printf("Mostrando a media ;\n\n");
	return media ;
}
int main(){
	
	int i ;
	
	int vetor[5];
	
	float resultado ;
	
	printf("Entrada de dados : \n\n");
	for(i = 0 ; i < 5 ; i++){
		printf("Digite os numeros %d :\n\n", i+1);
		scanf("%d", &vetor[i]);
	}
	resultado = lendo(vetor,5);
	printf("%.2f\n", resultado );
}
