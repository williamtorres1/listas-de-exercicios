#include <stdio.h>

int higherNumber(int x, int y, int z){
  if (x >= y && x >= z)
    return x;
  if (y >= x && y >= z)
    return y;
  if (z >= x && z >= y)
    return z;
}

int main(){
  
  int x,y,z;
  printf("Digite três valores para saber o maior entre eles: ");
  scanf("%d %d %d", &x, &y, &z);
  printf("Maior número: %d", higherNumber(x,y,z));
  return 0;
}
