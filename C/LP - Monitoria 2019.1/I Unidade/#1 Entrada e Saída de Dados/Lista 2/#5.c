#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*
        Escreva um programa que recebe um número de 1 a 7 e imprime o dia da semana
            correspondente utilizando switch (avise ao usuário caso ele digite um número menor que 1 ou
            maior que 7).
	*/
	int a = 0;
	printf("Digite dois numeros entre 1 e 7: ");
	scanf("%d", &a);
	switch(a)
    {
        case 1:
            {
                printf("HOJE EH DOMINGO!\n");
                break;
            }
        case 2:
            {
                printf("HOJE EH SEGUNDA!\n");
                break;
            }
        case 3:
            {
                printf("HOJE EH TERCA!\n");
                break;
            }
        case 4:
            {
                printf("HOJE EH QUARTA!\n");
                break;
            }
        case 5:
            {
                printf("HOJE EH QUINTA!\n");
                break;
            }
        case 6:
            {
                printf("HOJE EH SEXTA!\n");
                break;
            }
        case 7:
            {
                printf("HOJE EH SABADO!\n");
                break;
            }
    }
	if(a > 7 || a < 1)
        printf("Voce digitou um valor errado.\n");
	system("pause");
	return 1;
}
