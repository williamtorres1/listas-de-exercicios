#include <iostream>

class Peoples{
  public:
    std::string fullName;
    unsigned int age;
    std::string phoneNumber;
  
};

int main(){
  Peoples people[2];

  for (int i = 0; i < 2; i++){
    std::getline(std::cin >> std::ws, people[i].fullName);
    std::cin >> people[i].age;
    std::getline(std::cin >> std::ws, people[i].phoneNumber);
    //std::cin.ignore();
  }
  for (int i = 0; i < 2; i++){
    std::cout << people[i].fullName << ", " << people[i].age << ", " << people[i].phoneNumber << std::endl;
  }
  return 0;
}
