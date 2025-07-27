#include <iostream>
#include <vector>
namespace first{
  int x = 1;
}

namespace second{
  int x = 2;
}

// Typedef cria um alias para um outro tipo de dados, similar ao struct no C
typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
//typedef int number_t;

// Outra forma de fazer, funciona melhor com templates (mais recomendável).
//using text_t = std::string;
using number_t = int;

int main(){
  int x = 30;

  using namespace std;
  cout << second::x << endl;

  number_t age = 24;
  cout << age << endl;

  text_t firstName;
  // cout << "What's your name?";
  // std::cin >> firstName;
  // std::cout << "Hello, " << firstName;

  std::cout << "What's your full name? ";
  // Captura a string com espaços e limpa o buffer do teclado
  std::getline(std::cin >> std::ws,firstName);
  std::cout << "Hello, " << firstName;
  return 0;
}
