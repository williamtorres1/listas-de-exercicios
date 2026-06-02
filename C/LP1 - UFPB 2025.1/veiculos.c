#include <stdio.h>

typedef struct {
  int ano;
  float preco;
  char modelo[50];
  char marca[50];
} Veiculo;

int main() {
  Veiculo v1, v2;
  
  scanf("%49s %49s", v1.modelo, v1.marca);
  scanf("%d %f", &v1.ano, &v1.preco);
  
  scanf("%49s %49s", v2.modelo, v2.marca);
  scanf("%d %f", &v2.ano, &v2.preco);
  
  if (v1.ano < v2.ano) {
    printf("%s %s\n", v1.marca, v1.modelo);
  } 
  else if (v2.ano < v1.ano) {
    printf("%s %s\n", v2.marca, v2.modelo);
  } 
  else {
    if (v1.preco < v2.preco) {
      printf("%s %s\n", v1.marca, v1.modelo);
    } else {
      printf("%s %s\n", v2.marca, v2.modelo);
    }
  }
  
  return 0;
}
