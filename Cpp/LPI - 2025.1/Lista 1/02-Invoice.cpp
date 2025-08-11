#include <iostream>

class Invoice {
  private:
    int number;
    std::string description;
    int quantity;
    double price;
  public:
    void setNumber(int number) {
      this->number = number;
    }
    int getNumber(){
      return number;
    }
    void setDescription(std::string description) {
      this->description = description;
    }
    std::string getDescription(){
      return description;
    }
    void setQuantity(int quantity) {
      if (quantity < 0){
        this->quantity = 0;
        return;
      }
      this->quantity = quantity;
    }
    int getQuantity(){
      return quantity;
    }
    void setPrice(double price) {
      if (price < 0) {
        this->price = 0; 
        return;
      }
      this->price = price;
    }
    double getPrice(){
      return price;
    }
    double getTotal(){
      return (price * quantity);
    }
    // Invoice(int n, std::string d, int q, double p){
    //   number = n;
    //   description = d;
    //   quantity = q;
    //   price = p;
    // };

    // Invoice(){
    //   number = 0;
    //   description = "";
    //   quantity = 0;
    //   price = 0;
    // }
    void printAll(){
      std::cout << number << " - " << description << " - " << quantity << " - "<< price << " - " << getTotal() << std::endl;
    }
};

int main(){
  Invoice invoice[2];
  int number;
  std::string description;
  int quantity;
  double price;
  for (int i = 0; i < 2; i++) {
    std::cin >> number;
    std::cin.ignore();
    invoice[i].setNumber(number);
    std::getline(std::cin >> std::ws, description);
    invoice[i].setDescription(description);
    std::cin >> quantity;
    std::cin.ignore();
    invoice[i].setQuantity(quantity);
    std::cin >> price;
    invoice[i].setPrice(price);
    std::cin.ignore();
  }
  for (int i = 0; i < 2; i++){
    invoice[i].printAll();
  }
  return 0;
}
