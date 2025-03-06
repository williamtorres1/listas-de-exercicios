#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
  /*
    Faça uma matriz de char, onde cada linha terá seu nome e sobrenomes, 
      exemplo: char matriz[3][20] = {"Vitor", "Meneghetti", "Araujo"};
    Escreva um programa com 4 funcionalidades:
      a) Exibir o tamanho de cada string.
      b) Exibir a primeira letra de cada palavra da matriz em maiúsculo 
        separados por ponto depois espaço (Exiba o nome completo abreviado pela 
        primeira letra).
      c) Contar número de vogais da matriz inteira e armazene esse valor em uma 
        variável.
      d) Criar um vetor de ponteiros para as strings da matriz e substituir as 
        vogais por números
      • a por 4
      • e por 3
      • i por 1
      • o por 0
      • u por 5
  */
 
    char matriz[3][20] = {"Vitor", "Meneghetti", "Araujo"};
    char *ponteiros[3];
    char c;
    int vogais = 0, i, j;

    printf("Tamanho de cada string:\n");
    for (i = 0; i < 3; i++) {
        printf("Tamanho da string %d: %lu\n", i + 1, strlen(matriz[i]));
    }
    printf("\nNome completo abreviado:\n");
    for (i = 0; i < 3; i++) {
        printf("%c. ", toupper(matriz[i][0]));
    }
    printf("\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; matriz[i][j] != '\0'; j++) {
            c = tolower(matriz[i][j]);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vogais++;
            }
        }
    }
    printf("\nNúmero de vogais na matriz: %d\n", vogais);

    printf("\nStrings com vogais substituídas por números:\n");
    for (int i = 0; i < 3; i++) {
        ponteiros[i] = matriz[i];
        for (int j = 0; ponteiros[i][j] != '\0'; j++) {
            switch (tolower(ponteiros[i][j])) {
                case 'a': 
                ponteiros[i][j] = '4'; 
                break;
                case 'e': 
                ponteiros[i][j] = '3'; 
                break;
                case 'i': 
                ponteiros[i][j] = '1'; 
                break;
                case 'o': 
                ponteiros[i][j] = '0'; 
                break;
                case 'u': 
                ponteiros[i][j] = '5'; 
                break;
            }
        }
        printf("%s\n", ponteiros[i]);
    }
  return 0;
}
