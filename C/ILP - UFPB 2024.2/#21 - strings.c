#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
  /*
    Considere a matriz seguinte de caracteres e:
    a)Exibir o tamanho de cada string.
    b)Exibir a primeira letra de cada palavra da string.
    c)Contar quantas vogais existem na matriz inteira e armazene esse valor em
      uma variável.
    d)Criar um vetor de ponteiros para as strings da matriz e imprima as letras
      de cada string na ordem inversa.
    
  */
  char matriz [3][10] = {"gato", "cachorro", "passarinho"};
  int i=0, j=0, vogais=0, len=0;
  char auxiliar = '\0';
  // Exibir tamanho da matriz e 1ª letra
  for (i = 0; matriz[i][0] != '\0'; i++){
    printf("O tamanho da string %d eh %d \n", i, strlen(matriz[i]));
    printf("A primeira letra da string eh %c\n", matriz[i][0]);
  }
  // Contar vogais
  for (i = 0; matriz[i][0]!= '\0'; i++){
    for (j = 0; matriz[i][j]!= '\0'; j++){
      switch(tolower(matriz[i][j])){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':{
          vogais++;
          break;
        }
        default: break;
      }
    }
  }
  printf("Numero de vogais na matriz inteira: %d\n", vogais);
  // inverter a string
  for (i = 0; i < 3; i++){
    len = strlen(matriz[i]) -1;
    for (j = 0; j < (len+1) / 2; j++){
      auxiliar = matriz[i][j];
      matriz[i][j] = matriz[i][len-j];
      matriz[i][len-j] = auxiliar;
    }
    printf("%s\n", matriz[i]);
  }
  
  return 0;
}
