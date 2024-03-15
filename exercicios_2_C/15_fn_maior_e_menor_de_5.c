/*
15) Faça uma função que receba uma sequência 5 de números inteiros como parâmetro e retorne o 
maior e o menor valor.
*/ 
#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída.

// Função para encontrar o maior e o menor valor em um array de inteiros.
void encontrarMaiorMenor(int numeros[], int *maior, int *menor) {
    *maior = *menor = numeros[0]; // Inicializa as variáveis 'maior' e 'menor' com o primeiro elemento do array.

    // Loop para percorrer os elementos do array e encontrar o maior e o menor valor.
    for (int i = 1; i < 5; i++) {
        if (numeros[i] > *maior) { // Se o elemento atual for maior que o maior valor encontrado até agora.
            *maior = numeros[i]; // Atualiza o valor do maior.
        } else if (numeros[i] < *menor) { // Se o elemento atual for menor que o menor valor encontrado até agora.
            *menor = numeros[i]; // Atualiza o valor do menor.
        }
    }
}

int main() { // Função principal.
    int numeros[5]; // Declara um array para armazenar cinco números inteiros.
    int maior, menor; // Variáveis para armazenar o maior e o menor valor.

    printf("Digite cinco números inteiros:\n"); // Solicita ao usuário que digite cinco números inteiros.
    for (int i = 0; i < 5; i++) { // Loop para ler os cinco números fornecidos pelo usuário.
        printf("Número %d: ", i + 1); // Solicita o i-ésimo número.
        scanf("%d", &numeros[i]); // Lê e armazena o i-ésimo número no array 'numeros'.
    }

    encontrarMaiorMenor(numeros, &maior, &menor); // Chama a função 'encontrarMaiorMenor' para encontrar o maior e o menor valor.

    printf("O maior valor é: %d\n", maior); // Imprime o maior valor encontrado.
    printf("O menor valor é: %d\n", menor); // Imprime o menor valor encontrado.

    return 0; // Indica que o programa foi executado com sucesso.
}


/*
saída:
Digite cinco números inteiros:
Número 1: 4
Número 2: 8
Número 3: 6
Número 4: 12
Número 5: 24
O maior valor é: 24
O menor valor é: 4

*/ 