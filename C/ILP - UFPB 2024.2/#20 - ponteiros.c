#include <stdio.h>
void altera_vetor(int *arr) {
  int i = 0;
  while (i < 10) {
    if ((arr[i]%2) == 0) {
      arr[i] = 1;
    } else arr[i] = 0;
  i++;
  }
  return;
}

int main() {
  /*
    Escreva uma função que receba um vetor de inteiros como parâmetro, percorra
      tal vetor e substitua os valores pares por 1 e os ímpares por 0. A função
      deve alterar os valores do vetor original. Na função main() leia o vetor
      int arr1[10] = {2,5,7,4,8,9,12,17,23,6};
      Exiba na tela o vetor antes e depois da chamada da função.
  */
  int arr1[10] = {2,5,7,4,8,9,12,17,23,6};
  int i;
  for (i = 0; i < 10; i++) {
    printf("%d ", arr1[i]);
  }
  putchar('\n');
  altera_vetor(arr1);
  for (i = 0; i < 10; i++) {
    printf("%d ", arr1[i]);
  }
  putchar('\n');
  return 0;
}
