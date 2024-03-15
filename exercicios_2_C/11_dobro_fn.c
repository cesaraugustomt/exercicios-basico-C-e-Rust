/*
11) Escreva um programa que leia um número inteiro do usuário e retorne o seu dobro utilizando 
uma função.
*/ 

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída.

// Função para calcular o dobro de um número inteiro.
int calcularDobro(int numero) {
    return numero * 2; // Retorna o dobro do número fornecido.
}

int main() { // Função principal.
    int num, resultado; // Variáveis para armazenar o número fornecido pelo usuário e o resultado do cálculo.

    printf("Digite um número inteiro: "); // Solicita ao usuário que digite um número inteiro.
    scanf("%d", &num); // Lê e armazena o número fornecido pelo usuário.

    resultado = calcularDobro(num); // Chama a função 'calcularDobro' para calcular o dobro do número fornecido.

    printf("O dobro de %d é: %d\n", num, resultado); // Imprime o dobro do número fornecido.

    return 0; // Indica que o programa foi executado com sucesso.
}


/*
saída:
Digite um número inteiro: 8
O dobro de 8 é: 16
*/ 