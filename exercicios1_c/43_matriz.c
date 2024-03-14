#include <stdio.h>    // Inclui a biblioteca de entrada e saída padrão
#include <stdlib.h>   // Inclui a biblioteca de funções padrão
#include <conio.h>    // Inclui a biblioteca para entrada de caracteres sem bloqueio
#include <time.h>     // Inclui a biblioteca para manipulação de tempo

int main () {    // Função principal
  #define n 4    // Define o tamanho da matriz como 4
  int A[n][n];    // Declaração da matriz A
  int i, j, sm = 0;    // Declaração de variáveis para índices e soma

  srand(time(NULL));    // Inicializa a semente do gerador de números aleatórios com o tempo atual

  // Preenche a matriz A com valores aleatórios entre 1 e 10
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      A[i][j] = 1 + rand() % 10;

  // Calcula a soma de todos os elementos da matriz A
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      sm = sm + A[i][j];

  system("clear");    // Limpa a tela do terminal

  printf("Matriz A\n");
  // Exibe os elementos da matriz A
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++)
      printf("%2d", A[i][j]);    // Exibe o valor da posição atual da matriz A
    printf("\n");    // Imprime uma nova linha após cada linha da matriz A
  }

  printf("\nA soma dos elementos da matriz é igual a %d", sm);    // Exibe a soma dos elementos da matriz A

  return 0;    // Retorna 0 para indicar sucesso
}


/*
saída:
 8 5 3 6
 1 1 5 2
 6 9 9 1

A soma dos elementos da matriz eh igual a 74

*/ 