// Respostas refrente a terceira quetsao da prova protica de C 

// Aluno : Rafael Augusto               // RA: 22508717

//3. Elabore a função valor_absoluto que recebe um número qualquer e retorna o valor absoluto (módulo) correspondente.
//A função main lê o número, chama a função valor_absoluto passando o número lido e depois gera a tela de saída com o valor retornado pela função valor_absoluto.
//Lembrando que o valor absoluto de um número positivo é ele mesmo e o valor absoluto de um número negativo é ele multiplicado por -1.

#include <stdio.h>

// Função que calcula e retorna o valor absoluto (módulo)
float valor_absoluto(float numero) {
    if (numero < 0) {
        return numero * -1;
    }
    return numero;
}

int main() {
    float num, resultado;

    // Leitura do número
    printf("Digite um numero: ");
    scanf("%f", &num);

    // Chamada da função valor_absoluto
    resultado = valor_absoluto(num);

    // Exibição do resultado
    printf("O valor absoluto de %.2f eh %.2f\n", num, resultado);

    return 0;
}
