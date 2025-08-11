#include <iostream>

class Employees{
  public:
    std::string firstName;
    std::string lastName;
    int wage;

    Employees(){
      wage = 0;
    }
    float getAnualWage(){
      return wage * 12; 
    }
};

int main(){
  unsigned int n;
  std::cin >> n;
  Employees *employee = new Employees[n];

  for(unsigned int i = 0; i < n; i++){
    std::getline(std::cin >> std::ws, employee[i].firstName);
    std::getline(std::cin >> std::ws, employee[i].lastName);
    std::cin >> employee[i].wage;
    std::cin.ignore();
  }
  for (unsigned int i = 0; i < n; i++){
    std::cout << employee[i].firstName << ' ' << employee[i].lastName << " - " << employee[i].wage << " - " << employee[i].getAnualWage() << '\n';
  }
  return 0;
}
