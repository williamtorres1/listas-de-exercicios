  #include <iostream>

  class Invoices{
    public:
      unsigned int number;
      std::string itemName;
      int quantity;
      double price;

      void setQuantity(int quantity){
        if(quantity < 0){
          this->quantity = 0;
        }
        else this->quantity = quantity;
      }

      double getPrice(){
        if (price < 0){
          return 0;
        }
        return price;
      }

      double getTotal(){
        if (quantity < 0 || price < 0) return 0;
        return price * quantity;
      }
  };

  int main(){
    Invoices invoice[2];
    std::string value;

    for(int i = 0; i < 2; i++){
      std::cin >> invoice[i].number;
      std::getline(std::cin >> std::ws, invoice[i].itemName);
      int quantity;
      std::cin >> quantity;
      invoice[i].setQuantity(quantity);
      std::cin >> invoice[i].price;    
    }
    for(int i = 0; i < 2; i++){
      std::cout << invoice[i].number << " - ";
      std::cout << invoice[i].itemName << " - ";
      std::cout << invoice[i].quantity << " - ";
      std::cout << invoice[i].getPrice() <<  " - ";
      std::cout << invoice[i].getTotal() << std::endl;    
    }
    return 0;
  }
