#include <stdio.h>   // Inclui a biblioteca de entrada e saída padrão
#include <stdlib.h>  // Inclui a biblioteca de funções padrão

int main () {   // Função principal
  int i;   // Declaração de variável

  for (i = 3; i <= 100; i += 3)   // Loop de 3 até 100, incrementando de 3 em 3
    printf("%d\t", i);   // Exibe os números que são múltiplos de 3

  printf("\n");   // Imprime uma nova linha

  system("PAUSE");   // Pausa a execução do programa (comum em ambientes Windows)

  return 0;   // Retorna 0 para indicar sucesso
}



/*
retorno:

3       6       9       12      15      18      21      24      27      30      33      36      39      42      45   48       51      54      57      60      63      66      69      72      75      78      81      84      87      90   93       96      99
sh: 1: PAUSE: not found


*/ 