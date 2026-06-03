#include <iostream>
#include <string>

using namespace std;

class IConta {
  public:
    virtual double saldoTotalDisponivel() = 0;
    virtual void sacar(double valor) = 0;
    virtual void depositar(double valor) = 0;
};

class Conta : public IConta {
  protected:
    string nomeCliente;
    string numeroConta;
    double salarioMensal;
    double saldo;
    double limite;

  public:
    Conta(string nomeCliente, string numeroConta, double salarioMensal) {
      this->nomeCliente = nomeCliente;
      this->numeroConta = numeroConta;
      this->salarioMensal = salarioMensal;
      this->saldo = 0;
      definirLimite();
    }

    virtual double saldoTotalDisponivel() {
      return saldo + limite;
    }

    virtual void sacar(double valor) {
      double saldoTotal = saldoTotalDisponivel();
      if (valor <= saldoTotal) {
        saldo -= valor;
      }
    }

    virtual void depositar(double valor) {
      saldo += valor;
    }

    string getNomeCliente() {
      return nomeCliente;
    }

    void setNomeCliente(string nomeCliente) {
      this->nomeCliente = nomeCliente;
    }

    string getNumeroConta() {
      return numeroConta;
    }

    void setNumeroConta(string numeroConta) {
      this->numeroConta = numeroConta;
    }

    double getSalarioMensal() {
      return salarioMensal;
    }

    void setSalarioMensal(double salarioMensal) {
      this->salarioMensal = salarioMensal;
      definirLimite();
    }

    double getSaldo() {
      return saldo;
    }

    void setSaldo(double saldo) {
      this->saldo = saldo;
    }

    double getLimite() {
      return limite;
    }

  protected:
    virtual void definirLimite() {
      limite = 2 * salarioMensal;
    }
};

class ContaEspecial : public Conta {
  public:
    ContaEspecial(string nomeCliente, string numeroConta, double salarioMensal) :
      Conta(nomeCliente, numeroConta, salarioMensal){
        definirLimite();
      }
    
    void definirLimite() {
      limite = 3 * salarioMensal;
    }
};

int main() {
  Conta* conta[2];
  string nome;
  string numero;
  double salario;
  double deposito, saque;

  for(int i = 0; i < 2; i++){
    getline(cin, nome);
    getline(cin, numero);
    cin >> salario;
    cin >> deposito;
    cin >> saque;
    cin.ignore();

    if(i == 0)
      conta[i] = new Conta(nome, numero, salario); 
    else {
      conta[i] = new ContaEspecial(nome, numero, salario);
    }
    
    conta[i]->depositar(deposito);
    conta[i]->sacar(saque);
  }

  for(int i = 0; i < 2; i++){
    cout << conta[i]->getNomeCliente() << ", cc: " << conta[i]->getNumeroConta() << ", salário " << conta[i]->getSalarioMensal() << ", saldo total disponível: R$ " << conta[i]->saldoTotalDisponivel() << endl;
  }

  return 0;
}
