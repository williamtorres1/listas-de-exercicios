#include <stdio.h>
int main()
{
  /*
    Neste exercício, nós vamos implementar um programa que calcula e exibe o IMC a partir
      do peso e altura de uma pessoa, que devem ser digitados no teclado. Mas, diferente dos
      anteriores, aqui você construirá o programa de maneira autônoma, sem seguir um passo
      a passo como nos anteriores.
  */
  float bmi = 0, weight = 0;
  int height = 0;

  printf("Este programa irá calcular o IMC (Índice de Massa Corporal).\n");

  printf("Adicione o peso, em kgs: ");
  scanf("%f", &weight);

  printf("Adicione a altura, em cm: ");
  scanf("%d", &height);

  printf("Calculando o IMC...\n");
  bmi = weight * 10000 / (height * height);

  printf("Seu IMC é: %.2f\n", bmi);
  return 0;
}
