#include <iostream>
#include "02-Date.h"

/*
  Crie uma classe chamada Data para representar uma data.
  Essa classe deve conter três atributos privados: o dia, o mês, e o ano.
  Considere também:
    Um construtor padrão (sem parâmetros) que inicializa os três atributos com o valor 1.
    Um método get() um set() para cada atributo;
    Um método void printData() (sem parâmetros) que deve exibir a data no formato: 
      "<DIA> de <NomeDoMês> de <ANO>"
  O programa deverá ler uma data (dia, mês e ano nessa ordem), e configurar esses
    valores no objeto Data utilizando os métodos set.
  Por fim, chame o método printData() e exiba a data.
  Caso o mês não seja conhecido (os meses válidos são entre 1 e 12) exiba o nome 
    dele como "Indefinido".

  Sugestao de Implementação:
    Crie um método string getMesString() que retorne o mês no formato de mês por
      extenso, isto é, caso o mês seja 1, retorne "Janeiro", e assim por diante.
*/

int main(){
  Date date;
  int value;
  std::cin >> value;
  date.setDay(value);
  std::cin >> value;
  date.setMonth(value);
  std::cin >> value;
  date.setYear(value);

  std::cout << date.getDay() << " de " << date.getMonthString() << " de " << date.getYear();
  return 0;
}
