#include <stdio.h>
#include <string.h>

struct Movel {
  char descricao[50];
  float peso;
  char tipo;
};

int main() {
  int n;
  scanf("%d", &n);
  getchar();

  struct Movel moveis[1000];
  char mais_pesado[50];
  float max_peso = -1;
  int count_s = 0, count_real = 0;

  for (int i = 0; i < n; i++) {
    fgets(moveis[i].descricao, 50, stdin);
    moveis[i].descricao[strcspn(moveis[i].descricao, "\n")] = '\0';
    
    scanf("%f", &moveis[i].peso);
    scanf("%c", &moveis[i].tipo);
    getchar();
    
    if (moveis[i].peso > max_peso) {
      max_peso = moveis[i].peso;
      strcpy(mais_pesado, moveis[i].descricao);
    }
    
    if (moveis[i].tipo == 's' && moveis[i].peso > 10) {
      count_s++;
    }
    
    int len = strlen(moveis[i].descricao);
    if (len >= 4 && strcmp(moveis[i].descricao + len - 4, "Real") == 0) {
      count_real++;
    }
  }

  printf("Tipo 's' acima de 10Kg: %d\n", count_s);
  printf("Termina em \"Real\": %d\n", count_real);
  printf("Mais pesado: \"%s\"\n", mais_pesado);

  return 0;
}
