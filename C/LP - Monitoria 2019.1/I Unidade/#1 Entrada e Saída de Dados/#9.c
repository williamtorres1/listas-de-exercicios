#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*
	Crie um programa que leia do teclado um caractere e, em seguida, envie a
        mensagem: "O carácter digitado foi: ". Faça o mesmo para uma variável string, desta vez
        solicitando uma palavra.
	*/
	char a = '0';
	printf("Digite um caractere: ");
	scanf("%c",&a);
	printf("O caractere digitado foi \"%c\". \n", a);
	system("pause");
	return 1;
}
