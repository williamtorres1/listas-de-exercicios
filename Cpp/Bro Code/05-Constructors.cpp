#include <iostream>

class Student{
  public:
    std::string name;
    int age;
    double gpa;

    Student(std::string name, int age, double x){
      this->name = name;
      this->age = age;
      //Quando o nome do parâmmetro do constructor é diferente do atributo
      // então não precisa usar o 'this->'
      gpa = x;
    }
};

class Pizza{
  public:
    std::string topping1;
    std::string topping2;

    Pizza(){

    }
    Pizza(std::string topping1){
      this->topping1 = topping1;
    }
    Pizza(std::string topping1, std::string topping2){
      this->topping1 = topping1;
      this->topping2 = topping2;
    }
};

class Stove{
  private:
    int temperature;
  public:
    Stove(int temperature){
      setTemperature(temperature);
    }
    void setTemperature(int temperature){
      if (temperature < 0)
        this->temperature = 0;
      else if (temperature >= 10)
        this->temperature = 10;
      else this->temperature = temperature;
    }
    int getTemperature(){
      return this->temperature;
    }
};

/*
  Stove stove;
  stove.setTemperature(10000);//10
  stove.setTemperature(5);//5
  std::cout << "The temperature is " << stove.getTemperature() << " º\n";
*/

class Animal{
  public:
    bool alive = true;
    
    void eat(){
      std::cout << "This animal is eating!\n";
    }
};

class Dog : public Animal{
  public:
    void bark(){
      std::cout << "The dog goes woof!\n";
    }
};

class Cat : public Animal{
  public:
    void meow(){
      std::cout << "The cat goes meow!\n";
    }
};

/*
  Dog dog;
  std::cout << dog.alive() << '\n';
  dog.eat();
  dog.bark();

  Cat cat;

  dog.eat();
  dog.meow();
  dog.bark(); // Error!

*/

class Shape{
  public:
    double area;
    double volume;
};

class Cube : public Shape{
  public:
    double side;

    Cube(double side){
      this->side = side;
      this->area = 6 * side * side;
      this->volume = side * side * side;
    }
};

class Sphere : public Shape{
  public:
    double radius;
  Sphere(double radius){
    this->radius = radius;
    this->area = 4 * 3.14159 * radius * radius;
    this->volume = (4 / 3) * (3.14159 * radius * radius * radius);
  }

};

/*
  Sphere sphere(10);

  std::cout << "Area: " << sphere.area << " cm²\n";//314.159 cm²
  std::cout << "Volume: " << sphere.volume << " cm³\n";//523.598 cm³

  Cube cube(10);

  std::cout << "Area: " << cube.area << " cm²\n";//600 cm²
  std::cout << "Volume: " << cube.volume << " cm³\n";//1000 cm³
*/

int main(){
  Student student1("William", 24, 4.5);

  std::cout << student1.name << '\n';
  std::cout << student1.age << '\n';
  std::cout << student1.gpa << '\n';

  Pizza pizzaOne("peppers");
  Pizza pizzaTwo("pepperonni", "3 cheeses");
  Pizza pizzaThree;

  std::cout << pizzaTwo.topping1 << '\n';
  std::cout << pizzaTwo.topping2 << '\n';
  return 0;
}
