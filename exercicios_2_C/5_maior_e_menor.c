/*
5) Crie um programa que leia uma sequência de 5 números inteiros e imprima o maior e o menor 
valor.
*/ 
#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída.

int main() { // Função principal.
    int numeros[5]; // Declaração de um array de inteiros para armazenar cinco números.
    int i; // Variável de controle para loops.
    int maior, menor; // Variáveis para armazenar o maior e o menor número.

    printf("Digite cinco números inteiros:\n"); // Solicita ao usuário que digite cinco números inteiros.
    for (i = 0; i < 5; i++) { // Loop para ler os cinco números.
        printf("Número %d: ", i + 1); // Solicita o i-ésimo número.
        scanf("%d", &numeros[i]); // Lê e armazena o i-ésimo número no array 'numeros'.
    }

    maior = menor = numeros[0]; // Inicializa as variáveis 'maior' e 'menor' com o primeiro número do array.

    // Loop para encontrar o maior e o menor número no array 'numeros'.
    for (i = 1; i < 5; i++) {
        if (numeros[i] > maior) { // Verifica se o número atual é maior que o armazenado em 'maior'.
            maior = numeros[i]; // Atualiza 'maior' se necessário.
        }
        if (numeros[i] < menor) { // Verifica se o número atual é menor que o armazenado em 'menor'.
            menor = numeros[i]; // Atualiza 'menor' se necessário.
        }
    }

    printf("O maior valor é: %d\n", maior); // Imprime o maior número.
    printf("O menor valor é: %d\n", menor); // Imprime o menor número.

    return 0; // Indica que o programa foi executado com sucesso.
}


/*
saída:
Digite cinco números inteiros:
Número 1: 2
Número 2: 12
Número 3: 8
Número 4: 4
Número 5: 21
O maior valor é: 21
O menor valor é: 2
*/ 