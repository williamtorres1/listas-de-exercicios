#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*
		Uma pessoa vai viajar e na viagem ir� passar por v�rios pa�ses.
		Ela deseja saber quanto vale seu dinheiro nos pa�ses por onde ir� passar.
		Dada a quantidade de dinheiro em reais que a pessoa possui e a cota��o do d�lar, do iene e do euro,
            fa�a a convers�o do valor dado para as referidas moedas.
	*/
	float reais = 0;
    float ienes = 0, dolar = 0, euro = 0;
	printf("Digite quantos reais voce possui para fazermos a conversao: ");
	scanf("%f",&reais);
	ienes = reais * 29.92; //Cotacao do Iene no dia 27/07/2018
	euro  = reais * 0.23;  //Cotacao do Euro no dia 27/07/2018
	dolar = reais * 0.27;  //Cotacao do Dolar no dia 27/07/2018
	printf("Seus R$%2.f equivalem a:\n",reais);
	printf("%2.f Ienes\n%2.f Euros\n%2.f Dolar\nTenha um bom dia!\n",ienes,euro,dolar);
	system("pause");
	return 1;
}
