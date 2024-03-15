/*
14) Escreva uma função que calcule e retorne o fatorial de um número fornecido pelo usuário.
*/ 
#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída.

// Função para calcular o fatorial de um número inteiro.
int calcularFatorial(int numero) {
    if (numero == 0) { // Verifica se o número é igual a 0.
        return 1; // Se for, retorna 1 (definição do fatorial de 0).
    } else { // Caso contrário.
        int fatorial = 1; // Inicializa a variável para armazenar o fatorial como 1.

        // Loop para calcular o fatorial do número.
        for (int i = 1; i <= numero; i++) {
            fatorial *= i; // Multiplica o fatorial pela variável 'i'.
        }
        return fatorial; // Retorna o resultado do fatorial.
    }
}

int main() { // Função principal.
    int num, resultado; // Variáveis para armazenar o número fornecido pelo usuário e o resultado do cálculo.

    printf("Digite um número inteiro: "); // Solicita ao usuário que digite um número inteiro.
    scanf("%d", &num); // Lê e armazena o número fornecido pelo usuário.

    resultado = calcularFatorial(num); // Chama a função 'calcularFatorial' para calcular o fatorial do número fornecido.

    printf("O fatorial de %d é: %d\n", num, resultado); // Imprime o fatorial do número fornecido.

    return 0; // Indica que o programa foi executado com sucesso.
}

/*
saída:
Digite um número inteiro: 2
O fatorial de 2 é: 2
*/ 