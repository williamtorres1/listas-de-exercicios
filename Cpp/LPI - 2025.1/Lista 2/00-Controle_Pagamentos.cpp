#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Pagamento {
  private:
    float valorPagamento;
    string nomeDoFuncionario;

  public:
    Pagamento() : valorPagamento(0) {}
    
    void setValorPagamento(float valor) {
      valorPagamento = valor;
    }
    
    float getValorPagamento() {
      return valorPagamento;
    }
    
    void setNomeDoFuncionario(string nome) {
      nomeDoFuncionario = nome;
    }
    
    string getNomeDoFuncionario() {
      return nomeDoFuncionario;
    }
};

class ControleDePagamentos {
  private:
    vector<Pagamento> pagamentos;

  public:
    void setPagamento(Pagamento p, int index) {
      if (index >= pagamentos.size()) {
        pagamentos.resize(index + 1);
      }
      pagamentos[index] = p;
    }
    
    Pagamento getPagamento(int pos) {
      if (pos < pagamentos.size()) {
        return pagamentos[pos];
      }
      return Pagamento();
    }
    
    float calculaTotalDePagamentos() {
      float total = 0;
      for (Pagamento p : pagamentos) {
        total += p.getValorPagamento();
      }
      return total;
    }
    
    int getIndexFuncionario(string nomeFuncionario) {
      for (int i = 0; i < pagamentos.size(); i++) {
        // Busca por correspondência parcial no nome
        if (pagamentos[i].getNomeDoFuncionario().find(nomeFuncionario) != string::npos) {
          return i;
        }
      }
      return -1;
    }
};

int main() {
  int n;
  cin >> n;
  cin.ignore();
  
  ControleDePagamentos controle;
  
  for (int i = 0; i < n; i++) {
    float valor;
    string nome;
    
    cin >> valor;
    cin.ignore();
    getline(cin, nome);
    
    Pagamento p;
    p.setValorPagamento(valor);
    p.setNomeDoFuncionario(nome);
    
    controle.setPagamento(p, i);
  }
  
  string nomeBusca;
  getline(cin, nomeBusca);
  
  int index = controle.getIndexFuncionario(nomeBusca);
  if (index != -1) {
    Pagamento p = controle.getPagamento(index);
    cout << p.getNomeDoFuncionario() << ": R$ " << p.getValorPagamento() << endl;
  } else {
    cout << nomeBusca << " não encontrado(a)." << endl;
  }
  
  cout << "Total: R$ " << controle.calculaTotalDePagamentos() << endl;
  
  return 0;
}
