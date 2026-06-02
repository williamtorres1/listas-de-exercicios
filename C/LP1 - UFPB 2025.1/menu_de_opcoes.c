#include <stdio.h>

int main() {
  int opcao;
  
  while(1) {
    printf("1 - Item 1\n");
    printf("2 - Item 2\n");
    printf("3 - Item 3\n");
    printf("4 - Sair\n");
    
    scanf("%d", &opcao);
    
    if (opcao == 4) {
      printf("Sair\n");
      break;
    }
    
    switch(opcao) {
      case 1:
        printf("Item 1\n");
        break;
      case 2:
        printf("Item 2\n");
        break;
      case 3:
        printf("Item 3\n");
        break;
      default:
        printf("Opcao %d Invalida\n", opcao);
    }
  }
  
  return 0;
}
