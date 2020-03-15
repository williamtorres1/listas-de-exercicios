#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*
		A nota final de um aluno em uma disciplina e a media aritmetica das notas de suas duas avaliacoes parciais.
		Faca um programa para ler as notas das duas avaliacoes parciais de um aluno e calcular sua nota final em uma dada disciplina.
	*/
	float nota1,nota2,media;
	printf("Digite a nota da primeira avaliacao e da segunda:\n");
	scanf("%f %f",&nota1,&nota2);
	media=(nota1+nota2)/2;
	printf("a media do aluno eh %f\n",media);
	system("pause");
	return 1;
}
