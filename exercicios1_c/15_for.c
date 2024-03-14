#include <stdio.h>   // Inclui a biblioteca de entrada e saída padrão
#include <stdlib.h>  // Inclui a biblioteca de funções padrão

int main () {   // Função principal
  int i, j;   // Declaração de variáveis

  for (i = 0, j = i; (i + j) < 100; i++, j++)   // Loop enquanto a soma de i e j for menor que 100
    printf("%d", i + j);   // Exibe a soma de i e j

  printf("\n");   // Imprime uma nova linha

  system("PAUSE");   // Pausa a execução do programa (comum em ambientes Windows)

  return 0;   // Retorna 0 para indicar sucesso
}


/*
retorno:
02468101214161820222426283032343638404244464850525456586062646668707274767880828486889092949698
sh: 1: PAUSE: not found

*/ 