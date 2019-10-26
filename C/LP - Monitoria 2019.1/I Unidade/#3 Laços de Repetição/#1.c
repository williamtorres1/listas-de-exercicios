#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*
		Laço for - Faça um programa que receba um número inteiro e crie uma pirâmide
            como exemplificado abaixo (exemplos recebendo 3, 4 e 5):
            n=3 n=4 n=5
            *** **** *****
            **  ***  ****
            *   **   ***
                *    **
                     *
	*/
	int ramos = 0, i, j;
	printf("Digite o valor de ramos: ");
	scanf("%d", &ramos);
	for(i = 0; i < ramos; i++)
        {
            for(j = ramos; j > i; j--)
            {
                putchar('*');
            }
        putchar('\n');
        }
	system("pause");
	return 1;
}
