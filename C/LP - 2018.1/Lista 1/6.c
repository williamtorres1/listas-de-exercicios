#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*
		Calcular a quantidade de litros de combustivel gastos em uma viagem, utilizando-se um automovel que faz 15 km com um litro. 
		O cclculo deve ser feito a partir do tempo gasto em horas e da velocidade media durante a viagem em km/h. 
	*/
	float tempo,velocidadeMedia,litros,space;
	printf("Qual foi a velocidade media e o tempo gasto na viagem?\n");
	scanf("%f %f",&velocidadeMedia,&tempo);
	space=velocidadeMedia*tempo;
	litros=space/15;
	printf("Foram gastos %f litros nessa viagem\n",litros);
	system("pause");
	return 1;
}
