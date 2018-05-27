#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*
	Dados o valor do salário mínimo, o número de horas trabalhadas, o número de dependentes e a quantidade de horas extras trabalhadas por um funcionário, 
	calcular o salário a receber do funcionário de acordo com as regras a seguir:

	//O valor da hora trabalhada é igual a 1/10 do salário mínimo;
	//O salário do mês é igual ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
	//O salário bruto é igual ao salário do mês mais o valor do salário família recebido por cada dependente e mais o valor total recebido pelas horas extras trabalhadas;
	//O salário família é 5% do salário mínimo;
	//O valor de uma hora extra trabalhada é igual a uma vez e meia o valor da hora trabalhada;
	O salário a receber do funcionário (salário líquido) é igual ao salário bruto menos o IRRF;
	O valor do imposto de renda retido na fonte (IRRF) é de 10% do salário bruto. 
	*/
	float salario_minimo,horas_trabalhadas,h_extras,IRRF,valor_hora,salario_mes,salario_bruto,salario_extra,salario_familia,salario_liquido;
	int num_dependentes;
	printf("Digite o salario minimo: ");
	scanf("%f",&salario_minimo);
	printf("Digite quantas horas foram trabalhdas: ");
	scanf("%f",&horas_trabalhadas);
	printf("Digite o numero de dependentes do salario(salario familia): ");
	scanf("%d",&num_dependentes);
	printf("Digite quantas horas extras foram trabalhadas: ");
	scanf("%f",&h_extras);
	valor_hora=0.1*salario_minimo;
	salario_mes=horas_trabalhadas*valor_hora;
	salario_familia=0.05*salario_minimo;
	salario_extra=valor_hora*1.5*h_extras;
	salario_bruto=salario_mes+(salario_familia*num_dependentes)+salario_extra;
	IRRF=0.1*salario_bruto;
	salario_liquido=salario_bruto-IRRF;
	printf("\nO salario a receber eh de %f \n",salario_liquido);
	system("pause");
	return 1;
}
