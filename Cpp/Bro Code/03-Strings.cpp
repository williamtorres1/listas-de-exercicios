#include <iostream>

int main(){

  std::string name;
  std::cout << "What's your name? ";
  std::getline(std::cin >> std::ws, name); // William

  if (name.empty()){
    std::cout << "Your name can't be empty";
  } else std::cout << "Your name length is " << name.length() << std::endl;

  name.append("@gmail.com");
  std::cout << "Your email and username now is: " << name;
  
  std::cout << name.at(0) << std::endl; // W

  name.find('a'); // 5
  name.insert(0, "@"); //@William@gmail.com
  name.erase(0,2); // liam@gmail.com
  std::cout << name;
  name.clear();

  return 0;
}

// Sobrecarga de funções | Overloaded functions
void bakePizza(){
  std::cout << "Here's your pizza!\n";
}

void bakePizza(std::string topping1){
  std::cout << "Here's your " << topping1 << " pizza!\n"; 
}

void bakePizza(std::string topping1, std::string topping2){
  std::cout << "Here's your " << topping1 << " and " << topping2 << " pizza!\n";
}

/*
  bakePizza(); // Here's your pizza!
  bakePizza("pepperonni"); // Here's your pepperonni pizza!
  bakePizza("pepperonni", "mushrooms"); // Here's your pepperonni and mushrooms pizza!
*/

//Foreach loop

void gradeArray(){
  int grades[] = {65, 72, 81, 93};
  for (int grade : grades){
    std::cout << grade << ' '; //65 72 81 93  
  }
}

// Template functions

template <typename T, typename U>
auto max(T x, U y){
  return (x > y) ? x : y;
}

/*
  max(1, 2.1) //2.1
*/
