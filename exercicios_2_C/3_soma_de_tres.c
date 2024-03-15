/*3) Desenvolva um programa que leia três números inteiros do usuário e imprima os três valores e 
a soma deles.*/ 
#include <stdio.h> // Biblioteca padrão.

int main() { // Função principal.
    int num1, num2, num3, soma; // Variáveis.

    printf("Digite três números inteiros: "); // Solicita três números.
    scanf("%d %d %d", &num1, &num2, &num3); // Lê e armazena.

    soma = num1 + num2 + num3; // Calcula a soma.

    printf("Número 1: %d\n", num1); // Imprime o número 1.
    printf("Número 2: %d\n", num2); // Imprime o número 2.
    printf("Número 3: %d\n", num3); // Imprime o número 3.
    printf("Soma dos três números: %d\n", soma); // Imprime a soma.

    return 0; // Indica sucesso.
}

/*
saída:
Digite três números inteiros: 4
6
8
Número 1: 4
Número 2: 6
Número 3: 8
Soma dos três números: 18

*/ 