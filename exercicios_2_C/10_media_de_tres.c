/*
10) Escreva um programa que calcule a média de três notas e informe se o aluno foi aprovado, 
reprovado ou de recuperação, considerando a média mínima para aprovação igual a 7, média
entre 5 e 6.99 igual a recuperação, e média menor que 5 igual a reprovação.
*/ 
#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída.

int main() { // Função principal.
    float nota1, nota2, nota3, media; // Variáveis para armazenar as notas e a média do aluno.

    printf("Digite as três notas do aluno: "); // Solicita ao usuário que digite as três notas do aluno.
    scanf("%f %f %f", &nota1, &nota2, &nota3); // Lê e armazena as três notas fornecidas pelo usuário.

    media = (nota1 + nota2 + nota3) / 3; // Calcula a média das notas.

    if (media >= 7.0) { // Verifica se a média é maior ou igual a 7.0.
        printf("Aluno aprovado!\n"); // Se for, imprime uma mensagem indicando que o aluno está aprovado.
    } else if (media >= 5.0 && media < 7.0) { // Verifica se a média está entre 5.0 e 7.0 
        printf("Aluno em recuperação.\n"); // Se estiver, imprime uma mensagem indicando que o aluno está em recuperação.
    } else { // Se não for nenhuma das condições acima, ou seja, se a média for menor que 5.0.
        printf("Aluno reprovado.\n"); // Imprime uma mensagem indicando que o aluno está reprovado.
    }

    return 0; // Indica que o programa foi executado com sucesso.
}

/*
saída:
Digite as três notas do aluno: 8
6
10
Aluno aprovado!
*/ 