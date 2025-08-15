#include <iostream>

/*
  Crie um sistema para uma empresa para gerenciar os seus Funcionários e Consultores,
    seguindo a seguinte especificação:
    - A classe Funcionario com os atributos protected matrícula, nome e salário,
        e os métodos públicos get() e set() de cada atributo.
      Em seu construtor inicie salário e matrícula com o valor zero.
    - A classe Consultor herda da classe Funcionario, e possui os seguintes métodos:
      float getSalario().
        Sobrescreve o método, retornando o salário acrescido de um percentual de 10%. 
      float getSalario(float percentual).
        O parâmetro percentual, varia entre 0 e 1. 
        Deve ser retornando o salário acrescido do valor indicado no parâmetro percentual.

  Na função main() teste as classes Funcionario e Consultor.
  No programa crie 1 objeto da classe Funcionario e 1 Consultor, nesta ordem, leia
    seus dados e exiba seus atributos.
*/
class Workers{
  protected:
    unsigned int registry;
    std::string name;
    unsigned int salary;
  public:
    Workers(){
      this->registry = 0;
      this->name = "";
      this->salary = 0;
    }
    Workers(unsigned int registry, std::string name, unsigned int salary){
      this->registry = registry;
      this->name = name;
      this->salary = salary;
    }
    std::string getName(){
      return name;
    }
    void setName(std::string name){
      this->name = name;
    }
    unsigned int getRegistry(){
      return registry;
    }
    void setRegistry(unsigned int registry){
      this->registry = registry;
    }
    virtual unsigned int getSalary(){
      return salary;
    }
    void setSalary(unsigned int salary){
      this->salary = salary;
    }
};
class Consultants: public Workers{
  public:
    unsigned int getSalary()override {
      return this->salary + (this->salary * 0.1);
    }
    unsigned int getSalary(double percentage){
      return this->salary + (this->salary * percentage);
    }
};

int main(){
  unsigned int registry, salary;
  std::string name;

  Workers worker;
  Consultants consultant;

  std::cin >> registry;
  std::cin.ignore();
  worker.setRegistry(registry);
  
  std::getline(std::cin >> std::ws, name);
  worker.setName(name);


  std::cin >> salary;
  std::cin.ignore();
  worker.setSalary(salary);

  std::cin >> registry;
  std::cin.ignore();
  consultant.setRegistry(registry);
  
  std::getline(std::cin >> std::ws, name);
  consultant.setName(name);

  std::cin >> salary;
  std::cin.ignore();
  consultant.setSalary(salary);
  
  std::cout << worker.getRegistry() << " - " << worker.getName() << " - ";
  std::cout << "R$ "<< worker.getSalary() << std::endl;
  
  std::cout << consultant.getRegistry() << " - " << consultant.getName() << " - ";
  std::cout << "R$ "<< consultant.getSalary() << std::endl;
  
  return 0;
}
