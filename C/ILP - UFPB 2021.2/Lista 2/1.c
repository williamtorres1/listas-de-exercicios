#include <stdio.h>
int main()
{
  /*
    Escreva um programa em C que calcule a area de um triangulo de base b e altura h.
      a. Base e altura devem ser armazenados em variaveis inteiras.
      b. Os valores para b e h devem ser lidos do teclado.
      c. Armazenar o valor da area em uma variavel real chamada area.
   */
  int base = 0, altura = 0;
  float area = 0, base_real = 0, altura_real = 0;
  printf("Este programa irá calcular a rea de um triângulo de três notas.\n");
  printf("Adicione o valor da base: ");
  scanf("%d", &base);
  printf("Adicione o valor da altura: ");
  scanf("%d", &altura);

  printf("Calculando...\n");
  base_real = base;
  altura_real = altura;
  area = (base_real * altura_real) / 2;
  printf("A média é: %.2f\n", area);
  return 0;
}
