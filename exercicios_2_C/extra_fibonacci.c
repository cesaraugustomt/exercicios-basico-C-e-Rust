/*
EXTRA:
1) Desenvolva uma função que receba um número inteiro como parâmetro e retorne a sequência 
de Fibonacci até aquele número. Imprima a sequência de Fibonnaci dentro da função.
*/ 

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída.

// Função para gerar a sequência de Fibonacci até um limite dado.
void fibonacci(int limite) {
    int num1 = 0, num2 = 1, proximo_termo = 0; // Variáveis para armazenar os termos da sequência.

    printf("Sequência de Fibonacci até %d:\n", limite); // Imprime uma mensagem indicando o limite da sequência.

    // Loop para gerar a sequência de Fibonacci até atingir ou ultrapassar o limite.
    while (proximo_termo <= limite) {
        printf("%d, ", proximo_termo); // Imprime o próximo termo da sequência.
        num1 = num2; // Atualiza o valor de num1 para o num2.
        num2 = proximo_termo; // Atualiza o valor de num2 para o valor de proximo_termo.
        proximo_termo = num1 + num2; // Calcula o próximo termo da sequência.
    }
    printf("\n"); // Imprime uma nova linha para formatar a saída.
}

int main() { // Função principal.
    int limite; // Variável para armazenar o limite da sequência de Fibonacci.

    printf("Digite um número inteiro para limite da sequência de Fibonacci: "); // Solicita ao usuário que digite o limite da sequência.
    scanf("%d", &limite); // Lê e armazena o limite fornecido pelo usuário.

    fibonacci(limite); // Chama a função 'fibonacci' para gerar a sequência de Fibonacci até o limite fornecido.

    return 0; // Indica que o programa foi executado com sucesso.
}


/*
Digite um número inteiro para limite da sequência de Fibonacci: 12
Sequência de Fibonacci até 12:
0, 1, 1, 2, 3, 5, 8, 
*/ 