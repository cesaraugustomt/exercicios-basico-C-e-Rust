#include<stdio.h> // Biblioteca de entrada/saída padrão.
#include<stdlib.h> // Biblioteca padrão de funções.
#include<iostream> // Biblioteca de entrada/saída de C++.

#define MAX 5 // Define o tamanho máximo da fila.

typedef struct fila // Definição da estrutura da fila.
{
  int vetor[MAX]; // Vetor para armazenar os elementos da fila.
  int max; // Capacidade máxima da fila.
  int inicio; // Índice do início da fila.
  int qtdElementos; // Quantidade de elementos na fila.
} FILA; // Nome da estrutura.

void enfileirar(int aux, FILA*); // Função para enfileirar elementos.
int consultarProximo(FILA); // Função para consultar o próximo elemento da fila.
int tamanhoFila(FILA); // Função para verificar o tamanho da fila.
int desenfileirar(FILA*); // Função para desenfileirar elementos.

int main() // Função principal.
{
   setLocale(LC_ALL, "ptb"); // Configura localidade para português.

  FILA filaDoPao; // Cria uma variável do tipo fila.
  filaDoPao.max = MAX; // Define a capacidade máxima da fila.
  filaDoPao.inicio = 0; // Inicializa o índice do início da fila.
  filaDoPao.qtdElementos = 0; // Inicializa a quantidade de elementos na fila.

  int op, valor; // Declaração de variáveis para operações de fila.
  do // Loop do menu.
  {
    system("cls"); // Limpa a tela.
    printf("\n\n >> FILA << "); // Mostra o título do programa.
    printf("\n\t 1 -> Inserir"); // Opção para inserir elemento.
    printf("\n\t 2 -> Consultar"); // Opção para consultar o próximo elemento.
    printf("\n\t 3 -> Remover"); // Opção para remover elemento.
    printf("\n\t 4 -> Tamanho"); // Opção para consultar o tamanho da fila.
    printf("\n\t 0 -> sair"); // Opção para sair do programa.
    printf("\n\t Digite:  "); // Solicitação de entrada.
    scanf("%d", &op); // Leitura da escolha do usuário.
    switch(op) // Verifica a escolha do usuário.
    {
      case 1: // Caso de inserção.
         printf("\n\n Digite um valor inteiro:  "); // Solicitação de valor.
         scanf("%d", &valor); // Leitura do valor a ser inserido.
         enfileirar(valor, &filaDoPao); // Chama a função para enfileirar o valor.
      break; // Sai do switch.
      case 2: // Caso de consulta.
            printf("\n\n O próximo da FILA é: %d \n\n", consultarProximo(filaDoPao)); // Mostra o próximo elemento.
            system("pause"); // Pausa a execução.
      break; // Sai do switch.
      case 3: // Caso de remoção.
            printf("\n\n Valor REMOVIDO da FILA : %d \n\n", desenfileirar(&filaDoPao)); // Mostra o valor removido.
            system("pause"); // Pausa a execução.
      break; // Sai do switch.
      case 4: // Caso de consulta do tamanho.
            printf("\n\n O tamanho da FILA é: %d \n\n", tamanhoFila(filaDoPao)); // Mostra o tamanho da fila.
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


void enfileirar(int aux, FILA* Fila){ // Função para enfileirar elementos.
  if(Fila->qtdElementos < Fila->max){ // Verifica se a fila não está cheia.
      Fila->vetor[(Fila->inicio + Fila->qtdElementos) % Fila->max] = aux; // Adiciona o elemento na posição correta.
      Fila->qtdElementos += 1; // Incrementa a quantidade de elementos na fila.
  }else{ // Se a fila estiver cheia.
           printf("\n\n <<FILA CHEIA>> \n\n"); // Mensagem de fila cheia.
           system("pause"); // Pausa a execução.
     
  }
 };

 int consultarProximo(FILA Fila) // Função para consultar o próximo elemento da fila.
 {
  return Fila.vetor[Fila.inicio]; // Retorna o próximo elemento da fila.
 };

 int tamanhoFila(FILA Fila) // Função para verificar o tamanho da fila.
 {
  return Fila.qtdElementos; // Retorna a quantidade de elementos na fila.
 };

 int desenfileirar(FILA* Fila) // Função para desenfileirar elementos.
 {
  if (Fila->qtdElementos > 0) // Verifica se a fila não está vazia.
  {
    int aux = Fila->vetor[Fila->inicio]; // Armazena o elemento a ser removido.
    Fila->inicio = (Fila->inicio + 1) % Fila->max; // Atualiza o índice de início.
    Fila->qtdElementos -= 1; // Decrementa a quantidade de elementos na fila.
    return aux; // Retorna o elemento removido.
  }
  else // Se a fila estiver vazia.
  {
    printf("\n\n <<FILA VAZIA>> \n\n"); // Mensagem de fila vazia.
    system("pause"); // Pausa a execução.
    return -1; // Retorna -1 indicando erro.
  }
 };
