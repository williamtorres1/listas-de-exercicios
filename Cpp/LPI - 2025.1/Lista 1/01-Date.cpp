#include <iostream>
/*
  Crie uma classe chamada Data para representar uma data.
  Essa classe deve conter três atributos públicos: o dia, o mês, e o ano.
  Considere também:
   Um construtor padrão (sem parâmetros) que inicializa os três atributos com o valor 1
  O programa deverá ler uma data (dia, mês e ano nessa ordem), diretamente nos 
  atributos do objeto Data. Por fim, exiba a data no seguinte formato: DIA/MÊS/ANO.

*/
class Date{
  public:
    int day, month, year;
  Date(){
    this->day = 1;
    this->month = 1;
    this->year = 1;
  }
  Date(int day, int month, int year){
    this->day = day;
    this->month = month;
    this->year = year;
  }

  void setDay(int day){
    this->day = day;
  }
  void setMonth(int month){
    this->month = month;
  }
  void setYear(int year){
    this->year = year;
  }

};


int main(){
  Date date;
  std::cin >> date.day;
  std::cin >> date.month;
  std::cin >> date.year;

  std::cout << date.day << "/" << date.month << "/" << date.year;
  return 0;
}
