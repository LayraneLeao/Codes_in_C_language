/* Foi criado um sistema de gerenciamento de um aeroporto, com as seguintes opções : registro de aviões, registro de assentos por avião, 
reserva do passageiro, consulta por avião e consulta por passageiro. */

#include <locale.h>
#include <stdio.h>
#include <string.h>
#define MAX_RESERVAS 20
#define TAM_NOME 50

typedef struct {
  int aviaoEscolhido; // variável que armazena o número do avião escolhido pelo usuário
  char nomePassageiro[TAM_NOME];
  int assentos; // Esta variável vai armazenar a quantidade de assentos reservados para cada passageiro.
} Reserva;

int menu(); // Declarando a função do menu, sem necessidade de parâmetro "escolha".

int main () {
  setlocale(LC_ALL, "portuguese"); // Define localização para português, permitindo o uso das acentuações

  Reserva reservas[MAX_RESERVAS]; // Fornando uma lista de reservas

  int escolha = menu(); // Chamando a função do menu para receber a escolha inicial

  // Declarando as variáveis que serão utilizadas no código!
  int numeroAvioes[4] = {0,0,0,0}; // Vetor para que a atendente informe o número de cada avião.
  int assentos_por_aviao[4]; // Vetor que armazena a quantidade total de assentos para cada avião, informado pela atendente.
  int i, stop=0;
  int aviaoExiste = 0; // Variável para verificar se o avião foi encontrado
  int totalReservas = 0; // Variável para armazenar o total de reservas
  int assentosTotais;
  int indexAviao = 0;

  // Início das minhas condicionais
  while (escolha != 6) {
    switch (escolha) {
      case 1: {
        printf("\nVocê selecionou a opção 1!\n");
        int repetido =0;

        // Pedindo ao usuário para digitar os números dos 4 aviões
        for (i = 0; i < 4; i++) {
          while (repetido != 1) {
            printf("Informe o número do avião %d: ", i + 1);
            scanf("%d", &numeroAvioes[i]);
            if (numeroAvioes[i] == numeroAvioes[i-1]){
              printf ("\nMesmo número informado!\nVocê não poderá informar mais o número dos aviões, entre na opção 1 novamente!!\n");
              repetido=1;
              break;
            }
          break;
          } 
        }

        // Imprimindo os números dos 4 aviões
        printf("\n........Aviões Disponíveis.......\n");
        for (i = 0; i < 4; i++) {
          printf("\tAvião %d é: %d.\n", i + 1, numeroAvioes[i]);
        }
        printf(".................................\n");
        printf("\nVoltando ao menu........\n");
        break;
      }

      case 2: {
        printf("\nVocê selecionou a opção 2!\n");
        for (i = 0; i < 4; i++) {
          printf("\nInforme a quantidade de assentos do avião %d: ", numeroAvioes[i]);
          scanf("%d", &assentos_por_aviao[i]);
        }
        // Imprimindo os números dos 4 aviões com a quantidade de assentos
        printf("\n........Assentos Disponíveis.......\n");
        for (i = 0; i < 4; i++) {
          printf("\tAvião %d: %d assentos.\n", numeroAvioes[i], assentos_por_aviao[i]);
        }
        printf("...................................\n");
        printf("\nVoltando ao menu........\n");
        break;
      }

      case 3: {
        printf("\nVocê selecionou a opção 3!\n");

        printf("Informe o número do avião escolhido: ");
        scanf("%d", &reservas[totalReservas].aviaoEscolhido); // 'totalReservas' está servindo como um contador para ser incrementado a cada vez que uma reserva for realizada

        // Verifica se o número do avião escolhido existe.
        for (i = 0; i < 4; i++) {
          // Se o avião informado for igual a um dos 4 aviões registrados, o avião existe.
          if (reservas[totalReservas].aviaoEscolhido == numeroAvioes[i]) {
            aviaoExiste = 1; // Avião encontrado
            indexAviao = i; // Salva o índice do avião correspondente
            break; // fecha o loop
          }
        }
        if (aviaoExiste == 0) {
          printf("\nEste avião não existe!\n");
          break;
        }

        // Verificando se há assentos disponíveis no avião escolhido
        if (assentos_por_aviao[indexAviao] <= 0) {
          printf("\nNão há assentos disponíveis para este avião!\n");
          break;
        }

        if (aviaoExiste == 1 && assentos_por_aviao[indexAviao] > 0) {
          // Criando um loop para que o usuário possa reservar até o limite de 20 reservas
          while (stop != 2) {
            // Verifica se o número total de reservas não atingiu o limite máximo
            if (totalReservas >= MAX_RESERVAS) {
              printf("\nLimite de reservas atingido!\n");
              break;
            }

            printf("Informe o nome do passageiro: ");
            getchar(); // Limpar o buffer do teclado
            fgets(reservas[totalReservas].nomePassageiro, TAM_NOME, stdin);
            printf("Quantos assentos você deseja reservar? ");
            scanf("%d", &reservas[totalReservas].assentos);

            // Remove o caractere de nova linha da string, caso ele tenha sido lido
            reservas[totalReservas].nomePassageiro[strcspn(reservas[totalReservas].nomePassageiro, "\n")] = 0;

            // Verificando se há assentos suficientes no avião
            if (assentos_por_aviao[indexAviao] >= reservas[totalReservas].assentos) {
              // Decrementando os assentos disponíveis no avião
              assentos_por_aviao[indexAviao] -= reservas[totalReservas].assentos;
              printf("\nReserva realizada com sucesso!\n");
              totalReservas++; // Incrementa o contador de reservas
            } else {
              printf("\nAssentos insuficientes!\n");
            }

            printf("\nVocê deseja continuar neste avião? (1-Sim | 2-Não)\n");
            scanf("%d", &stop);

            if (stop > 2 || stop < 1) {
              printf("\nOpção inválida!\n");
            }
            if (stop == 2) {
              printf("\nVoltando ao menu........\n");
              break;
            }
            
          } // fim do while
        } // fim do if
        break;
      }

      case 4: {
        printf("\nVocê selecionou a opção 4!\n");
        
        int aviaoDisponivel;
        printf("Qual avião você deseja verificar?\n");
        scanf("%d", &aviaoDisponivel);

        aviaoExiste = 0; // Reseta aviaoExiste antes de verificar
        for (i = 0; i < 4; i++) {
          // Verifica se o número do avião escolhido existe.
          if (aviaoDisponivel == numeroAvioes[i]) {
            aviaoExiste = 1; // Avião encontrado
            indexAviao = i;
            break;
          }
        }

        if (aviaoExiste == 0) {
          printf("\nEste avião não existe!\n");
        } else {
          assentosTotais = assentos_por_aviao[indexAviao];
          // Exibindo a quantidade de assentos e reservas para o avião escolhido
          printf("\nAvião %d tem %d assentos disponíveis.\n", aviaoDisponivel, assentosTotais);
          printf("Foi realizada %d reserva(s) para este avião.\n", totalReservas);
        }

        printf("\nVoltando ao menu........\n");
        break;
      }

      case 5: {
        printf("\nVocê selecionou a opção 5!\n");

        char nomePassageiroConsulta[TAM_NOME];
        int encontrado = 0;

        printf("Informe o nome do passageiro para consulta: ");
        getchar(); // Limpar o buffer do teclado
        fgets(nomePassageiroConsulta, TAM_NOME, stdin);

        // Remove o caractere de nova linha da string
        nomePassageiroConsulta[strcspn(nomePassageiroConsulta, "\n")] = 0;

        // Buscando a reserva do passageiro
        for (i = 0; i < totalReservas; i++) {
          // Se o nome digitado for igual ao nome que fez a reserva na opção anterior, ele entra na condicao
          if (strcmp(reservas[i].nomePassageiro, nomePassageiroConsulta) == 0) {
            printf("\nPassageiro(a) %s encontrado(a)!\n", reservas[i].nomePassageiro);
            printf("Avião escolhido: %d\n", reservas[i].aviaoEscolhido);
            printf("Assentos reservados: %d\n", reservas[i].assentos);
            encontrado = 1;
            break;
          }
        }

        if (!encontrado) {
          printf("\nPassageiro não encontrado!\n");
        }

        printf("\nVoltando ao menu........\n");
        break;
      }

      // Caso seja digitado um número diferente do sugerido no menu
      default: {
        printf("Opção inválida. Tente novamente.\n");
        break;
      }
    } // fim do switch

    escolha = menu(); // Exibindo o menu novamente após a execução de cada opção
  } // fim do while

  if (escolha == 6) {
    printf("\nSaindo do programa........\n");
  }

  return 0;
} // Fim do int main

// Função para exibir o menu para o usuário
int menu() {
  int escolha;
  printf("\n--------------------------------------------------------------------\n");
  printf("Opção 1: Registrar o número de cada avião.\n");
  printf("Opção 2: Registrar o quantitativo de assentos disponíveis em cada avião.\n");
  printf("Opção 3: Reservar passagem aérea.\n");
  printf("Opção 4: Realizar consulta por avião.\n");
  printf("Opção 5: Realizar consulta por passageiro.\n");
  printf("Opção 6: Encerrar.\n");
  printf("\n--------------------------------------------------------------------\n");
  printf("Escolha uma das opções: ");
  scanf("%d", &escolha);
  return escolha; // Retorna a escolha feita pelo usuário
}
