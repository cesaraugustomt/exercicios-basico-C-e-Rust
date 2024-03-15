/*
9) Escreva um programa que solicite ao usuário um número inteiro positivo e calcule a soma de 
todos os números ímpares de 1 até o número digitado. Imprima em tela o número digitado e a 
soma.
*/ 
#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída.

int main() { // Função principal.
    int numero, soma = 0; // Variáveis para armazenar o número fornecido pelo usuário e a soma dos números ímpares.

    printf("Digite um número inteiro positivo: "); // Solicita ao usuário que digite um número inteiro positivo.
    scanf("%d", &numero); // Lê e armazena o número fornecido pelo usuário.

    if (numero < 1) { // Verifica se o número é menor que 1.
        printf("O número digitado não é positivo.\n"); // Se for menor que 1, imprime uma mensagem e encerra o programa.
        return 1; // Retorna 1 para indicar um erro.
    }

    for (int i = 1; i <= numero; i += 2) { // Loop para encontrar e somar os números ímpares.
        soma += i; // Soma o número ímpar à variável 'soma'.
    } 

    printf("Número digitado: %d\n", numero); // Imprime o número fornecido pelo usuário.
    printf("Soma dos números ímpares de 1 até %d: %d\n", numero, soma); // Imprime a soma dos números ímpares.

    return 0; // Indica que o programa foi executado com sucesso.
}


/*
saída:
Digite um número inteiro positivo: 8
Número digitado: 8
Soma dos n�umeros ímpares de 1 até 8: 16
*/ 