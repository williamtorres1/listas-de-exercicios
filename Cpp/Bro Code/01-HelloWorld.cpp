#include <iostream>

int main(){
  std::cout << "Hello World and I Like Pizza!" << std::endl;
  // Com o '\n' é mais performático, mas não limpa o buffer do output
  std::cout << "Because it's really good!" << '\n';

  int x, y = 6; // Declaração da variável.
  x = 5; // Atribuição da variável.
  std::cout << x << " + "<< y << " = "<< x + y << std::endl;

  int age = 21, year = 2025;
  double days = 7.5, price = 10.99, cra = 2.5;
  std::cout << days << std::endl;
  std::cout << price << std::endl;
  std::cout << cra << std::endl;


  char initial = 'W';
  char dollarSign = '$';

  bool student = false;
  bool power = true;
  bool forSale = true;

  std::string name = "William";
  std::string lastName = "Torres";

  std::cout << name << std::endl;
  
  // Variáveis que não serão sobrescritas posteriormente pelo programa
  const double PI = 3.14159;
  const int LIGHT_SPEED = 299792458;
  const int WIDTH = 1920;
  const int HEIGTH = 1080;

  return 0;
}
