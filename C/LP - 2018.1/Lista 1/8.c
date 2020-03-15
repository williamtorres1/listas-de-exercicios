#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*
	Dados o valor do salario minimo, o numero de horas trabalhadas, o numero de dependentes e a quantidade de horas extras trabalhadas por um funcionario, 
	calcular o salario a receber do funcionario de acordo com as regras a seguir:

	//O valor da hora trabalhada e igual a 1/10 do salario minimo;
	//O sal�rio do m�s � igual ao n�mero de horas trabalhadas multiplicado pelo valor da hora trabalhada;
	//O sal�rio bruto � igual ao sal�rio do m�s mais o valor do sal�rio fam�lia recebido por cada dependente e mais o valor total recebido pelas horas extras trabalhadas;
	//O sal�rio fam�lia � 5% do sal�rio m�nimo;
	//O valor de uma hora extra trabalhada � igual a uma vez e meia o valor da hora trabalhada;
	O sal�rio a receber do funcion�rio (sal�rio l�quido) � igual ao sal�rio bruto menos o IRRF;
	O valor do imposto de renda retido na fonte (IRRF) � de 10% do sal�rio bruto. 
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
