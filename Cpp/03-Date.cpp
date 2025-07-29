#include <iostream>
#include "03-Date.h"

int main(){
  Date date;
  int value;
  std::cin >> value;
  date.setDay(value);
  std::cin >> value;
  date.setMonth(value);
  std::cin >> value;
  date.setYear(value);
  std::cin >> value;
  date.incrementDay(value);

  std::cout << date.getDayString() << "/" << date.getMonthString() << "/" << date.getYear();
  return 0;
}
