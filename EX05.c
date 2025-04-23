#include <stdio.h>

int main (){
	// Declaração das Variáveis
	int par[5], contadorPar=0;
	int impar[5], contadorImpar=0;
	int i, valor, m; 
	
	
	
	// Estou criando um loop para inserir todos os 15 valores
	for (i=0; i<15; i++){
			printf ("\nInforme um valor: ");
			scanf ("%d", &valor);
			
			if (valor % 2 == 0) {
				par[contadorPar]= valor;
				contadorPar++;
			} else {
				impar[contadorImpar]= valor;
				contadorImpar++;
			}
			
			if (contadorPar == 5){
				// Estou mostrando ao usuário os dados daquele vetor
				printf ("\nVETOR PREENCHIDO!");
				for (m=0; m<5;m++){
					printf ("\nPAR[%d]= %d\n", m, par[m]);
				}
				contadorPar = 0; // Estou zerando o contador para que ele possa receber mais dados
			}
			
			if (contadorImpar == 5){
				// Estou mostrando ao usuário os dados daquele vetor
				printf ("\nVETOR PREENCHIDO!");
				for (m=0; m<5;m++){
					printf ("\nIMPAR[%d] = %d\n", m, impar[m]);
				}
				contadorImpar = 0; // Estou zerando o contador para que ele possa receber mais dados
			}
	}
	
	
	
	return 0;
	
}
