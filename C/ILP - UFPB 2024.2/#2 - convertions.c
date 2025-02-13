#include <stdio.h>

int main(){
  float temperatureInCelsius, distanceInQuilometers = 0;
  float resultado = 0;
  printf("\nConversora de temperatura e distância.\n");
  printf("Digite um valor para temperatura em Celsius: ");
  scanf("%f", &temperatureInCelsius);
  resultado = (temperatureInCelsius * 9/5) + 32;
  printf("Resultado da conversão: %.2f\n", resultado);
  printf("Digite um valor para distância em Quilômetros: ");
  scanf("%f", &distanceInQuilometers);
  resultado = distanceInQuilometers * 0.621371;
  printf("Resultado da conversão: %.2f\n", resultado);
  return 0;
}
