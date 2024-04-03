#include<stdio.h> // Biblioteca de entrada/saída padrão.
#include<stdlib.h> // Biblioteca padrão de funções.

#define MAX 10 // Define o tamanho máximo da pilha.

struct pilha{ // Declaração da estrutura da pilha.
  int vetor[MAX]; // Vetor para armazenar os elementos da pilha.
  int topo; // Índice do topo da pilha.
};

void empilhar(int valor, struct pilha *); // Função para empilhar elementos.
int consultarTopo(struct pilha ); // Função para consultar o topo da pilha.
int verificarPilhaCheia(struct pilha ); // Função para verificar se a pilha está cheia.
int verificarPilhaVazia(struct pilha ); // Função para verificar se a pilha está vazia.
int desempilhar(struct pilha *); // Função para desempilhar elementos.
int consultarAltura(struct pilha ); // Função para consultar a altura da pilha.

int main() // Função principal.
{
  struct pilha Rayovac; // Cria uma variável do tipo pilha.
  Rayovac.topo = -1; // Inicializa o topo da pilha.

  int op, valor; // Declaração de variáveis para operações de pilha.
  do // Loop do menu.
  {
    system("cls"); // Limpa a tela.
    printf("\n\n >> PILHA << "); // Mostra o título do programa.
    printf("\n\t 1 -> Inserir"); // Opção para inserir elemento.
    printf("\n\t 2 -> TOPO"); // Opção para consultar o topo.
    printf("\n\t 3 -> Remover"); // Opção para remover elemento.
    printf("\n\t 4 -> Altura"); // Opção para consultar a altura.
    printf("\n\t 0 -> sair"); // Opção para sair do programa.
    printf("\n\t Digite:  "); // Solicitação de entrada.
    scanf("%d", &op); // Leitura da escolha do usuário.
    switch(op) // Verifica a escolha do usuário.
    {
      case 1: // Caso de inserção.
        if(verificarPilhaCheia(Rayovac)) // Verifica se a pilha está cheia.
        {
          printf("\n\n PILHA CHEIA !!!  \n\n"); // Mensagem de pilha cheia.
        }
        else // Se a pilha não estiver cheia.
        {
          printf("\n\n Digite um valor inteiro a ser armazenado na pilha: "); // Solicitação de valor.
          scanf("%d", &valor); // Leitura do valor a ser inserido.
          empilhar(valor, &Rayovac); // Chama a função para empilhar o valor.
        }
        break; // Sai do switch.
      case 2: // Caso de consulta ao topo.
        printf("\n>> o valor do topo da pilha eh: %d \n", consultarTopo(Rayovac)); // Mostra o valor no topo.
        system("pause"); // Pausa a execução.
        break; // Sai do switch.
      case 3: // Caso de remoção.
        if(verificarPilhaVazia(Rayovac)) // Verifica se a pilha está vazia.
        {
          printf("\n\n PILHA VAZIA !!! \n\n"); // Mensagem de pilha vazia.
        }
        else // Se a pilha não estiver vazia.
        {
          printf("\n>> Valor %d removido da pilha \n", desempilhar(&Rayovac)); // Mostra o valor removido.
        }
        system("pause"); // Pausa a execução.
        break; // Sai do switch.
      case 4: // Caso de consulta à altura.
        printf("\n>> A altura da pilha eh: %d", consultarAltura(Rayovac)); // Mostra a altura da pilha.
        system("pause"); // Pausa a execução.
        break; // Sai do switch.
      case 0: // Caso de sair do programa.
        printf("\n\n ... saindo ... \n\n"); // Mensagem de saída.
        break; // Sai do switch.
      default: // Caso de escolha inválida.
        printf("\n\n .<< Digite uma opcao valida >> \n\n"); // Mensagem de opção inválida.
        system("pause"); // Pausa a execução.
    }
  }
  while(op != 0); // Continua o loop até o usuário escolher sair.

  return 0; // Retorna 0 para indicar sucesso.
};

void empilhar(int valor, struct pilha *PILHA) { // Função para empilhar elementos.
  PILHA->topo++; // Incrementa o topo da pilha.
  PILHA->vetor[PILHA->topo] = valor; // Insere o valor na pilha.
};

int consultarTopo(struct pilha PILHA) { // Função para consultar o topo da pilha.
  return PILHA.vetor[PILHA.topo]; // Retorna o elemento no topo da pilha.
};

int verificarPilhaCheia(struct pilha PILHA) { // Função para verificar se a pilha está cheia.
  if (PILHA.topo == MAX - 1) // Verifica se o topo está no limite.
    return 1; // Retorna verdadeiro se estiver cheia.
  else
    return 0; // Retorna falso se não estiver cheia.
};

int verificarPilhaVazia(struct pilha PILHA) { // Função para verificar se a pilha está vazia.
  if (PILHA.topo == - 1) // Verifica se o topo indica que a pilha está vazia.
    return 1; // Retorna verdadeiro se estiver vazia.
  else
    return 0; // Retorna falso se não estiver vazia.
};

int desempilhar(struct pilha *PILHA) { // Função para desempilhar elementos.
  int aux = PILHA->vetor[PILHA->topo]; // Armazena temporariamente o valor no topo.
  PILHA->topo--; // Decrementa o topo.
  return aux; // Retorna o valor removido.
};

int consultarAltura(struct pilha PILHA) { // Função para consultar a altura da pilha.
  return PILHA.topo + 1; // Retorna a altura da pilha.
};
