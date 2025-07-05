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
  /*
    Escreva um programa que lê um número inteiro N e em seguida lê uma sequência
     de N números inteiros.
    O seu programa deve imprimir o valor do maior número da sequência.
    Exemplo de entrada e saída:
    2                 |
    10                | 
    20                |   20

    --
    3                 |
    20                | 
    30                |
    25                |   30
  */
    int x,y,z;
    printf("Digite três valores para saber o maior entre eles: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("Maior número: %d", higherNumber(x,y,z));
    return 0;
}
