#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

class Funcionario{
  protected:
    string nome;
    int matricula;
  public:
    Funcionario();
    Funcionario(string nome, int matricula);
    string getNome();
    virtual double calculaSalario() = 0;
};

Funcionario::Funcionario(){ }

Funcionario::Funcionario(string nome, int matricula){
  this -> nome = nome;
  this -> matricula = matricula;
}

string Funcionario::getNome(){
  return nome;
}

class Assalariado : public Funcionario{
  protected:
    double salario;
  public:
    Assalariado();
    Assalariado(string nome, int matricula, double salario);
    double calculaSalario();
};

Assalariado::Assalariado(){ }

Assalariado::Assalariado(string nome, int matricula, double salario):Funcionario(nome, matricula){
  this -> salario = salario;
}

double Assalariado::calculaSalario(){
  return salario;
}

class Comissionados : public Funcionario{
  protected: 
    double vendasSemanais;
    double percentualComissao;
  public:
    Comissionados();
    Comissionados(string nome, int matricula, double vendasSemanais, double percentualComissao);
    double calculaSalario();
};

Comissionados::Comissionados(){ }  

Comissionados::Comissionados(string nome, int matricula, double vendasSemanais, double percentualComissao):Funcionario(nome, matricula){ 
  this -> vendasSemanais = vendasSemanais;
  this -> percentualComissao = percentualComissao;
}  

double Comissionados::calculaSalario(){
  //vendasSemanais = vendasSemanais*percentualComissao*4;
  return vendasSemanais*percentualComissao;
}

class FuncionarioNaoExisteException : public exception{
  private:
    string mensagem;
  public:
    FuncionarioNaoExisteException();
    FuncionarioNaoExisteException(string e);
    string what();
};

FuncionarioNaoExisteException::FuncionarioNaoExisteException(){ }

FuncionarioNaoExisteException::FuncionarioNaoExisteException(string e){
  mensagem = "FuncionarioNaoExisteException " + e;  
}

string FuncionarioNaoExisteException::what(){
  return mensagem;
}

class Horistas : public Funcionario {
protected:
  double salarioPorHora;
  int horasTrabalhadas;

public:
  Horistas();
  Horistas(string nome, int matricula, double salarioPorHora, int horasTrabalhadas);
  double calculaSalario();
};

Horistas::Horistas() {}

Horistas::Horistas(string nome, int matricula, double salarioPorHora, int horasTrabalhadas): Funcionario(nome, matricula) {
  this->salarioPorHora = salarioPorHora;
  this->horasTrabalhadas = horasTrabalhadas;
}

double Horistas::calculaSalario() {
  double extra = 0;
  double fixo = 0;
  if (horasTrabalhadas <= 40)
    fixo = horasTrabalhadas * salarioPorHora;
  else
    {fixo = 40 * salarioPorHora;
    extra = (horasTrabalhadas - 40) * 1.5 * salarioPorHora;}
  return (fixo + extra)*4;
}

class OrcamentoEstouradoException : public exception{
  private:
    string orcamento;
  public:
    OrcamentoEstouradoException();
    OrcamentoEstouradoException(int e);
    string what();
};

OrcamentoEstouradoException::OrcamentoEstouradoException(){ }

OrcamentoEstouradoException::OrcamentoEstouradoException(int e){
  orcamento = "OrcamentoEstouradoException " + to_string(e);  
}

string OrcamentoEstouradoException::what(){
  return orcamento;
}

class Sistema{
  protected:
    Funcionario *funcionarios[50];
    double orcamentoMax;
  public:
    Sistema();
    Sistema(double orcamentoMax);
    void setFuncionario(Funcionario *fun, int pos);
    double calculaValorTotalFolha();
    double consultaSalarioFuncionario(string nome);
};

Sistema::Sistema(){ 
  for(int i = 0; i < 50; i++){
    funcionarios[i] = 0;
  }
}

Sistema::Sistema(double orcamentoMax){
  this -> orcamentoMax = orcamentoMax;
}

void Sistema::setFuncionario(Funcionario *fun, int pos){
  funcionarios[pos] = fun;
}

double Sistema::consultaSalarioFuncionario(string nome){
  for(int i = 0; i < 50; i++){
    if(funcionarios[i] && funcionarios[i]->getNome() == nome){
      return funcionarios[i]->calculaSalario();
    }
  }
  throw new FuncionarioNaoExisteException(nome);
}

double Sistema::calculaValorTotalFolha(){
  double total = 0;
  for(int i = 0; i < 50; i++){
    if(funcionarios[i])
      total += funcionarios[i]->calculaSalario();
  }
  if(total < orcamentoMax){
    return total;
  }
  throw new OrcamentoEstouradoException(total);
}

int main() {
  double budget;
  cin >> budget;
  getchar();
  Sistema *system = new Sistema(budget);

  int index = 0;
  string nome;
  double salarioPorHora, vendasSemanais, percent;
  int matricula, salario, horasTrabalhadas;

  getline(cin, nome);
  cin >> matricula;
  cin >> salario;
  getchar();
  system->setFuncionario(new Assalariado(nome, matricula, salario), index++);

  getline(cin, nome);
  cin >> matricula;
  cin >> salarioPorHora;
  cin >> horasTrabalhadas;
  getchar();
  system->setFuncionario(new Horistas(nome, matricula, salarioPorHora, horasTrabalhadas), index++);

  getline(cin, nome);
  cin >> matricula;
  cin >> vendasSemanais;
  cin >> percent;
  getchar();
  system->setFuncionario(new Comissionados(nome, matricula, vendasSemanais, percent), index++);


  for(int i = 0; i < 3; i++){
    getline(cin, nome);
    try {
      double salario1 = system->consultaSalarioFuncionario(nome);
      cout << salario1 << endl; 
    } catch (FuncionarioNaoExisteException *e){
      cout << e->what() << endl;
    }   
  }
  
  try{
    cout << system->calculaValorTotalFolha() << endl;  
  }catch(OrcamentoEstouradoException *e){
    cout << e->what() << endl;
  }
  return 0;
}
