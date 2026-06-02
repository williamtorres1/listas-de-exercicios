#include <stdio.h>

int main() {
  int N;
  scanf("%d", &N);
  if (N <= 0) {
    return 0;
  }
  int numero, menor, maior, soma = 0;
  scanf("%d", &numero);
  menor = maior = soma = numero;

  for (int i = 1; i < N; i++) {
    scanf("%d", &numero);
    soma += numero;
    if (numero < menor) {
      menor = numero;
    }
    if (numero > maior) {
      maior = numero;
    }
  }
  int media = soma / N;
  printf("%d %d %d\n", menor, maior, media);
  return 0;
}
