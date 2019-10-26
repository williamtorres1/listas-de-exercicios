#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*
		Uma pessoa vai viajar e na viagem irá passar por vários países.
		Ela deseja saber quanto vale seu dinheiro nos países por onde irá passar.
		Dada a quantidade de dinheiro em reais que a pessoa possui e a cotação do dólar, do iene e do euro,
            faça a conversão do valor dado para as referidas moedas.
	*/
	float dinheiro_em_reais = 0;
    float dinheiro_em_ienes = 0, dinheiro_em_dolar = 0, dinheiro_em_euro = 0;
	printf("Digite quantos reais voce possui para fazer-mos a conversao: ");
	scanf("%f",&dinheiro_em_reais);
	dinheiro_em_ienes = dinheiro_em_reais * 29.92; //Cotacao do Iene no dia 27/07/2018
	dinheiro_em_euro  = dinheiro_em_reais * 0.23;  //Cotacao do Euro no dia 27/07/2018
	dinheiro_em_dolar = dinheiro_em_reais * 0.27;  //Cotacao do Dolar no dia 27/07/2018
	printf("Seus R$%2.f equivalem a:\n",dinheiro_em_reais);
	printf("%2.f Ienes\n%2.f Euros\n%2.f Dolar\nTenha um bom dia!\n",dinheiro_em_ienes,dinheiro_em_euro,dinheiro_em_dolar);
	system("pause");
	return 1;
}
