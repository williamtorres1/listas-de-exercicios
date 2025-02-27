#include <stdio.h>
#include <string.h>
#include <ctype.h> // para usar a função tolower()
#define stringLength 100
int main(){
  /*
    Baseado no exercício anterior, o programa deve percorrer o vetor e contar 
    quantas vogais (a, e, i, o, u) foram digitadas pelo usuário.
  */
  char phrase[stringLength];
  int vowelsQuantity = 0, i = 0;
  printf("Digite uma frase com até 100 caracteres: ");
  fgets(phrase, stringLength, stdin);
  printf("A frase digitada foi: %s.\n", phrase);
  for (i = 0; i < stringLength; i++){
    switch(tolower(phrase[i])){
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':{
        vowelsQuantity++;
        break;
      }
      default: break;
    }
  }
  vowelsQuantity--;
  printf("Quantidade de vogais na frase: %d\n", vowelsQuantity); 
  return 0;
}
