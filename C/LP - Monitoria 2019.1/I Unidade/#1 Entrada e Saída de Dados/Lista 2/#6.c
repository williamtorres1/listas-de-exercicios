#include <stdio.h>
#include <stdlib.h>
#define ehpar(numero)((numero % 2)? 0 : 1)
int main()
{
	/*
		Crie um programa para determinar se um número, entre 1 e 10, digitado pelo usuário
            é par ou ímpar utilizando switch e somente dois breaks.
	*/
	int a = 0, teste = 0;
	printf("Digite um numeros entre 1 e 10: ");
	scanf("%d", &a);
    teste = a %2;
    switch(teste)
	{
        case 0:
            {
                printf("%d eh par!\n", a);
                break;
            }
        default:
            {
                printf("%d eh impar!\n", a);
                break;
            }
	}
	system("pause");
	return 1;
}
