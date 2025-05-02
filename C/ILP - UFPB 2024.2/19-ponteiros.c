#include <stdio.h>
int main(){
  /*
    Verifique qual vai ser a saída de cada um dos printfs desse exercício de 
    ponteiros.
  */
  int Mat[4][3] = {{1,2,3}, {10,20,30}, {4,5,6}, {40,50,60}};
  int x, y, *ptr;
  ptr = &Mat[1][1];
  y = ptr[-4];
  x = *(ptr + ptr[-3])/y;
  printf("10 %d\n", *ptr);
  printf("%d\n", *(ptr + 1));
  printf("%d\n",x*10);
  return 0;
}
