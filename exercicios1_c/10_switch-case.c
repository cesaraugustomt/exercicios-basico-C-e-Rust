#include <stdio.h>  // Inclui a biblioteca de entrada e saída padrão

int main(void) {  // Função principal
  int roll = 3;  // Declara e inicializa uma variável roll

  switch (roll) {  // Inicia a estrutura de seleção switch
    case 1:  // Caso roll seja igual a 1
      printf("I am Pankaj");  // Exibe uma mensagem
      break;  // Sai do switch
    case 2:  // Caso roll seja igual a 2
      printf("I am Nikhil");  // Exibe uma mensagem
      break;  // Sai do switch
    case 3:  // Caso roll seja igual a 3
      printf("I am John");  // Exibe uma mensagem
      break;  // Sai do switch
    default:  // Caso nenhum dos casos anteriores seja verdadeiro
      printf("No student found");  // Exibe uma mensagem padrão
      break;  // Sai do switch
  } 

  return 0;  // Retorna 0 para indicar sucesso
}

/*
retorno:
I am John
*/ 