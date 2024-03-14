#include <stdio.h>    // Inclui a biblioteca de entrada e saída padrão
#include <stdlib.h>   // Inclui a biblioteca de funções padrão
#include <conio.h>    // Inclui a biblioteca para entrada de caracteres sem bloqueio

// MATRIZ BIDIMENSIONAL 

int main () {    // Função principal
  #define n 3    // Define o tamanho da matriz como 3
  int matriz[n][n], i, j;    // Declaração de variáveis

  for (i = 0; i < n; i++)   // Loop para iterar pelas linhas da matriz
    for (j = 0; j < n; j++) {   // Loop para iterar pelas colunas da matriz
      printf("Informe o valor da linha %d, coluna %d.\n", i, j);   // Exibe uma mensagem solicitando um valor para a posição atual
      scanf("%d", &matriz[i][j]);   // Lê o valor inserido pelo usuário e o atribui à posição correspondente da matriz
    }

  system("clear");   // Limpa a tela do terminal

  for (i = 0; i < n; i++) {   // Loop para iterar pelas linhas da matriz
    for (j = 0; j < n; j++)   // Loop para iterar pelas colunas da matriz
      printf("%4d ", matriz[i][j]);   // Exibe o valor da posição atual da matriz formatado com 4 espaços de largura
    printf("\n");   // Imprime uma nova linha após cada linha da matriz
  }

  return 0;   // Retorna 0 para indicar sucesso
}


/*

saída matricial após informar os números:
  4    2    6 
   1   14    8 
   2    8    2 


*/ 