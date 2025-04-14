#include <stdio.h>
#include <locale.h>

/* Questão: Desenvolva um programa que receba como entrada um número inteiro 
que represente um dos 7 dias da semana e imprima na tela se esse dia é útil, 
final de semana ou inválido.

Considere que Domingo é o dia 1 e Sábado o dia 7.*/

int main (){
	setlocale(LC_ALL, "portuguese"); // Define localização para português, permitindo o uso das acentuações
	
	// Declaração da Variável 
	int dia;
	
	// Exibindo o menu
	printf ("------DIAS DA SEMANA------\n");
	printf ("Digite 1 - Domingo\n");
	printf ("Digite 2 - Segunda\n");
	printf ("Digite 3 - Terça\n");
	printf ("Digite 4 - Quarta\n");
	printf ("\tDigite 5 - Quinta\n"); // Lembra de mostrar sobre a tabulação
	printf ("Digite 6 - Sexta\n");
	printf ("Digite 7 - Sábado\n");
	printf ("--------------------------\n");
	
	printf ("Informe o dia da semana que você deseja consultar: ");
	scanf ("%d", &dia);
	
	// Início das condicionais
	switch (dia){
		case 1: {
			printf ("\nVocê selecionou a opção 1!\n");
			printf ("DOMINGO é um dia do final de semana!\n");
			break;
		}
		case 2: {
			printf ("\nVocê selecionou a opção 2!\n");
			printf ("SEGUNDA é um dia útil!\n");
			break;
		}
		case 3: {
			printf ("\nVocê selecionou a opção 3!\n");
			printf ("TERCA é um dia útil!\n");
			break;
		}
		case 4: {
			printf ("\nVocê selecionou a opção 4!\n");
			printf ("QUARTA é um dia útil!\n");
			break;
		}
		case 5: {
			printf ("\nVocê selecionou a opção 5!\n");
			printf ("QUINTA é um dia útil!\n");
			break;
		}
		case 6:{
			printf ("\nVocê selecionou a opção 6!\n");
			printf ("SEXTA é um dia útil!\n");
			break;
		}
		case 7: {
			printf ("\nVocê selecionou a opção 7!\n");
			printf ("SÁBADO é um dia do final de semana!\n");
			break;
		}
		default: {
			printf ("\nVocê selecionou uma opção inválida!\n");
			break;
		}
	}
}
