#include <iostream>
#include <string>

/*
  Considere um sistema de uma agenda telefônica e de endereços que possui uma classe
    Pessoa e uma classe Endereco.
  Implemente a classe Endereco, com os atributos privados rua (string), número,
    bairro, cidade, estado e CEP (string).
  Crie um construtor que receba os parâmetro referentes a todos os atributos.
  Crie o método toString() que retorna todos os atributos da classe Endereço na
    forma de string.
  Implemente a classe Pessoa que possui os atributos privados nome (string),
    endereço (do tipo Endereco), e telefone (string).
  Considere também que ela possui dois construtores, um que só recebe o nome e
    outro que recebe nome, endereço (do tipo Endereco) e telefone, e métodos para
    obter e alterar esses atributos (métodos get e set).
  Crie também o método toString() que retorna todos os atributos da classe Pessoa
    na forma de string.​

  Em seguida, crie um programa principal que pergunta ao usuário quantas pessoas
    ele quer cadastrar, e, em seguida, lê todos os atributos da pessoa e os armazena
    em um vetor de pessoas.
  Por fim, exiba todas pessoas da agenda utilizando o método toString() de cada pessoa.
*/

class Persons{
  private:
    std::string name;
    std::string cellphone;
    std::string addressStr;
  public:
    Persons(){}
    Persons(std::string name, std::string cellphone, std::string address){
      this->name = name;
      this->cellphone = cellphone;
      addressStr = address;
    }
    std::string toString(){
      return name + ", " + cellphone;
    }
    std::string getAddress(){
      return addressStr;
    }
};

class Address{
  private:
    std::string street;
    int number;
    std::string neighbourhood;
    std::string city;
    std::string state;
    std::string cep;
  public:
    Address(){}
    Address(std::string street, int number, std::string neighbourhood, std::string city, std::string state, std::string cep){
      this->street = street;
      this->number = number;
      this->neighbourhood = neighbourhood;
      this->city = city;
      this->state = state;
      this->cep = cep;
    }
    std::string toString(){
      std::string numberStr = std::to_string(number);
      return street + ", " + numberStr + ", " + neighbourhood + ". " + city + " - " + state + ". " "CEP: "+ cep;
    }
};

int main(){
  int quantity, number = 0;
  std::cin >> quantity;
  Persons *persons = new Persons[quantity];
  for (int i = 0; i < quantity; i++){
    std::string name, cellphone, street, neighbourhood, city, state, cep;
    std::getline(std::cin >> std::ws, name);
    std::getline(std::cin >> std::ws, cellphone);
    std::getline(std::cin >> std::ws, street);
    std::cin >> number;
    std::cin.ignore();
    std::getline(std::cin >> std::ws, neighbourhood);
    std::getline(std::cin >> std::ws, city);
    std::getline(std::cin >> std::ws, state);
    std::getline(std::cin >> std::ws, cep);
    std::string address;
    Address addr(street, number, neighbourhood, city, state, cep);
    address = addr.toString();
    persons[i] = Persons(name, cellphone, address);
  }
  for (int i = 0; i < quantity; i++){
    std::cout << persons[i].toString() << std::endl;
    std::cout << persons[i].getAddress() << std::endl;
    std::cout << "\n";
  }
  delete[] persons;
  return 0;
}
