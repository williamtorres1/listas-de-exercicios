#include <stdio.h>
int main()
{
    float peso,altura,pesoideal;
    char sexo;
    printf("Digite o sexo:");
    scanf("%c",&sexo);
    printf("Digite a altura: ");
    scanf("%f",&altura);
    printf("Digite o peso: ");
    scanf("%f",&peso);
    if(peso>0 && altura>0.5 && altura<=3.0 && sexo=='M'||sexo=='m'|| sexo=='f'||sexo=='F')
    {pesoideal==72.7*altura-58;
    if(peso==pesoideal)
    {printf("seu peso é ideal");}
    if(peso<pesoideal)
    {printf("Você está abaixo do peso ideal.");}
    else{printf("você está acima do peso ideal.");}} 
    else{pesoideal==62.1*altura-44.7;
    if(peso==pesoideal)
    {printf("Seu peso é ideal.");}
    if(peso<pesoideal)
    {printf("Voce esta abaixo do peso ideal. ");} 
    else {printf("voce esta acima do peso ideal.");}}
    return 0;
}

