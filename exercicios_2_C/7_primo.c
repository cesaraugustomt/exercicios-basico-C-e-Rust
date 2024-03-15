/*7) Desenvolva um programa que leia um número inteiro e verifique se ele é primo.*/ 

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída.
#include <stdbool.h> // Inclui a biblioteca para usar o tipo de dado 'bool'.

// Função para verificar se um número é primo.
bool ehPrimo(int numero) {
    if (numero <= 1) { // Se o número for menor ou igual a 1, não é primo.
        return false;
    }
    for (int i = 2; i * i <= numero; i++) { // Loop para verificar se o número tem algum divisor além de 1 e ele mesmo.
        if (numero % i == 0) { // Se encontrar um divisor, não é primo.
            return false;
        }
    }
    return true; // Se não encontrou nenhum divisor, é primo.
}

int main() { // Função principal.
    int num; // Variável para armazenar o número fornecido pelo usuário.

    printf("Digite um número inteiro: "); // Solicita ao usuário que digite um número inteiro.
    scanf("%d", &num); // Lê e armazena o número fornecido pelo usuário.

    if (ehPrimo(num)) { // Verifica se o número é primo usando a função 'ehPrimo'.
        printf("%d é um número primo.\n", num); // Se for primo, imprime uma mensagem indicando isso.
    } else {
        printf("%d não é um número primo.\n", num); // Se não for primo, imprime uma mensagem indicando isso.
    }

    return 0; // Indica que o programa foi executado com sucesso.
}

/*
saída:
Digite um número inteiro: 3
3 é um número primo.
*/ 