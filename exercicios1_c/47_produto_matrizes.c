#include <stdio.h>    // Inclui a biblioteca de entrada e saída padrão
#include <stdlib.h>   // Inclui a biblioteca de funções padrão
#include <time.h>     // Inclui a biblioteca para manipulação de tempo

int main() {    // Função principal
    #define n 3    // Define o tamanho das matrizes como 3
    int i, j, k, a[n][n], b[n][n], ab[n][n];    // Declaração de variáveis e matrizes

    srand(time(NULL));    // Inicializa o gerador de números aleatórios em tempo atual

    // Preenche as matrizes 'a' e 'b' com valores aleatórios entre 1 e 10
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            a[i][j] = 1 + rand() % 10;
            b[i][j] = 1 + rand() % 10;
        }
    }

    // Calcula a matriz resultante 'ab' multiplicando as matrizes 'a' e 'b'
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            int sm = 0;    // Inicializa a variável de soma como 0
            for (k = 0; k < n; k++) {
                sm += a[i][k] * b[k][j];    // Realiza a multiplicação de linha por coluna e acumula na variável de soma
            }
            ab[i][j] = sm;    // Atribui o resultado da multiplicação à matriz resultante 'ab'
        }
    }

    printf("Matriz resultante 'ab':\n");
    // Exibe os elementos da matriz resultante 'ab'
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", ab[i][j]);    // Exibe o valor da posição atual da matriz 'ab'
        }
        printf("\n");    // Imprime uma nova linha após cada linha da matriz 'ab'
    }

    return 0;    // Retorna 0 para indicar sucesso
}


/*
saída:

Matriz resultante 'ab':
79 79 96 
166 240 232 
92 160 144 


*/ 