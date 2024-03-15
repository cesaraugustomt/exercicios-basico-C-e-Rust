/*
17) Escreva uma função que receba uma string como parâmetro e retorne a quantidade de vogais 
presentes nela.
*/ 

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída.
#include <stdbool.h> // Inclui a biblioteca para usar o tipo de dado 'bool'.
#include <ctype.h> // Inclui a biblioteca para usar a função 'tolower'.

// Função para verificar se um caractere é uma vogal.
bool ehVogal(char caractere) {
    caractere = tolower(caractere); // Converte o caractere para minúsculo.

    return (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u');
}

// Função para contar o número de vogais em uma string.
int contarVogais(char *str) {
    int vogais = 0; // Inicializa a variável para contar o número de vogais.

    for (int i = 0; str[i] != '\0'; i++) { // Loop para percorrer os caracteres da string.
        if (ehVogal(str[i])) { // Verifica se o caractere atual é uma vogal usando a função 'ehVogal'.
            vogais++; // Se for uma vogal, incrementa o contador de vogais.
        }
    }
    return vogais; // Retorna o número de vogais na string.
}

int main() { // Função principal.
    char str[100]; // Declara um array para armazenar a string fornecida pelo usuário.

    printf("Digite uma string: "); // Solicita ao usuário que digite uma string.
    fgets(str, sizeof(str), stdin); // Lê a string fornecida pelo usuário.

    str[strcspn(str, "\n")] = '\0'; // Remove o caractere de nova linha da string fornecida pelo fgets.

    int num_vogais = contarVogais(str); // Chama a função 'contarVogais' para contar o número de vogais na string.

    printf("A quantidade de vogais na string é: %d\n", num_vogais); // Imprime o número de vogais na string.

    return 0; // Indica que o programa foi executado com sucesso.
}


/*
saída:
Digite uma string: copo
A quantidade de vogais na string é: 2
*/ 