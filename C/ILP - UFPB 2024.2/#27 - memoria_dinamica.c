#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  /*
    Escreva um programa que permita que o usuário insira uma string e depois a 
      exiba invertida na tela.
    O programa deve alocar memória dinamicamente para armazenar a string e, em 
      seguida, inverter a string usando um loop e alocando memória dinamicamente
      para armazenar a string invertida.
    O programa deve imprimir a string invertida na tela antes de liberar a 
      memória alocada dinamicamente.
    Dicas:
      - Usar scanf(“%m[^\n]”, &str);
      - Usar strlen para saber o quanto alocar de memória para a outra string.
  */
  char *userString, *coppiedString;
  unsigned long int i;
  printf("Digite a string! ");
  scanf("%m[^\n]", &userString);
  coppiedString = (char *) malloc(strlen(userString) + 1);
  if (coppiedString == NULL) {
    printf("Erro na alocação de memória!");
    return 1;
  }
  for (i = 0; i < strlen(userString); i++){
    coppiedString[i] = userString[strlen(userString) -i -1];
  }
  printf("String original: %s \nString invertida: %s\n", userString, coppiedString);
  free(userString);
  free(coppiedString);
  return 0;
}
