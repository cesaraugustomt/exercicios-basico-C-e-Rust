/*4) Escreva um programa que leia um caractere do usuário e verifique se é uma vogal.
*/ 
#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída.

int main() { // Função principal.
    char caractere; // Declaração da variável para armazenar um caractere.

    printf("Digite um caractere: "); // Solicita ao usuário que digite um caractere.
    scanf(" %c", &caractere); // Lê o caractere fornecido pelo usuário e o armazena na variável 'caractere'.

    // Verifica se o caractere é uma vogal, tanto em minúsculo quanto em maiúsculo, e imprime uma mensagem correspondente.
    if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u' ||
        caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U') {
        printf("O caractere '%c' é uma vogal.\n", caractere); 
    } else { // Caso contrário, imprime uma mensagem informando que o caractere não é uma vogal.
        printf("O caractere '%c' não é uma vogal.\n", caractere); 
    }

    return 0; // Indica que o programa foi executado com sucesso.
}
/*
saída:
Digite um caractere: v
O caractere 'v' não é uma vogal.
*/ 