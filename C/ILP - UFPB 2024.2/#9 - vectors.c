#include <stdio.h>

int main(){
  /*
    Faça um programa que recebe 10 valores inteiros digitados pelo usuário, 
      armazene os valores digitados em um array. Em seguida o programa deve 
      criar um segundo array de 10 elementos onde os valores correspondem ao 
      quadrado de cada valor digitado pelo usuário.
    Exiba os 2 arrays na tela.
  */
  int userNumbers[10] = {0};
  int squareNumbers[10] = {0};
  int i;
  for (i = 0; i < 10; i++){
    printf("Digite um valor para descobrir o quadrado dele: ");
    scanf("%d", &userNumbers[i]);
    squareNumbers[i] = userNumbers[i] * userNumbers[i];    
  }
  for (i = 0; i < 10; i++){
    printf("O quadrado dos valores digitados são: %d\n", squareNumbers[i]);
  }
  return 0;
}
