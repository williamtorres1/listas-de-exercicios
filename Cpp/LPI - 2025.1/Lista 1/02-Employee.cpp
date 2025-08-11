#include <iostream>
#include "02-Employee.h"

int main(){
  unsigned int n;
  std::cin >> n;
  Employees *employee = new Employees[n];

  for(unsigned int i = 0; i < n; i++){
    std::string value;
    float salary;
    std::getline(std::cin >> std::ws, value);
    employee[i].setFirstName(value);
    std::getline(std::cin >> std::ws,value);
    employee[i].setLastName(value);

    std::cin >> salary;
    employee[i].setWage(salary);
    std::cin.ignore();
  }
  for (unsigned int i = 0; i < n; i++){
    std::cout << employee[i].getFirstName() << ' ' << employee[i].getLastName() << " - " << employee[i].getWage() << " - " << employee[i].getAnualWage() << '\n';
    std::cout << employee[i].increaseWage(0.1) << std::endl;
  }
  return 0;
}
