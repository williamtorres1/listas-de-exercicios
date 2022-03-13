#include <stdio.h>
int main()
{
	/*
		Para esse exercicio, nos vamos implementar um programa que calcula e exibe os valores
      do raio, da area e da circunferencia de um circulo. Tais valores devem ser calculados a
      partir do diametro do circulo, que deve ser lido do teclado.
	*/
	float circumference = 0, radius = 0, area = 0, diameter = 0;
	float pi = 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647093844609550582231725359408128481117450284102701938521105559644622948954930381964428810975665933446128475648233786783165271201909145648566923460348610454326648213393607260249141273;

	printf("Este programa irá calcular a circunferência, raio e área a partir do diâmetro.\n");
	printf("O valor de pi utilizado está com 300 casas decimais, fonte: WikiPedia.\n\n");

	printf("Adicione o valor do diâmetro, em metros: ");
	scanf("%f", &diameter);

	printf("Calculando a circunferência...\n");
	circumference = pi * diameter;

  printf("Calculando o raio...\n");
  radius = diameter/2;

  printf("Calculando a área...\n");
  area = pi * radius * radius;

  printf("Valores obtidos, todos em metros:\n");
  printf("Circunferência: %.3fm\nRaio: %.3fm\nDiâmetro: %.3fm\nÁrea: %.3fm\n", circumference, radius, diameter, area);
	return 1;
}
