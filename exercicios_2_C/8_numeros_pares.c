/*
8) Escreva um programa que solicite ao usuário um número inteiro positivo e exiba na tela todos 
os números pares de 0 até o número digitado. Imprima em tela o número digitado e a soma.
*/ 
#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída.

int main() { // Função principal.
    int numero, soma = 0; // Variáveis para armazenar o número fornecido pelo usuário e a soma dos números pares.

    printf("Digite um número inteiro positivo: "); // Solicita ao usuário que digite um número inteiro positivo.
    scanf("%d", &numero); // Lê e armazena o número fornecido pelo usuário.

    if (numero < 0) { // Verifica se o número é negativo.
        printf("O número digitado não é positivo.\n"); // Se for negativo, imprime uma mensagem e encerra o programa.
        return 1; // Retorna 1 para indicar um erro.
    }

    printf("Números pares de 0 até %d:\n", numero); // Imprime uma mensagem indicando os números pares até o número fornecido.
    for (int i = 0; i <= numero; i += 2) { // Loop para encontrar e somar os números pares.
        printf("%d ", i); // Imprime o número par.
        soma += i; // Soma o número par à variável 'soma'.
    }

    printf("\nNúmero digitado: %d\n", numero); // Imprime o número fornecido pelo usuário.
    printf("Soma: %d\n", soma); // Imprime a soma dos números pares.

    return 0; // Indica que o programa foi executado com sucesso.
}


/*
saída:
Digite um número inteiro positivo: 6
Números pares de 0 até 6:
0 2 4 6 
Número digitado: 6
Soma: 12
*/ 