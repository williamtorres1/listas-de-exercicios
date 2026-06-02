#include <stdio.h>

int main() {
  int num;
  int total = 0;
  int impares_maiores_15 = 0;

  while (1) {
    scanf("%d", &num);
    if (num == 0) {
      break;
    }
    total++;
    if (num % 2 != 0 && num > 15) {
      impares_maiores_15++;
    }
  }

  if (total == 0) {
    printf("0%%\n");
  } else {
    double porcentagem = (impares_maiores_15 * 100.0) / total;
    int valor_arredondado = (int)(porcentagem + 0.5);
    printf("%d%%\n", valor_arredondado);
  }

  return 0;
}
