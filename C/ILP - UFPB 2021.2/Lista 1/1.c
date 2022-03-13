#include <stdio.h>
int main()
{
  /*
  Nesse primeiro exercicio de laboratorio vamos desenvolver um programa que devera
    ler tres notas distintas de um aluno e ao final exibir a media aritmetica dessas notas.
  */
  float firstGrade = 0, secondGrade = 0, thirdGrade = 0, average = 0;
  printf("Este programa irá calcular a média de três notas.\n");
  printf("Adicione a primeira nota: ");
  scanf("%f", &firstGrade);
  printf("Adicione a segunda nota: ");
  scanf("%f", &secondGrade);
  printf("Adicione a terceira nota: ");
  scanf("%f", &thirdGrade);

  printf("Calculando...\n");
  average = (firstGrade + secondGrade + thirdGrade)/3;
  printf("A média é: %.3f\n", average);
  return 1;
}
