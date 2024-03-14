#include <stdio.h>   // Inclui a biblioteca de entrada e saída padrão

int main () {   // Função principal
  int count = 0;   // Declaração e inicialização da variável count

  do {   // Inicia um loop do-while
    printf("%d\n", count);   // Exibe o valor de count seguido de uma nova linha
    ++count;   // Incrementa o valor de count
  } while (count < 10);   // Continua o loop enquanto count for menor que 10

  return 0;   // Retorna 0 para indicar sucesso
}


/*
saída:
6
7
8
9

*/ 