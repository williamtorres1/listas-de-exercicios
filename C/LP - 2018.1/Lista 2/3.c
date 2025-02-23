#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*
		Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos, 
			para os quais fornece a quantidade de ração em gramas.
		A quantidade diária de ração fornecida para cada gato é sempre a mesma. 
		Dados o peso do saco de ração e a quantidade de ração fornecida para cada 
			gato, calcule quanto restará de ração no saco após cinco dias.
*/
	int rationInKilograms, rationForEachCat;
	float rationLeftAfterFiveDays;
	printf("Qual a quantidade de ração para os gatos, em Kgs? ");
	scanf("%d", &rationInKilograms);
	printf("Qual a quantidade de ração para os gatos, em gramas, individualmente? ");
	scanf("%d", &rationForEachCat);
	rationLeftAfterFiveDays = (rationInKilograms * 1000 - rationForEachCat * 2 * 5);
	printf("A quantidade de ração restante após 5 dias é: %.2f Kgs.\n", 
	rationLeftAfterFiveDays/1000);
	system("pause");
	return 0;
}
