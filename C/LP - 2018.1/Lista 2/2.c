#include <stdio.h>
int main()
{
	/*
		Num dia de sol, voce deseja medir a altura de um predio, porem, a trena nao e suficientemente longa.
		Assumindo que seja possivel medir sua altura, sua sombra e a sombra do predio no chao, calcule a altura do predio.
	*/
	printf("Este programa ira calcular a altura do predio :).\n");
	float alturaPessoa, alturaPredio, sombraPessoa, sombraPredio = 0;
	printf("Digite a sua altura: ");
	scanf("%f", &alturaPessoa);
	printf("Digite a sua sombra: ");
	scanf("%f", &sombraPessoa);
	printf("Digite a sombra do predio: ");
	scanf("%f", &sombraPredio);
	alturaPredio = sombraPredio * alturaPessoa / sombraPessoa;
	printf("A Altura do predio e: %2.fm", alturaPredio);
	return 1;
}
