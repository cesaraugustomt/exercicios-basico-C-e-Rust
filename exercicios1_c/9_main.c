#include <stdio.h>  // Inclui a biblioteca de entrada e saída padrão
#include <stdlib.h> // Inclui a biblioteca de funções padrão

int main() {  // Função principal
  int x; // Declaração de variável

  scanf("%d", &x);  // Lê um número inteiro

  if (x > 10) {  // Condição: se x for maior que 10
    printf("O numero e maior que 10");  // Exibe mensagem
  } else {  // Senão
    printf("O numero e menor que 10");  // Exibe mensagem
  }

  return 0;  // Retorna 0 para indicar sucesso
}


/*
input: 38
retorno: o numero e maior que 10

*/ 