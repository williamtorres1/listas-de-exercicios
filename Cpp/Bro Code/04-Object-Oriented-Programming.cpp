#include <iostream>

class Human{
  public: 
    std::string name = "Ricky";
    std::string occupation = "Scientist";
    int age = 70;

    void eat(){
      std::cout << "This person is eating!\n";
    }
    void drink(){
      std::cout << "This person is drinking!\n";
    }
    void sleep(){
      std::cout << "This person is sleeping!\n";
    }
};

class Cars{
  public: 
    std::string make;
    std::string model;
    int year;
    std::string color;

    void accelerate(){
      std::cout << "You step on the gas!\n";
    }
    void brake(){
      std::cout << "You step on the brakes!\n";
    } 
};

int main(){
  Human humanOne;

  humanOne.name = "Ricky";
  humanOne.occupation = "Scientist";
  humanOne.age = 70;

  std::cout << humanOne.name << '\n';
  std::cout << humanOne.occupation << '\n';
  std::cout << humanOne.age << '\n';

  humanOne.eat();
  humanOne.drink();
  humanOne.sleep();

  Cars carOne;
  carOne.make = "Ford";
  carOne.model = "Mustang";
  carOne.year = 2024;
  carOne.color = "Black";

  std::cout << carOne.make << '\n';
  std::cout << carOne.model << '\n';
  std::cout << carOne.year << '\n';
  std::cout << carOne.color << '\n';

  carOne.accelerate();
  carOne.brake();

  return 0;
}
