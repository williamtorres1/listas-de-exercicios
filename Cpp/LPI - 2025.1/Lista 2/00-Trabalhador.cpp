#include <iostream>
#include <vector>

/*
  Crie um sistema para uma empresa com as classes Trabalhador e classes derivadas
    (herença) TrabalhadorPorHora e TrabalhadorAssalariado.
  A classe Trabalhador tem os atributos protected nome e salário; e os métodos get e set.
  E possui as seguintes especificações:
    Em seu construtor inicie o salário com zero.
    O salário do TrabalhadorAssalariado é referente ao seu salário mensal. 
    E possui seguintes especificações:​
      Em seu construtor inicie o valor do salário com o valor passado como parâmetro.​
      O trabalhador assalariado é pago pela carga horária de 40 horas, 
        independentemente de qual seja o número real de horas trabalhadas.
      ​float calcularPagamentoSemanal(). 
        Pagamento semanal é o valor do salario mensal dividido por 4.
  A classe TrabalhadorPorHora possui um atributo privado valorDaHora
    E possui as seguintes especificações:​
      Em seu construtor inicia valorDaHora com o valor passado como parâmetro.
      float calcularPagamentoSemanal(int horasSemanais). 
        Calcula o pagamento semanal do trabalhador e retorna o valor. 
        Neste método calcule também o salário mensal estimado do TrabalhorPorHora,
          multiplicando o semanal por 4, e armazenando-o no atributo salário.
      ​O trabalhador que ganha por hora é pago, de acordo com o número real de horas
        trabalhadas semanais.
      Se ele trabalhou mais de 40 horas, cada hora excedente é paga como hora extra
        e seu valor é equivalente uma hora e meia normal. 
  Considere que as classes possuem os seguintes tipos numéricos:
    1 TrabalhadorAssalariado
    2 TrabalhadorPorHora
  Crie um programa principal que lê N trabalhadores. 
  Inicialmente, leia o valor de N, e, em seguida, o tipo do trabalhador, e seus atributos.
  Para o TrabalhadorAssalariado leia os atributos nome e salário, e para o TrabalhadorPorHora
    leia o nome, o valorDaHora, e a quantidade de horasSemanais.
  Instancie o trabalhador de acordo com o seu tipo e exiba suas informações.
*/

class Workers{
  protected:
    int type;
    double salary;
    std::string name;
  public:
    Workers(): salary(0){}
    void setSalary(int salary){
      this->salary = salary;
    }
    double getSalary(){
      return salary;
    }
    void setName(std::string name){
      this->name = name;
    }
    std::string getName(){
      return name;
    }
};

class WorkersPerHour: public Workers{
  private:
    double hourValue;
  public:
    WorkersPerHour(std::string name, int hourValue){
      this->setName(name);
      this->hourValue = hourValue;
      this->type = 2;
    }
    double calculateSemanalSalary(double semanalHours){
      double semanalWage = 0;
      if (semanalHours > 40){
        semanalWage = (semanalHours * hourValue) + (semanalHours - 40) * hourValue * 0.5;
      }
      else semanalWage = hourValue * semanalHours;
      this->setSalary(semanalWage * 4);
      return semanalWage;
    }
    double calculateMonthSalary(){
      return hourValue * 4;
    }
};

class WorkersPerMonthSalary: public Workers{
  public:
    WorkersPerMonthSalary(std::string name, double salary){
      setName(name);
      setSalary(salary);
      this->type = 1;
    }
    double calculateSemanalSalary(){
      return this->salary / 4;
    }
};

int main(){
  int n;
  std::cin >> n;
  std::cin.ignore();
  do{
    int type;
    std::cin >> type;
    std::cin.ignore();
    switch(type){
      case 1:{
        std::string name;
        double salary;
        std::getline(std::cin >> std::ws, name);
        std::cin >> salary;
        std::cin.ignore();
        WorkersPerMonthSalary worker(name, salary);
        double semanalWage = worker.calculateSemanalSalary();
        std::cout << worker.getName() << " - Semanal: R$ " << semanalWage << " - Mensal: R$ " << worker.getSalary() << std::endl;
        break;
      }
      case 2:{
        std::string name;
        double hoursWorked, hoursValue;
        std::getline(std::cin >> std::ws, name);
        std::cin >> hoursValue >> hoursWorked;
        std::cin.ignore();
        WorkersPerHour worker(name, hoursValue);
        double semanalWage = worker.calculateSemanalSalary(hoursWorked);

        std::cout << worker.getName() << " - Semanal: R$ " << semanalWage << " - Mensal: R$ " << worker.getSalary() << std::endl;
        break;
      }
    }
    n--;
  }while(n != 0);
  return 0;
}
