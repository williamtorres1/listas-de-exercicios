#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define stringLength 100
int main(){
  /*
    Faça um programa onde o usuário vai digitar o nome completo, separando nome
     e sobrenomes por espaço.
    - O programa separa o nome e os sobrenomes em strings diferentes.
    - Exiba o nome e sobrenome separados por nova linha!
  */
  char name[stringLength];
  char *delimitador;
  printf("Digite seu nome completo, separando os nomes com espaço: ");
  fgets(name, stringLength, stdin);
  delimitador = strtok(name, " ");
  do {
    printf("%s \n", delimitador);
    delimitador = strtok(NULL, " ");
  } while(delimitador != NULL);
  return 0;
}
