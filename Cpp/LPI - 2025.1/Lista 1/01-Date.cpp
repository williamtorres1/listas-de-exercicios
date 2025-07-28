#include <iostream>
#include "01-Date.h"

/*
  Crie uma classe chamada Data para representar uma data.
  Essa classe deve conter três atributos públicos: o dia, o mês, e o ano.
  Considere também:
   Um construtor padrão (sem parâmetros) que inicializa os três atributos com o valor 1
  O programa deverá ler uma data (dia, mês e ano nessa ordem), diretamente nos 
  atributos do objeto Data. Por fim, exiba a data no seguinte formato: DIA/MÊS/ANO.

*/

int main(){
  Date date;
  std::cin >> date.day;
  std::cin >> date.month;
  std::cin >> date.year;

  std::cout << date.day << "/" << date.month << "/" << date.year;
  return 0;
}
