#include <stdio.h>
int main(){
  char operator = '+';
  float numberOne, numberTwo = 0;
  printf("Digite qual operação quer realizar:\n+)\n-)\n*)\n/)");
  operator = getchar();
  printf("Digite os dois valores para serem calculados: ");
  scanf("%f %f", &numberOne, &numberTwo);
  switch (operator)
  {
  case '+':
    printf("A soma é: %.2f", (numberOne + numberTwo));
    break;
  case '-':
    printf("A subtração é: %.2f", (numberOne - numberTwo));
  break;
  case '*':
    printf("A multiplicação é: %.2f", (numberOne * numberTwo));
  break;
  case '/':
    printf("A divisão é: %.2f", (numberOne/numberTwo));
  break;
  default:
    printf("Caracter inválido!");
    break;
  }
  putchar('\n');
  return 0;
}
