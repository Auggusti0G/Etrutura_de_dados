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
