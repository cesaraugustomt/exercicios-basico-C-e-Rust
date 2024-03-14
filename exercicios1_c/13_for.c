#include <stdio.h>   // Inclui a biblioteca de entrada e saída padrão
#include <stdlib.h>  // Inclui a biblioteca de funções padrão

int main () {   // Função principal
  int i;   // Declaração de variável

  for (i = 9; i > 0; i--)   // Loop de 9 a 1
    printf("\n%4d x 6 %4d", i, i * 6);   // Exibe a tabuada do 6 para os valores de i de 9 a 1

  printf("\n");   // Imprime uma nova linha

  system("PAUSE");   // Pausa a execução do programa (comum em ambientes Windows)

  return 0;   // Retorna 0 para indicar sucesso
}

/*
retorno:

   9 x 6   54
   8 x 6   48
   7 x 6   42
   6 x 6   36
   5 x 6   30
   4 x 6   24
   3 x 6   18
   2 x 6   12
   1 x 6    6
sh: 1: PAUSE: not found


*/ 