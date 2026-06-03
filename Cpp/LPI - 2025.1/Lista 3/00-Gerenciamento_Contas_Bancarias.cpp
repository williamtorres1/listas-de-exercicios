#include <iostream>
#include <iomanip>

using namespace std;

class Conta {
  protected:
    string nomeCliente;
    int numero;
    double saldo;
  public:
    Conta(
      string nomeCliente="",
      int numero = 0, 
      double saldo = 0.0
    );

    virtual void sacar(double valor);
    void depositar(double valor);

    string getNomeCliente(){ return nomeCliente; };
    int getNumero(){ return numero; };
    double getSaldo(){ return saldo; };

    void setNomeCliente(string nomeCliente){ this->nomeCliente = nomeCliente; };
    void setNumero(int numero){ this->numero = numero; };
    void setSaldo(double saldo){ this->saldo = saldo; };

    virtual double total(){ return saldo; };
        
};

Conta::Conta(string nome, int num, double saldo){
  setNomeCliente(nome);
  setNumero(num);
  setSaldo(saldo);
}

void Conta::sacar(double valor){
  if(valor > 0 && valor <= saldo){
    saldo -= valor;
  }
  else {
    cout << "Saldo insuficiente" << endl;
  }
}

void Conta::depositar(double valor){
  if(valor > 0){
    saldo += valor;
  }
}

class ContaCorrente : public Conta {
  protected:
    double salario;
    double limite;

  public:
    ContaCorrente(string nomeCliente="", int numero = 0, double saldo = 0.0, double salario = 0.0);

    void definirLimite();
    virtual void sacar(double valor);

    double getSalario(){ return salario; };
    double getLimite(){ return limite; };

    void setSalario(double salario){ this->salario = salario; };
    double total(){ return saldo + limite; };
};

ContaCorrente::ContaCorrente(string n, int num, double saldo, double salario) : Conta(n, num, saldo){
  setSalario(salario);
  definirLimite();
}

void ContaCorrente::definirLimite(){
  limite = 2 * salario;
}

void ContaCorrente::sacar(double valor) {
  if(valor > 0 && valor <= (saldo + limite)){
    saldo -= valor;
  }
  else {
    cout << "Saldo insuficiente" << endl;
  }
}

class ContaPoupanca : public Conta {
  protected:
    double taxaRendimento;
    int variacao;

  public:
    ContaPoupanca(string nomeCliente="", int numero = 0, double saldo = 0.0, double taxaRendimento = 0.006, int variacao = 51);

    double render();

    double getTaxaRendimento(){ return taxaRendimento; };
    int getVariacao(){ return variacao; };

    void setTaxaRendimento(double taxaRendimento){ this->taxaRendimento = taxaRendimento; };
    void setVariacao(int variacao){ this->variacao = variacao; };
};

ContaPoupanca::ContaPoupanca(string n, int num, double saldo, double taxaRendimento, int variacao) : Conta(n, num, saldo){
  setTaxaRendimento(taxaRendimento);
  setVariacao(variacao);
}

double ContaPoupanca::render(){
  double saldoAnterior = getSaldo();
  if(getVariacao() == 51){
    setSaldo(saldoAnterior + (saldoAnterior * taxaRendimento));
  }
  else if(getVariacao() == 1){
    setSaldo(saldoAnterior + (saldoAnterior * (taxaRendimento + 0.005)));
  }

  return getSaldo();
}

class ContaEspecial : public ContaCorrente {
  public:
    ContaEspecial(string nomeCliente="", int numero = 0, double saldo = 0.0, double salario = 0.0);

    void definirLimite();
};

ContaEspecial::ContaEspecial(string n, int num, double saldo, double salario) : ContaCorrente(n, num, saldo, salario){
  definirLimite();
}

void ContaEspecial::definirLimite(){
  limite = 4 * salario;
}

int main(void){
  string nome;
  int num;
  double salario;
  double deposito;
  double saque;

  // Conta Corrente
  getline(cin, nome);
  cin >> num;
  cin >> salario;
  cin >> deposito;
  cin >> saque;
  cin.ignore();
  
  ContaCorrente *conta = new ContaCorrente(nome, num, 0, salario);
  conta->depositar(deposito);
  conta->sacar(saque);
  cout << conta->getNomeCliente() << ", cc: " << conta->getNumero() << ", salário " << conta->getSalario() << ", ";
  cout << "saldo total disponível: R$ " << fixed << setprecision(0) << conta->total() << endl;
  
  getline(cin, nome);
  cin >> num;
  cin >> salario;
  cin >> deposito;
  cin >> saque;
  cin.ignore();
  
  ContaEspecial *contaEspecial = new ContaEspecial(nome, num, 0, salario);
  contaEspecial->depositar(deposito);
  double saldoAntesSaque = contaEspecial->getSaldo();
  double limiteAntesSaque = contaEspecial->getLimite();
  
  contaEspecial->sacar(saque);
  cout << contaEspecial->getNomeCliente() << ", cc: " << contaEspecial->getNumero() << ", salário " << contaEspecial->getSalario() << ", ";
  cout << "saldo total disponível: R$ " << fixed << setprecision(0) << contaEspecial->total() << endl;
  
  getline(cin, nome);
  cin >> num;
  cin >> deposito;
  cin >> saque;
  cin.ignore();
  
  ContaPoupanca *contaPoupanca = new ContaPoupanca(nome, num, 0);
  contaPoupanca->depositar(deposito);
  contaPoupanca->sacar(saque);
  double saldoFinal = contaPoupanca->render();
  
  cout << contaPoupanca->getNomeCliente() << ", cc: " << contaPoupanca->getNumero() << ", ";
  if (saldoFinal == static_cast<int>(saldoFinal)) {
    cout << "saldo total disponível: R$ " << static_cast<int>(saldoFinal) << endl;
  } else {
    cout << "saldo total disponível: R$ " << fixed << setprecision(1) << saldoFinal << endl;
  }
  
  return 0;
}
