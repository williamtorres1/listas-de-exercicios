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
  int i;
  printf("Digite seu nome completo, separando os nomes com espaço: ");
  fgets(name, stringLength, stdin);
  for (i = 0; i < stringLength; i++){
    if (name[i] == ' ' && name[i+1] != ' '){
      name[i] = '\n';
    }
  }
  printf("Nome e sobrenome separados por nova linha:\n%s", name);
  return 0;
}
