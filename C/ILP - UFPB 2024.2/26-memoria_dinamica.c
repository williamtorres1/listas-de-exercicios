#include <stdio.h>
#include <stdlib.h>

int main(){
  /*
    Escreva um programa que leia um número inteiro n do usuário e aloque 
      dinamicamente um array de n inteiros.
    Em seguida, o programa deve preencher o array com valores lidos do usuário e
      calcular a média dos valores armazenados no array.
    Por fim, o programa deve imprimir a média na tela e liberar a memória 
      alocada.
    Dicas:
    - Use as funções malloc (ou calloc) e free para alocar a memória e liberar a
       memória alocada, respectivamente.
    - Lembre-se de verificar se a alocação de memória foi bem-sucedida antes de
        acessar o array alocado.
    - Não se esqueça de liberar a memória alocada antes de sair do programa.
  */
  int i, j, soma = 0;
  printf("Digite quantas posições o vetor terá: ");
  scanf("%d", &i);
  int *vetor_n;
  vetor_n = (int *)malloc(i * sizeof(int));
  if (vetor_n == NULL) {
    printf("Erro ao alocar memória!");
    return 1;
  }
  for (j = 0; j < i; j++) {
    printf("Digite o valor inteiro para o índice [%d]", j);
    scanf("%d", &vetor_n[j]);
  }

  for (j = 0; j < i; j++){
    soma = soma + vetor_n[j];
  }
  printf("A média de todos os valores digitados é: %f\n", (float)soma/i);
  free(vetor_n);
  
  return 0;
}
