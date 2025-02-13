#include <stdio.h>
#define currentYear 2025
int main(){
  int bornYear, differenceInYears = 0;
// A: – Infantil A --- de 5 a 7 anos
// B: – Infantil B --- de 8 a 10 anos
// C: – Juvenil A --- de 11 a 13 anos
// D: – Juvenil B --- de 14 a 17 anos
// S: – Sênior --- maiores de 17 anos
  printf("Por favor, informe seu ano de nascimento: ");
  scanf("%d", &bornYear);
  differenceInYears = currentYear - bornYear;
  if (differenceInYears >= 5 && differenceInYears <= 7){
    printf("Nadador de idade: %d é da categoria: Infantil A", differenceInYears);
  } else if (differenceInYears >= 8 && differenceInYears <= 10) {
      printf("Nadador de idade: %d é da categoria: Infantil B ",differenceInYears);
  } else if (differenceInYears >= 11 && differenceInYears <= 13){
      printf("Nadador de idade: %d é da categoria: Juvenil A", differenceInYears);
  }
  else if (differenceInYears >= 14 && differenceInYears <= 17){
      printf("Nadador de idade: %d é da categoria: Juvenil B", differenceInYears);
  }
  else if (differenceInYears > 17){
      printf("Nadador de idade: %d é da categoria: Senior", differenceInYears);
  }
  putchar('\n');
  return 0;
}
