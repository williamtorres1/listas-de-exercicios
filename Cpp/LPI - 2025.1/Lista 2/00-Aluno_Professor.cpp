#include <iostream>

class Pessoas{
  protected:
    std::string name;
    std::string cellphone;
    std::string cpf;
  public:
    virtual void show(){
      std::cout << name << " - " << cellphone << " - " << "CPF: "<<cpf << std::endl;
    }
    Pessoas(){}
    Pessoas(std::string name, std::string cellphone, std::string cpf){
      this->name = name;
      this->cellphone = cellphone;
      this->cpf = cpf;
    }
};
class Alunos: protected Pessoas{
  private:
    double cra;
    int semester;
  public:
    Alunos(){}
    Alunos(std::string name, std::string cellphone, std::string cpf, double cra, int semester){
      this->name = name;
      this->cellphone = cellphone;
      this->cpf = cpf;
      this->cra = cra;
      this->semester = semester;
    }
    void show()override{
      Pessoas::show();
      std::cout << "CRA: " << cra << " - " << "Semestre: " << semester << std::endl;
    }
};
class Professores: protected Pessoas{
  private:
    std::string department;
    unsigned int quantidadeDisciplinas;
  public:
    Professores(){}
    Professores(std::string name, std::string cellphone, std::string cpf, std::string department, unsigned int quantidade){
      this->name = name;
      this->cellphone = cellphone;
      this->cpf = cpf;
      this->department = department;
      this->quantidadeDisciplinas = quantidade;
    }
    void show()override{
      Pessoas::show();
      std::cout << "Qtd: " << quantidadeDisciplinas << " - " << department << std::endl;
    }
};

int main(){
  std::string name, cpf, cellphone, department;
  double cra;
  int semester, quantidade;

  std::getline(std::cin >> std::ws, name);
  std::getline(std::cin >> std::ws, cellphone);
  std::getline(std::cin >> std::ws, cpf);
  Pessoas pessoa(name, cellphone, cpf);
  pessoa.show();
  std::getline(std::cin >> std::ws, name);
  std::getline(std::cin >> std::ws, cellphone);
  std::getline(std::cin >> std::ws, cpf);
  std::cin >> cra;  
  std::cin >> semester;
  Alunos aluno(name, cellphone, cpf, cra, semester);
  aluno.show();
  std::getline(std::cin >> std::ws, name);
  std::getline(std::cin >> std::ws, cellphone);
  std::getline(std::cin >> std::ws, cpf);
  std::cin >> quantidade;
  std::getline(std::cin >> std::ws, department);
  Professores professor(name, cellphone, cpf, department, quantidade);
  professor.show();
  return 0;
}
