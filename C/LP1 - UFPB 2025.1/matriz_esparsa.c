#include <stdio.h>

int ehEsparsa(int matriz[][10], int linhas, int colunas) {
  int totalElementos = linhas * colunas;
  int zeros = 0;

  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      if (matriz[i][j] == 0) {
        zeros++;
      }
    }
  }
  double porcentagem = (double)zeros / totalElementos * 100;

  return (porcentagem > 70.0);
}

int main() {
  int linhas, colunas;
  int matriz[10][10];
  
  scanf("%d", &linhas);
  scanf("%d", &colunas);
  
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }
  if (ehEsparsa(matriz, linhas, colunas)) {
    printf("A matriz é esparsa\n");
  } else {
    printf("A matriz não é esparsa\n");
  }
  
  return 0;
}
