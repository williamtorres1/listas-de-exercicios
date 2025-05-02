#include <stdio.h>
int main(){
  int numberOne, numberTwo, numberThree = 0;
  float media = 0;
  printf("\nDigite três valores para calcularmos a média: ");
  // scanf("%i %i %i", &numberOne, &numberTwo, &numberThree);
  scanf("%d", &numberOne);
  scanf("%d", &numberTwo);
  scanf("%d", &numberThree);
  media = ((float)(numberOne + numberTwo + numberThree) / 3);
  printf("\nO resultado da média é: %f", media);
  return 0;
}
