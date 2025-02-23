#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*
	Dados o valor do salário mínimo, o número de horas trabalhadas, o número de
		dependentes e a quantidade de horas extras trabalhadas por um funcionário, 
		calcular o salario a receber do funcionário de acordo com as regras a seguir:
		- O valor da hora trabalhada e igual a 1/10 do salário mínimo;
		- O salário do mes e igual ao número de horas trabalhadas multiplicado pelo
			valor da hora trabalhada;
		- O salário bruto e igual ao salario do mes mais o valor do salário família
			recebido por cada dependente e mais o valor total recebido pelas horas 
			extras trabalhadas;
		- O salário família e 5% do salário minimo;
		- O valor de uma hora extra trabalhada e igual a uma vez e meia o valor da
			hora trabalhada;
		- O salário a receber do funcionário (salário líquido) e igual ao 
			salário bruto menos o IRRF;
		- O valor do imposto de renda retido na fonte (IRRF) e de 10% do salário bruto.
	*/
	float salarioMinimo,horasTrabalhadas,horasExtras,IRRF,valorHora,salarioMes,salarioBruto,salarioExtra,salarioFamilia,salarioLiquido;
	int pessoasDependentes;
	printf("Digite o salario minimo: ");
	scanf("%f",&salarioMinimo);
	printf("Digite quantas horas foram trabalhdas: ");
	scanf("%f",&horasTrabalhadas);
	printf("Digite o numero de dependentes do salario(salario familia): ");
	scanf("%d",&pessoasDependentes);
	printf("Digite quantas horas extras foram trabalhadas: ");
	scanf("%f",&horasExtras);
	valorHora=0.1*salarioMinimo;
	salarioMes=horasTrabalhadas*valorHora;
	salarioFamilia=0.05*salarioMinimo;
	salarioExtra=valorHora*1.5*horasExtras;
	salarioBruto=salarioMes+(salarioFamilia*pessoasDependentes)+salarioExtra;
	IRRF=0.1*salarioBruto;
	salarioLiquido=salarioBruto-IRRF;
	printf("\nO salario a receber eh de %f \n",salarioLiquido);
	system("pause");
	return 1;
}
