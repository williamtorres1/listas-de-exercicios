#include <stdio.h>
#include <string.h>
int main(){
  /*
    Escreva um programa que solicite ao usuário que digite uma frase (com até 
      100 letras) e armazene essa frase em um vetor de caracteres.
  */
  char frase[100];
  printf("Digite uma frase com até 100 caracteres: ");
  fgets(frase, 100, stdin);
  printf("A frase digitada foi: %s.\n", frase);
  return 0;
}
