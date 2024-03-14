#include <stdio.h>   // Inclui a biblioteca de entrada e saída padrão

int main() {   // Função principal
    int num, i;   // Declaração de variáveis
    
    printf("Enter a number: ");   // Exibe uma mensagem solicitando um número
    scanf("%d", &num);   // Lê o número digitado pelo usuário
    
    i = 0;   // Inicializa a variável i com 0
    do {   // Inicia um loop do-while
        i++;   // Incrementa o valor de i
        printf("%d\n", i);   // Exibe o valor de i seguido de uma nova linha
    } while (num >= i);   // Continua o loop enquanto o número digitado for maior ou igual a i
    
    return 0;   // Retorna 0 para indicar sucesso
}



/*
input: 6
saída:
Enter a number: 6
1
2
3
4
5
6
7

*/ 