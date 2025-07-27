#include <iostream>

namespace first{
  int x = 1;
}

namespace second{
  int x = 2;
}

int main(){
  int x = 30;

  using namespace std;
  cout << second::x;
}
