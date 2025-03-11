#include <stdio.h>
#include <math.h>

int main(){
  /*
    Raízes de uma equação de segundo grau. Recebe os coeficientes e retornas as
      raízes reais, se existirem. 
    X1 = (-B + sqrt(D)) / 2*A, 
    X2 = (-B – sqrt(D)) / 2*A. 
    Onde D = B*B – 4*A*C
  */
 int a, b, c;
 int delta, x1, x2;

 printf("Digite os coeficientes: aX² + bX + cX⁰: ");
 scanf("%d %d %d", &a, &b, &c);
 if (!a){
   printf("Coeficiente a não pode ser 0. Não é uma equação quadrática!");
   return 1;
 }
 delta = sqrt(b*b - 4*a*c);
 x1 = (-b + delta)/(2*a);
 x2 = (-b - delta)/(2*a);
 printf("As raízes da equação é: X' = %d X'' = %d e D = %d", x1, x2, delta);
 return 0;
}
