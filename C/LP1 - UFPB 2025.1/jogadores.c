#include <stdio.h>
#include <string.h>

typedef struct {
  char nome[100];
  int idade, chutes, gols;
} Jogador;

int main() {
    Jogador j1, j2;
    
    fgets(j1.nome, 100, stdin);
    j1.nome[strcspn(j1.nome, "\n")] = '\0';
    scanf("%d %d %d", &j1.idade, &j1.chutes, &j1.gols);
    
    while(getchar() != '\n');
    
    fgets(j2.nome, 100, stdin);
    j2.nome[strcspn(j2.nome, "\n")] = '\0';
    scanf("%d %d %d ", &j2.idade, &j2.chutes, &j2.gols);
    
    double pontaria1 = (j1.chutes == 0) ? 0 : (double)j1.gols / j1.chutes;
    double pontaria2 = (j2.chutes == 0) ? 0 : (double)j2.gols / j2.chutes;
    
    if (pontaria1 > pontaria2) {
        printf("%s (%d)\n", j1.nome, j1.idade);
    } else if (pontaria2 > pontaria1) {
        printf("%s (%d)\n", j2.nome, j2.idade);
    } else {
        printf("%s (%d)\n", j1.nome, j1.idade);
    }    
    return 0;
}
