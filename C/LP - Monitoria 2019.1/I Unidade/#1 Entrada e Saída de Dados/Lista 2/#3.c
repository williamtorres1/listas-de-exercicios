#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*
		Analise o programa abaixo. O que o programa vai imprimir na tela? Tente prever o
            valor da variável d para saber. Depois modifique o código para conferir sua resposta.
	*/
	int a=5, b=1, c=0, d;
    d = ++a && b-- || c++;
    if (d != 0) 
    {
        printf("True\n");
    }
    else 
    {
        printf("False\n");
    }
    printf("%d",d);
	return 1;
}