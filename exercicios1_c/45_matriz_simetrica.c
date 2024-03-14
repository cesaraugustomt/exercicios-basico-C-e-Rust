#include <stdio.h>    // Inclui a biblioteca de entrada e saída padrão
#include <stdlib.h>   // Inclui a biblioteca de funções padrão
#include <time.h>     // Inclui a biblioteca para manipulação de tempo

// MATRIZ SIMÉTRICA

int main() {    // Função principal
    #define n 3    // Define o tamanho da matriz como 3
    int i, j, ehsimetrica, a[n][n];    // Declaração de variáveis e matriz

    srand(time(NULL));    // Inicializa o gerador de números aleatórios em tempo atual

    // Preenche a matriz 'a' com valores aleatórios entre 1 e 10
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            a[i][j] = 1 + rand() % 10;
        }
    }

    ehsimetrica = 1;    // Inicializa a variável de controle como 1 (simétrica por padrão)

    // Verifica se a matriz 'a' é simétrica
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            if (a[i][j] != a[j][i]) {    // Se o elemento na posição (i, j) for diferente do elemento na posição (j, i)
                ehsimetrica = 0;    // Atualiza a variável de controle para 0 (não simétrica)
                break;    // Sai do loop interno
            }
        }
        if (ehsimetrica == 0) {    // Se a variável de controle for 0
            break;    // Sai do loop externo
        }
    }

    // Exibe o resultado da verificação
    if (ehsimetrica == 1) {
        printf("A matriz 'a' é simétrica.\n");
    } else {
        printf("A matriz 'a' não é simétrica.\n");
    }

    return 0;    // Retorna 0 para indicar sucesso
}



/*
saída:
A matriz 'a' nao e simetrica.

*/ 