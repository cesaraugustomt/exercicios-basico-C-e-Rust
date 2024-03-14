#include <stdio.h>    // Inclui a biblioteca de entrada e saída padrão
#include <stdlib.h>   // Inclui a biblioteca de funções padrão
#include <time.h>     // Inclui a biblioteca para manipulação de tempo


// MATRIZ TRANSPOSTA

int main() {    // Função principal
    #define n 3    // Define o tamanho das matrizes como 3
    int i, j, a[n][n], at[n][n];    // Declaração de variáveis e matrizes

    srand(time(NULL));    // Inicializa a semente do gerador de números aleatórios com o tempo atual

    // Preenche a matriz 'a' com valores aleatórios entre 1 e 10
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            a[i][j] = 1 + rand() % 10;
        }
    }

    // Calcula a matriz transposta 'at' de 'a'
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            at[j][i] = a[i][j];
        }
    }

    printf("Matriz original 'a':\n");
    // Exibe a matriz original 'a'
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz transposta 'at':\n");
    // Exibe a matriz transposta 'at'
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", at[i][j]);
        }
        printf("\n");
    }

    return 0;    // Retorna 0 para indicar sucesso
}


/*
saída:
Matriz original 'a':
2 10 7 
4 6 5 
3 5 7 

Matriz transposta 'at':
2 4 3 
10 6 5 
7 5 7 

*/ 