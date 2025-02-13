#include <stdio.h>
int main(){
  float altura, imc, peso = 0;
  printf("Digite a sua altura e peso: ");
  scanf("%f %f", &altura, &peso);
  imc = (peso / (altura * altura));
  if(imc < 18.5) {
    printf("Você está abaixo do peso ideal!");
  } else if (imc >=18.5 && imc <=24.9) {
    printf("Parabéns - Você está em seu peso normal!");
  } else if (imc > 24.9 && imc <=29.9) {
    printf("Você está acima de seu peso ideal! (sobrepreso)");
  } else if (imc >= 30 && imc <=34.9) {
    printf("Você está acima de seu peso ideal! (Obesidade grau I)");
  } else if (imc >= 35 && imc <=39.9) {
    printf("Você está acima de seu peso ideal! (Obesidade grau II)");
  } else if (imc >=40) {
    printf("Você está acima de seu peso ideal! (Obesidade grau III)");
  } 
  return 0;
}
