#include <stdio.h>
#include <stdlib.h>
#define vsom 343.216
int main()
{
	/*
    Qual a distância percorrida por um jato voando na velocidade do som durante 180
        segundos? Defina a velocidade do som como a sintaxe mostrada abaixo:
        #define CONSTANTE valor
        Obs:velocidade do som = 340 m/s
	*/
    float distancia = 0;
    int tempo = 180;
    distancia = tempo * vsom;
    printf("O jato percorreu %0.3fm. \n", distancia);
	system("pause");
	return 1;
}
