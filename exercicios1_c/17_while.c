#include <stdio.h> // Inclui a biblioteca de entrada e saída padrão
#include <stdlib.h> // Inclui a biblioteca de funções padrão
#include <conio.h> // Inclui a biblioteca para entrada de caracteres sem bloqueio

int main() { // Função principal
  unsigned char ch; // Declaração de variável

  while ((ch = getch()) != 'X') // Loop enquanto o caractere digitado for diferente de 'X'
    printf("%c", ch + 1);  // Exibe o caractere seguinte ao caractere digitado

  printf("\n"); // Imprime uma nova linha

  system("PAUSE"); // Pausa a execução do programa (comum em ambientes Windows)

  return 0; // Retorna 0 para indicar sucesso
}
