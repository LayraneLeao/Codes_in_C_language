/* ATIVIDADE:
  Regra de negócio 1: Desconto para clientes fiéis.
  Enunciado: Clientes que fizeram mais de 5 compras nos últimos 6 meses têm direito a um desconto de 10% no valor total da próxima compra.

  Regra de negócio 2: Limite de crédito para novos clientes.
  Enunciado: Novos clientes têm um limite de crédito de R$ 500, ou seja, não podem fazer compras com valor total superior a esse limite até que completem 3 meses como clientes ativos.

  Tarefa: Criar um algoritmo em linguagem C que use essas duas regras de negócio para calcular o valor final de uma compra de um cliente, aplicando ou não o desconto de cliente fiel e verificando se um novo cliente ultrapassou o limite de crédito.

  CRIADORA: Layrane Dantas Pinheiro Leão
  */

#include <stdio.h>

int main (){
  char nome[50];
  int compras, opcao;
  double totalCompras; // Variavél que armazena o valor total da compra 
  double desconto, precoFinal;

  printf ("Digite seu nome: ");
  scanf ("%s", nome);

  do{
    printf ("Você é um novo cliente? (1-SIM/ 2-NÃO) ");
    scanf ("%d", &opcao);
    if (opcao != 1 && opcao != 2){
      printf("\nOpção inválida!Tente novamente...\n");
    }
  } while (opcao != 1 && opcao != 2); // Se a pessoa digitou uma opção inválida, estou permitindo a ele que volte e digite a opção correta

  
  switch (opcao){

    case 1: {
      // Se a pessoa digitar 1 porque ele é um novo cliente
      // Então entra pra regra 2
      // Como ele é um novo cliente, significa que não tem mais de 3 meses de compras, logo, só pergunto a ele o valor de sua compra
      printf ("Qual valor da sua compra? ");
      scanf ("%lf", &totalCompras);
      if (totalCompras > 500){
        printf ("\n%s, infelizmente você atingiu seu limite de compra!\nVocê só poderá fazer compras superiores a R$500 quando completar 3 meses de compras ativas na nossa loja.\n", nome);
      } else {
        printf ("\n%s, obrigada pela sua visita a loja!\nSaldo da sua compra: R$%.2lf\n", nome, totalCompras);
      }
      break;
    }
    
    case 2: {
      // Se a pessoa digitar 2 é porque ele não é um novo cliente, logo ele pode ter feito mais de 5 compras nos últimos 6 meses
      // Então entra pra regra 1
      printf ("Quantas compras você fez nos ultimos 6 meses? ");
      scanf ("%d", &compras);
      
      printf ("Qual valor da sua compra? ");
      scanf ("%lf", &totalCompras);

      if (compras> 5){
        desconto = totalCompras * 0.10;
        precoFinal = totalCompras - desconto;
        printf("\nParabéns %s, você ganhou 10%% de desconto!\nSua compra com desconto: R$%.2lf\n", nome, precoFinal);
      } else {
         printf ("\n%s, obrigada pela sua visita a loja!\nSaldo da sua compra: R$%.2lf\n", nome, totalCompras);
      }
      break;
    }
    
  }
 
  return 0;
}
