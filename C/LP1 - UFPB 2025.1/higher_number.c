#include <stdio.h>
int main(){
/*
  Escreva um programa que lê um número inteiro N e em seguida lê uma sequência
    de N números inteiros.
  O seu programa deve imprimir o valor do maior número da sequência.
  Exemplo de entrada e saída:
  2                 |
  10                | 
  20                |   20

  --
  3                 |
  20                | 
  30                |
  25                |   30
*/
  int higherNumber = -2147483647, i = 0, sizeOfArray = 1;
  printf("Digite a quantidade de numeros a serem comparados: ");
  scanf("%d", &sizeOfArray);
  int *userNumbers;
  userNumbers = (int *)malloc(sizeOfArray * sizeof(int));
  if (userNumbers == NULL) {
    printf("Erro ao alocar memoria!");
    return 1;
  }
  for (i = 0; i < sizeOfArray; i++) {
    printf("Digite um numero: ");
    scanf("%d", &userNumbers[i]);
    printf("O número digitado foi: %d e armazenado em %d", userNumbers[i], i);
    printf("A comparacao se: %d >= %d é %d ", userNumbers[i], higherNumber, (userNumbers[i] >= higherNumber));
    if (userNumbers[i] >= higherNumber)
      higherNumber = userNumbers[i];
  }
  printf("%d", higherNumber);
  return 0;
}
