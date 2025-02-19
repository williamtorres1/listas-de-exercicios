#include <stdio.h>

int main(){
    /* Escrever um programa que solicite ao usuário um número inteiro N e, em seguida, use um loop for 
        para calcular a soma de todos os números pares de 1 até N.
        Obs: Não utilizar operador resto de divisão
    */
    int numeroDigitado = 0, soma = 0, i = 0;
    printf("Digite um valor inteiro para saber as somas até ele: ");
    scanf("%d", &numeroDigitado);
    for (i = 0; i <= numeroDigitado; i+=2) {
        soma = soma + i;
    }
    printf("A soma dos numeros é igual: %d\n", soma);;;
    return 0;
}