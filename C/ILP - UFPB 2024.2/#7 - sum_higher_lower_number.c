#include <stdio.h>

int main(){
    /* Faça um programa que receba números inteiros digitados pelo usuário até que o mesmo digite zero. 
        Ao final mostre qual foi o maior número digitado, o menor e a soma de todos os números que foram
        digitados até o zero.
        Obs1: Não armazenar os números em array. Deixar gravado apenas a soma, maior e menor.
        Obs2: variável tipo int pode armazenar de -2147483647 a 2147483647
    */
    int numeroDigitado = 0, maiorNumero = 0, menorNumero = 0, soma = 0;
    do {
        printf("Digite um valor inteiro diferente de 0: ");
        scanf("%d", &numeroDigitado);
        if (numeroDigitado == 0)
            break;
        soma = soma + numeroDigitado;
        if (numeroDigitado < menorNumero || menorNumero == 0)
            menorNumero = numeroDigitado;
        if (numeroDigitado > maiorNumero || maiorNumero == 0)
            maiorNumero = numeroDigitado;
    } while(numeroDigitado != 0);
    printf("A soma dos valores sao: %d\n", soma);
    printf("O menor valor digitado foi: %d\n", menorNumero);
    printf("O maior valor digitado foi: %d\n", maiorNumero);
    return 0;
}