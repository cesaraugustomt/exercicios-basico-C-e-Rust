/*2) Crie um programa que leia um número inteiro do usuário e imprima o número digitado e o seu 
dobro.*/ 

#include <stdio.h> // Biblioteca padrão.

int main() { // Função principal.
    int numero; // Variável inteira.

    printf("Digite um número inteiro: "); // Solicita um número.
    scanf("%d", &numero); // Lê e armazena.

    printf("Número digitado: %d\n", numero); // Imprime o número.
    printf("Dobro: %d\n", numero * 2); // Calcula e imprime o dobro.

    return 0; // Indica sucesso.
}


/*
saída:
Digite um número inteiro: 4
Número digitado: 4
Dobro: 8
*/ 