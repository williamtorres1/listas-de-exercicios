#include <stdio.h>
#include <stdlib.h>
int main()
{	
	/*
	Calcular quantos mililitros de água cabem em uma caixa d’água de formato cilíndrico, sabendo-se que suas medidas (diâmetro e altura) são dadas em metros. 
OBS: Volume = Área da Base X Altura
          Área da Base = p X Raio2
          1 m3 = 1000 litros
          1 litro = 1000 ml
	*/
	float volume,a_base,altura,r,pi;
	pi=3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647093844609550582231725359408128481117450284102701938521105559644622948954930381964428810975665933446128475648233786783165271201909145648566923460348610454326648213393607260249141273;
	printf("Digite o raio e a altura da caixa d'agua: \n");
	scanf("%f %f",&r,&altura);
	a_base=pi*r*r;
	volume=a_base*altura;
	printf("O volume eh de %f litro(s)\n",volume);
	system("pause");
	return 1;
}
