#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

string formatarFloat(float valor) {
  stringstream ss;
  ss << valor;
  string s = ss.str();
  size_t posPonto = s.find('.');
  if (posPonto != string::npos) {
    while (s.back() == '0') {
      s.pop_back();
    }
    if (s.back() == '.') {
      s.pop_back();
    }
  }
  return s;
}

class Pedido {
  private:
    int numero;
    string descricao;
    int quantidade;
    float preco;

  public:
    Pedido(int n = 0, string d = "", int q = 0, float p = 0.0) : 
      numero(n), descricao(d), quantidade(q), preco(p) {}
    
    float getTotal() {
      return quantidade * preco;
    }
    
    int getNumero() { return numero; }
    string getDescricao() { return descricao; }
    int getQuantidade() { return quantidade; }
    float getPreco() { return preco; }
    
    void adicionarQuantidade(int q) {
      quantidade += q;
    }
};

class MesaDeRestaurante {
  private:
    Pedido pedidos[100];
    int numPedidos;

  public:
    MesaDeRestaurante() : numPedidos(0) {}
    
    void adicionarPedido(Pedido p) {
      for (int i = 0; i < numPedidos; i++) {
        if (pedidos[i].getNumero() == p.getNumero()) {
          pedidos[i].adicionarQuantidade(p.getQuantidade());
          return;
        }
      }
      pedidos[numPedidos++] = p;
    }
    
    void zeraPedidos() {
      numPedidos = 0;
    }
    
    float calculaTotal() {
      float total = 0;
      for (int i = 0; i < numPedidos; i++) {
        total += pedidos[i].getTotal();
      }
      return total;
    }
    
    void exibeConta() {
      for (int i = 0; i < numPedidos; i++) {
        cout << pedidos[i].getNumero() << " - " << pedidos[i].getDescricao() << " - " 
          << pedidos[i].getQuantidade() << " - " 
          << formatarFloat(pedidos[i].getPreco()) << " - R$ " 
          << formatarFloat(pedidos[i].getTotal()) << endl;
      }
    }
    
    bool temPedidos() {
      return numPedidos > 0;
    }
};

class Restaurante {
  private:
    MesaDeRestaurante mesas[100];

  public:
    void adicionarPedido(Pedido p, int indMesa) {
      if (indMesa >= 0 && indMesa < 100) {
        mesas[indMesa].adicionarPedido(p);
      }
    }
    
    float calculaTotalRestaurante() {
      float total = 0;
      for (int i = 0; i < 100; i++) {
        total += mesas[i].calculaTotal();
      }
      return total;
    }
    
    MesaDeRestaurante& getMesa(int indMesa) {
      return mesas[indMesa];
    }
};

int main() {
  Restaurante restaurante;
  int numero, quantidade, indMesa;
  string descricao;
  float preco;
  
  while (true) {
    cin >> numero;
    if (numero < 0) break;
    
    cin.ignore();
    getline(cin, descricao);
    
    cin >> quantidade >> preco >> indMesa;
    
    Pedido p(numero, descricao, quantidade, preco);
    restaurante.adicionarPedido(p, indMesa);
  }
  
  for (int i = 0; i < 100; i++) {
    if (restaurante.getMesa(i).calculaTotal() > 0) {
      cout << "Mesa " << i << endl;
      restaurante.getMesa(i).exibeConta();
      cout << "Total: R$ " << formatarFloat(restaurante.getMesa(i).calculaTotal()) << endl << endl;
    }
  }
  
  cout << "Total Restaurante: R$ " << formatarFloat(restaurante.calculaTotalRestaurante()) << endl;
  
  return 0;
}
