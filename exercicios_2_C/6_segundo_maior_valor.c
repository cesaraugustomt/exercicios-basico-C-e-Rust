/*
6) Crie um programa que receba uma sequência de 5 números inteiros e retorne apenas o segundo 
maior valor presente na sequência
*/ 
#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída.

int main() { // Função principal.
    int numeros[5]; // Declaração de um array de inteiros para armazenar cinco números.
    int i, j, temp; // Variáveis de controle para loops e temporária para trocas.

    printf("Digite cinco números inteiros:\n"); // Solicita ao usuário que digite cinco números inteiros.
    for (i = 0; i < 5; i++) { // Loop para ler os cinco números.
        printf("Número %d: ", i + 1); // Solicita o i-ésimo número.
        scanf("%d", &numeros[i]); // Lê e armazena o i-ésimo número no array 'numeros'.
    }

    // Ordena os números em ordem crescente usando o algoritmo bubble sort.
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (numeros[j] > numeros[j + 1]) {
                // Troca os elementos de posição se estiverem fora de ordem.
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    printf("O segundo maior valor é: %d\n", numeros[3]); // Imprime o segundo maior número.

    return 0; // Indica que o programa foi executado com sucesso.
}

/*
saída:
Digite cinco números inteiros:
Número 1: 4
Número 2: 8
Número 3: 12
Número 4: 21
Número 5: 7
O segundo maior valor é: 12

*/ 