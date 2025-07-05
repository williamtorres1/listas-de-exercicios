#include <stdio.h>
int main(){
  /*
    Escreva um programa que calcule e exiba a média aritmética de dez inteiros,
      fornecidos pelo usuário, e que exiba todos os números maiores que o valor
      da média aritmética.
    Exemplo de entrada e saída:
    77 44 37 65 1 86 85 34 2 15                 | Media: 44.6
                                                | Maiores que a media: 77 65 86 85
   
    --
    13 71 54 24 4 94 21 84 26 31                | Media: 42.2
                                                | Maiores que a media: 71 54 94 84
   
  */
  int numbers[10], sum = 0;
  float average = 0;
  printf("Digite 10 números inteiros para obter a média: ");
  for (int i = 0; i < 10; i++){
    scanf("%d", &numbers[i]);
    sum += numbers[i];
  }
  average = ((float) (sum))/10;
  printf("Media: %.1f\n", average);
  printf("Maiores que a media: ");
  for (int i = 0; i < 10; i++){
    if (numbers[i] >= average)
      printf("%d ", numbers[i]);
  }
  return 0;
}
