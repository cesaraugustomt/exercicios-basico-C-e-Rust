/*
13) Desenvolva uma função que receba um caractere como parâmetro e verifique se é uma vogal.
*/ 

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída.
#include <stdbool.h> // Inclui a biblioteca para usar o tipo de dado 'bool'.
#include <ctype.h> // Inclui a biblioteca para usar a função 'tolower'.

// Função para verificar se um caractere é uma vogal.
bool ehVogal(char caractere) {
    caractere = tolower(caractere); // Converte o caractere para minúsculo.

    if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
        return true; // Se o caractere for uma vogal, retorna verdadeiro.
    } else {
        return false; // Se não for uma vogal, retorna falso.
    }
}

int main() { // Função principal.
    char caractere; // Variável para armazenar o caractere fornecido pelo usuário.

    printf("Digite um caractere: "); // Solicita ao usuário que digite um caractere.
    scanf(" %c", &caractere); // Lê e armazena o caractere fornecido pelo usuário.

    if (ehVogal(caractere)) { // Verifica se o caractere é uma vogal usando a função 'ehVogal'.
        printf("O caractere '%c' é uma vogal.\n", caractere); // Se for uma vogal, imprime uma mensagem indicando isso.
    } else {
        printf("O caractere '%c' não é uma vogal.\n", caractere); // Se não for uma vogal, imprime uma mensagem indicando isso.
    }

    return 0; // Indica que o programa foi executado com sucesso.
}


/*
saída:
Digite um caractere: s
O caractere 's' não é uma vogal.
*/ 