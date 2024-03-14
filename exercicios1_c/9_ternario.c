#include <stdio.h>  // Inclui a biblioteca de entrada e saída padrão

int main(void) {  // Função principal
  int numero, x;  // Declaração de variáveis

  scanf("%d", &numero);  // Lê um número inteiro

  x = (numero > 10) ? 1 : 0;  // Verifica se o número é maior que 10

  printf("%d", x);  // Exibe o resultado

  return 0;  // Retorna 0 para indicar sucesso
}
/*
input: 12
retorno: 1
*/ 