#include <stdio.h>
#include <stdlib.h>
const float GRAVIDADE = 9.825;
int main()
{
	/*
	Calcule o peso de um corpo com massa de 13 kg, defina a gravidade como uma
        contante usando a sintaxe mostrada abaixo:
            const tipo CONSTANTE1;
	*/
    float massa = 13, peso = 0;
    peso = massa * GRAVIDADE;
    printf("Este corpo pesa %0.2fN\n", peso);
	system("pause");
	return 1;
}
