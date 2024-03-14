#include <stdio.h>   // Inclui a biblioteca de entrada e saída padrão
#include <stdlib.h>  // Inclui a biblioteca de funções padrão

int main() {   // Função principal
  int i;   // Declaração de variável

  for(i=0; i < 20; i++)   // Loop de 0 a 19
    printf("%c", '*');   // Exibe o caractere '*' repetido 20 vezes

  printf("\n");   // Imprime uma nova linha

  system("PAUSE");    // Pausa a execução do programa

  return 0;    // Retorna 0 para indicar sucesso
}

/*
retorno: 
********************
sh: 1: PAUSE: not found
*/ 