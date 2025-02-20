#include <stdio.h>

int main(){
  /*
    Crie uma matriz 3x3 de inteiros, e peca para o usuario do programa 
    preenche-la: Em seguida exiba-a separando os elementos da mesma linha por 
    “-” (traço) e separando as linhas por nova linha.
    Dica: Usar 2 lacos de repeticao FOR.
  */
  int matriz[3][3] = {0};
  int i, j;
  for(i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
      printf("Digite os valores da matriz 3x3: ");
      scanf("%d", &matriz[i][j]);
    }
  }
  for (i = 0; i < 3; i++){
    printf("|");
    for (j = 0; j < 3; j++){
      printf("-%d", matriz[i][j]);
    }
    printf("|\n");
  }
  return 0;
}
