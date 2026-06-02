#include <stdio.h>
#include <math.h>

int main(){
  /*
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
  int x1,y1,x2,y2, distanceInteger;
  float distance;
  //printf("Digite a coordenada X1, Y1, X2, Y2: ");
  scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
  distance = (pow((x2 - x1), 2) +  pow((y2 - y1), 2));
  distanceInteger = (int) (ceil(distance));
  //printf("A distância entre os pontos p1 (%d, %d), p2 (%d, %d) é: %.2f u.d", x1,y1,x2,y2, ceil(distance));
  printf("%d", distanceInteger);
  return 0;
}
