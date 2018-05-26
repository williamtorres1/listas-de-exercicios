#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*
	Um sistema de equações lineares da forma
	ax + by = c
	dx + ey = f
	pode ser resolvido utilizando-se as seguintes fórmulas:
	x=(ce-bf)/(ae-bd)		y=(af-cd)/(ae-bd)
	Dados os coeficientes (a,b,c,d,e,f) das equações, calcular x e y.
	*/
	int a,b,d,c,e,f;
	int x,y;
	printf("Digite os coeficientes, em ordem, para calcular o sistema linear e o termo independente: ");
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	x=(c*e-b*f)/(a*e-b*d);
	y=(a*f-c*d)/(a*e-b*d);
	printf("o valor de x: %d\no valor de y: %d\n",x,y);
	system("pause");
	return 1;
}
