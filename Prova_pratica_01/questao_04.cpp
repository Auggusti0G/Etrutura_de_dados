// Respostas refrente a quarta questão quetsao da prova protica de C 

// Aluno : Rafael Augusto               // RA: 22508717

//4. Projete a função potencia que recebe dois valores inteiros, a base e o expoente, e retorna o valor da potência correspondente. 
//A função main lê o valor da a base e do expoente, chama a função potencia passando os dois argumentos (os valores lidos) e mostra o valor
//retornado pela função potencia. Considere que a base pode ser um valor inteiro positivo, nulo ou negativo e o expoente, um inteiro positivo ou nulo.
//Definição: potência é a base multiplicada por ela mesma expoente vezes.

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
