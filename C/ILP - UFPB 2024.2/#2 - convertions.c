#include <stdio.h>

int main(){
  float temperatureInCelsius, distanceInKilometers = 0;
  float resultado = 0;
  printf("\nConversor de temperatura e distância.\n");
  printf("Digite um valor para temperatura em Celsius: ");
  scanf("%f", &temperatureInCelsius);
  resultado = (temperatureInCelsius * 9/5) + 32;
  printf("Resultado da conversão: %.2f\n", resultado);
  printf("Digite um valor para distância em Quilômetros: ");
  scanf("%f", &distanceInKilometers);
  resultado = distanceInKilometers * 0.621371;
  printf("Resultado da conversão: %.2f\n", resultado);
  return 0;
}
