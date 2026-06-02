#include <stdio.h>
#define MAX 10

void soma_e_imprime(int A[][MAX], int B[][MAX], int m, int n) {
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d", A[i][j] + B[i][j]);
      if (j < n - 1) {
        printf(" ");
      }
    }
    printf("\n");
  }
}

int main() {
  int m, n;
  int A[MAX][MAX], B[MAX][MAX];

  scanf("%d %d", &m, &n);  
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &A[i][j]);
    }
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &B[i][j]);
    }
  }
  soma_e_imprime(A, B, m, n);
  return 0;
}
