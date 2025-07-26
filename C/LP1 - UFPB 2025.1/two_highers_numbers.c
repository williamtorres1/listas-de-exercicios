#include <stdio.h>
#define LOWEST_INT -2147483647
int main(){
  /*
    
  */
    int currentNumber, higherNumber = 0, secondHigherNumber = 0;
    while(currentNumber != 0) {
      printf("Digite um valor: ");
      scanf("%d", &currentNumber);
      if (currentNumber >= secondHigherNumber && currentNumber < higherNumber){
        secondHigherNumber = currentNumber;
      }
      if (currentNumber >= higherNumber){
        higherNumber = currentNumber;
      }
    }
    printf("Maior: %d\nSegundo maior: %d", higherNumber, secondHigherNumber);
    return 0;
}
