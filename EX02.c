/*
	Exercício 02: Fazer um programa em C para ler uma quantidade N de alunos. Ler a nota de cada um dos N 
	alunos e calcular a média aritmética das notas. Contar quantos alunos estão com a nota acima 
	de 5.0. Obs.: Se nenhum aluno tirou nota acima de 5.0, imprimir mensagem: Não há nenhum
	aluno com nota acima de 5.
	
	Criadora: Layrane Dantas Pinheiro Leão
*/

#include <stdio.h>
typedef struct {
	float nota1;
	float nota2;
	float media;
}Notas;

int main (){
	int n;
	int contador=0; // Inicializando o contador com 0, para saber se existe algum aluno com nota acima de 5.0
	
	printf ("Informe quantos alunos serao entrevistados: ");
	scanf ("%d", &n);
	
	/* Criei o vetor de uma scrutc, pois com ela é possível registrar a nota1, nota2 e media correpondente a cada aluno
	individualmente, como no exemplo a seguir :
		notasAlunos[0].nota1
		notasAlunos[0].nota2
		notasAlunos[0].media
	A struct na posição 0 corresponde as informações de um único aluno. As demais posições serão as posicões de outros alunos individualmente também. */
	Notas notasAlunos[n];
	
	for (int i=0; i<n;i++){
		printf ("\nInforme a primeira nota do aluno %d: ", i+1);
		scanf ("%f", &notasAlunos[i].nota1);
		printf ("Informe a segunda nota do aluno %d: ", i+1);
		scanf ("%f", &notasAlunos[i].nota2);
		
		// Contando quantos alunos tomarão nota acima de 5.0
		if (notasAlunos[i].nota1 > 5.0 || notasAlunos[i].nota2 > 5.0){
			contador +=1;
		} 
		
		// Para calcular e exibir a média 
		notasAlunos[i].media= (notasAlunos[i].nota1 + notasAlunos[i].nota2)/2.0;
		printf ("\nA media do aluno %d e: %.2f", i+1, notasAlunos[i].media);
		printf ("\n.........................................\n");	
	}
	if (contador!=0){
		printf ("\n%d aluno(s) esta/estao com a(s) nota(s) acima de 5.0!\n", contador);
	} else {
		printf ("\nNao ha nenhum aluno com nota acima de 5.0!\n");
	}
	return 0;
}