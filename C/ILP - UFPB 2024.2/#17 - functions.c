#include <stdio.h>

float exponentiation(float base, int exponent){
  if (exponent == 0)
    return 1;
  else
    return base * exponentiation(base, exponent - 1);
}

int main(){
  /*
    Exponenciação: Recebe dois parâmetros inteiro e retorna o primeiro elevado 
      ao segundo (fazer função recursiva).
  */
 int exponents;
 float base;
 printf("Digite a base e o expoente: ");
 scanf("%f %d", &base, &exponents);
 printf("Resultado: %.2f\n", exponentiation(base, exponents));
}
