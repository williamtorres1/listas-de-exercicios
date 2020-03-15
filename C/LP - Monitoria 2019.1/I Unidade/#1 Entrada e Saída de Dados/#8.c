#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*
        Crie uma calculadora que dados dois números REAIS, calcule e imprima a multiplicação dos
            dois números com aproximação de duas casas decimais (use printf(“o valor e:
            %0.2f”,RESULTADO); para que assim o computador arredonde o número para 2 casas decimais
            depois da vírgula).
	*/
	float a = 3, b = 65, resultado = 0;
	resultado = a/b;
	printf("O resultado de %0.2f/%0.2f eh %0.2f \n", a, b, resultado);
	system("pause");
	return 1;
}
