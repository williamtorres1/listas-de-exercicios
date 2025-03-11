#include <stdio.h>
/*
  Função aritmética, recebe 3 parâmetros, 2 operandos e um operador e de acordo
    com o operador realiza a soma, subtração, divisão ou multiplicação.
*/
float aritmetics (float numberOne, float numberTwo, char operation) {
  switch (operation){
    case '+': {
      return (numberOne + numberTwo);
    }
    case '-': {
      return (numberOne - numberTwo);
    }
    case '*': {
      return (numberOne * numberTwo);
    }
    case '/': {
      return (numberOne / numberTwo);
    }
    default: {
      printf("Operação inválida!");
      break;
    }
  }
}

int main(){
  float numberOne, numberTwo;
  char operation;
  printf("Digite a operação, e os dois números para efetuar a conta: ");
  scanf("%c %f %f", &operation, &numberOne,&numberTwo);
  printf("O resultado é: %.2f", aritmetics(numberOne, numberTwo, operation));
  return 0;
}
