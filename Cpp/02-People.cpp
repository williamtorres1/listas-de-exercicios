#include <iostream>

class Peoples{
  private:
    std::string fullName;
    unsigned int age;
    std::string phoneNumber;
  
  public:
    Peoples(){
      fullName = "";
      age = 0;
      phoneNumber = "";
    }
    std::string getPhoneNumber(){
      return phoneNumber;
    }
    void setPhoneNumber(std::string phoneNumber){
      this->phoneNumber = phoneNumber;
    }
    std::string getFullName(){
      return fullName;
    }
    void setFullName(std::string fullName){
      this->fullName = fullName;
    }
    unsigned int getAge(){
      return age;
    }
    void setAge(int age){
      if(age < 0){
        this->age = 0;
      } else this->age = age;
    }
};

int main(){
  unsigned int n;
  int res, exists;
  std::cin >> n;
  Peoples *people = new Peoples[n];
  
  for (unsigned int i = 0; i < n; i++){
    std::string value;
    std::getline(std::cin >> std::ws, value);
    people[i].setFullName(value);
    int age;
    std::cin >> age;
    people[i].setAge(age);
    std::getline(std::cin >> std::ws, value);
    people[i].setPhoneNumber(value);
  }
  std::string searchString;
  std::getline(std::cin >> std::ws, searchString);
  for(unsigned int i = 0; i < n; i++){
    std::string temporaryString = people[i].getFullName();
    res = temporaryString.find(searchString);
    if (res != std::string::npos){
      std::cout << people[i].getFullName() << ", " << people[i].getAge();
      std::cout << ", " << people[i].getPhoneNumber() << std::endl;
      exists++;
    }
  }
  if (res == std::string::npos && !exists){
    std::cout << "Pessoa não encontrada" << std::endl;
  }
  return 0;
}
