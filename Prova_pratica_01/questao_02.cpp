// Respostas refrente a segunda quetsao da prova protica de C 

// Aluno : Rafael Augusto               // RA: 22508717

//2. Desenvolva a função converte_em_minuto. Ela recebe o horário no formato (hora e minuto) e retorna o valor correspondente em minutos.
//A função main lê dois horários (hora e minuto) e chama a função converte_em_minuto duas vezes. Com os valores retornado pela função
// converte_em_minuto, a função main mostra a diferença entre os dois horários em minutos. Use variável local

#include <stdio.h>
#include <stdlib.h>

// Função que converte horas e minutos para o total equivalente em minutos
int converte_em_minuto(int hora, int minuto) {
    return (hora * 60) + minuto;
}

int main() {
    // Variáveis locais
    int h1, m1, h2, m2;
    int total_minutos1, total_minutos2, diferenca;

    // Leitura do primeiro horário (passo a passo)
    printf("Digite a HORA do primeiro horario: ");
    scanf(" %d", &h1);
    printf("Digite os MINUTOS do primeiro horario: ");
    scanf(" %d", &m1);

    // Leitura do segundo horário (passo a passo)
    printf("Digite a HORA do segundo horario: ");
    scanf(" %d", &h2);
    printf("Digite os MINUTOS do segundo horario: ");
    scanf(" %d", &m2);

    // Conversão dos horários em minutos
    total_minutos1 = converte_em_minuto(h1, m1);
    total_minutos2 = converte_em_minuto(h2, m2);

    // Cálculo da diferença
    diferenca = abs(total_minutos1 - total_minutos2);

    // Exibição do resultado
    printf("\nA diferenca entre os dois horarios eh de %d minuto(s).\n", diferenca);

    return 0;
}


//-----------------------------------------------------------------------------
//----------------Escrevendo novamente do emu jeito----------------------------
//-----------------------------------------------------------------------------

#include <stdio.h>

float converte_time(float h , float min){
	return h * 60 +  min ;
}

int main(){
	
	int h01 , min01;
	int h02 , min02;
	
	double resultado_01 ;
	double resultado_02 ;
	
	double diferenca ;
	
	//Primeiros valores para a  primeia chamada
	printf("Digite  o h01 :");
	scanf("%d",&h01);
	
	printf("Digite  o min01 :");
	scanf("%d",&min01);
	
	//Segundos valores para a chamada da funcao
	printf("Digite  o h02 :");
	scanf("%d",&h02);
	
	printf("Digite  o min02 :");
	scanf("%d",&min02);
	
	
	//Chamando a funcao pela primaira vez
	printf("\nPrimeira chamada : \n\n");
	resultado_01 = converte_time(h01, min01);
	printf("O valor da hora total em mins sera : %g mins \n\n", resultado_01);
	
	//Chamando a funcao pela segunda vez usando outros  valores 
	printf("Segunda chamada : \n\n");
	resultado_02 = converte_time(h02, min02);
	printf("O valor da hora total em mins sera %g\n", resultado_02);
	
	printf("\nMostrando a diferença dos horarios : \n\n");
	
	diferenca = resultado_01 - resultado_02;
	if(diferenca < 0) {
		diferenca = -diferenca;
	}
	
	printf("A diferença entre os horarios em mins sera : %g", diferenca);
}
