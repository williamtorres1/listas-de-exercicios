#include <stdio.h>
#include <math.h>

int main(){
  /*
    Escreva um programa para calcular a distância entre dois pontos no plano 
      catersiano.
    O seu programa deve ter uma estrutura Ponto, com campos x e y, e uma função
      que recebe dois pontos e retorna o quadrado da distância entre eles.
    Exemplo de entrada e saída:
    0                 |
    0                 |
    1                 |
    1                 | 2

    --
    5                 |
    5                 |
    5                 |
    5                 | 0
  */
  int x1,y1,x2,y2, distance;
  printf("Digite a coordenada X1, Y1, X2, Y2: ");
  scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
  distance = pow((x2 - x1), 2) +  pow((y2 - y1), 2);
  printf("A distância entre os pontos p1 (%d, %d), p2 (%d, %d) é: %d u.d", 
    x1,y1,x2,y2, 
    distance
  );
  return 0;
}
