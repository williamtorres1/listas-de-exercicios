#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*
		Refaça o programa abaixo utilizando operador ternário ( ? : ).

            int a,b;
            scanf("%d %d", &a, &b);
            if (a>b)
            {
                printf("%d\n", a);
            }
            else
            {
                printf("%d\n", b);
            }
            return 0;
	*/
	int a, b;
	printf("Este programa ira mostrar o maior numero digitado: ");
	scanf("%d %d", &a, &b);
	(a > b ? printf("%d\n", a) : printf("%d\n", b));
	system("pause");
	return 1;
}
