#include <stdio.h>
#include <limits.h>

int main() {
  int num, maior = INT_MIN, segundo_maior = INT_MIN;

  while (1) {
    scanf("%d", &num);
    if (num == 0) {
      break;
    }
    if (num > maior) {
      segundo_maior = maior;
      maior = num;
    } else if (num > segundo_maior) {
      segundo_maior = num;
    }
  }

  printf("Maior: %d\n", maior);
  printf("Segundo maior: %d\n", segundo_maior);

  return 0;
}
