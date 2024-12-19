/* 
	Exerc�cio 01: Fazer um programa ler um vetor de inteiros e positivos e imprimir quantas vezes aparece o 
	n�mero 1, 3 e 4, nesta ordem. O vetor ter� no m�ximo 100 posi��es. Sair do programa quando 
	for digitado -1.
	
	Criadora: Layrane Dantas Pinheiro Le�o
*/

#include <stdio.h>
#include <locale.h>
#define MAX 9 // m�ximo de posi��es do vetor

int verificarNumerosCorrespondentes (int numero[], int n, int *sair){
	int i;
	int contador =0;
	n = MAX;
	for (i=0; i<MAX; i++){
		if (numero[i] == 1 && numero[i+1]== 3 && numero[i+1+1]==4) {
		contador += 1;
		}
	}
	if (contador > 0) {
		printf ("\nApareceram %d vezes os n�meros 1, 3 e 4, respectivamente.\n", contador);
	} 
	if (contador = 0 && *sair != 1){ // Estou fazendo essa condi��o, pois se fechar o programa no int main, n�o quero que apare�a essa mensagem.
		printf ("\nN�o foram informados os n�meros 1, 3 e 4, respectivamente.\n");
	}
	
}

int main (){
	setlocale (LC_ALL, "portuguese");
	int numero[MAX];
	int contador;
	int n = MAX;
	int sair =0;
	
	for (int i=0; i<MAX; i++){
		printf ("Informe um n�mero inteiro: ");
		scanf ("%d", &numero[i]);
		
		if (numero[i]== -1){
			printf ("\nSaindo do programa........\n");
			sair =1;
			break;
		}
	}
	verificarNumerosCorrespondentes (numero, n, &sair);
	return 0;
	
}
