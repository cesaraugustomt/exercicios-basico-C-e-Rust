/*
12) Crie uma função que receba três números inteiros como parâmetros e retorne a soma deles.
Imprima a soma fora da função.
*/ 
#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída.

// Função para calcular a soma de três números inteiros.
int calcularSoma(int num1, int num2, int num3) {
    return num1 + num2 + num3; // Retorna a soma dos três números fornecidos.
}

int main() { // Função principal.
    int num1, num2, num3, soma; // Variáveis para armazenar os três números fornecidos pelo usuário e a soma.

    printf("Digite três números inteiros: "); // Solicita ao usuário que digite três números inteiros.
    scanf("%d %d %d", &num1, &num2, &num3); // Lê e armazena os três números fornecidos pelo usuário.

    soma = calcularSoma(num1, num2, num3); // Chama a função 'calcularSoma' para calcular a soma dos três números.

    printf("A soma dos três números é: %d\n", soma); // Imprime a soma dos três números fornecidos.

    return 0; // Indica que o programa foi executado com sucesso.
}


/*
saída:
Digite três números inteiros: 4
6
8
A soma dos três números é: 18
*/ 