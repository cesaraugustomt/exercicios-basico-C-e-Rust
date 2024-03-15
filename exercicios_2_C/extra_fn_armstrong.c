/*
EXTRA:
2) Desenvolva uma função que receba um número inteiro e verifique se é um número de 
Armstrong, ou seja, a soma dos cubos de seus dígitos é igual ao próprio número. Imprima se é 
ou não um número de Armstrong fora da função
*/ 

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída.
#include <stdbool.h> // Inclui a biblioteca para usar o tipo de dado 'bool'.

// Função para verificar se um número é um número de Armstrong.
bool ehNumeroArmstrong(int numero) {
    int numero_original = numero; // Armazena o número original para comparar com o resultado.
    int soma_cubos = 0; // Variável para armazenar a soma dos cubos dos dígitos.

    // Loop para calcular a soma dos cubos dos dígitos do número.
    while (numero > 0) {
        int digito = numero % 10; // Obtém o último dígito do número.
        soma_cubos += digito * digito * digito; // Calcula o cubo do dígito e adiciona à soma.
        numero /= 10; // Remove o último dígito do número.
    }

    return soma_cubos == numero_original; // Retorna verdadeiro se a soma dos cubos dos dígitos for igual ao número original.
}

int main() { // Função principal.
    int num; // Variável para armazenar o número fornecido pelo usuário.

    printf("Digite um número inteiro: "); // Solicita ao usuário que digite um número inteiro.
    scanf("%d", &num); // Lê e armazena o número fornecido pelo usuário.

    if (ehNumeroArmstrong(num)) { // Verifica se o número é um número de Armstrong usando a função 'ehNumeroArmstrong'.
        printf("%d é um número de Armstrong.\n", num); // Se for um número de Armstrong, imprime uma mensagem indicando isso.
    } else {
        printf("%d não é um número de Armstrong.\n", num); // Se não for um número de Armstrong, imprime uma mensagem indicando isso.
    }

    return 0; // Indica que o programa foi executado com sucesso.
}

/*
Digite um número inteiro: 8
8 não é um número de Armstrong.
*/ 