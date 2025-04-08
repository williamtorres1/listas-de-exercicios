#include <stdio.h>
#include <stdlib.h>

int main(){
  /*
    Alocar memória para matrizes multidimensionais usando alocação dinâmica.
    Pedir p usuário informar o número de linhas e colunas.
    Você pode alocar uma matriz de ponteiros e, em seguida, alocar cada linha da
     matriz separadamente.
    Dica: A matriz deve ser alocada como um array de ponteiros: 
      int **matrix; ** significa ponteiro para ponteiro
    Cada ponteiro aponta para uma linha da matriz.
    A alocação de memória é feita em duas etapas: primeiro, aloca a matriz de 
      ponteiros com matrix = (int **) malloc(rows * sizeof(int *));, e depois 
      aloca cada linha da matriz usando um laço 
      for: matrix[i] = (int *) malloc(cols * sizeof(int))
  */
  int i, j, rows, columns, **matrice;
  printf("Digite a quantidade de linhas e colunas da matriz: ");
  scanf("%d %d", &rows, &columns);
  matrice = (int **) malloc(rows * sizeof(int *));
  if (matrice == NULL){
    printf("Erro ao alocar memória!");
    return 1;
  }
  for (i = 0; i < rows; i++){
    matrice[i] = (int *) malloc(columns * sizeof(int *));
    if (matrice[i] == NULL){
      printf("Erro ao alocar memória para as colunas da matriz!");
      free(matrice);
      return 1;
    }
    matrice[i][columns * sizeof(int *)] = rand() % 10;
  }
  for (i = 0; i < rows; i++)
    for (j = 0; j < columns; j++)
      printf("matriz[%d][%d]: %d\n", i, j, matrice[i][j]);
  free(matrice[0]);
  free(matrice);
  return 0;
}
