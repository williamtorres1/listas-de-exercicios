#include <stdio.h>
#include <stdlib.h>
int main()
{	/*
	Dadas a base e a altura de um triângulo, calcular a sua área.
				Area = Base * Altura/2
	*/
	float area=0,base=0,h=0;
	printf("Digite o valor da base e da altura, em metros: ");
	scanf("%f %f",&base,&h);
	area=(base*h)/2;
	printf("A Area desse triangulo eh %f metro(s) \n",area);
	system("pause");
	return 1;
}
