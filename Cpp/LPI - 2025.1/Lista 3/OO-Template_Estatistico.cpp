#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <sstream>

using namespace std;

template<typename T>
class Estatisticas {
  public:
    int indexOfMaior(vector<T> vec) {
      int maiorIndex = 0;
      for(int i = 1; i < vec.size(); i++) {
        if(vec[i].getTotal() > vec[maiorIndex].getTotal()) {
          maiorIndex = i;
        }
      }
      return maiorIndex;
    }

    int indexOfMenor(vector<T> vec) {
      int menorIndex = 0;
      for(int i = 1; i < vec.size(); i++) {
        if(vec[i].getTotal() < vec[menorIndex].getTotal()) {
          menorIndex = i;
        }
      }
      return menorIndex;
    }

    float media(vector<T> vec) {
      float total = 0.0;
      for(int i = 0; i < vec.size(); i++) {
        total += vec[i].getTotal();
      }
      return total / vec.size();
    }
};

class Pedido {
  private:
    float valorUnitario;
    int quantidade;
  public:
    Pedido(float valor, int quant) : valorUnitario(valor), quantidade(quant) {}

    float getTotal() {
      return valorUnitario * quantidade;
    }

    string toString() {
      ostringstream streamObj;
       
      if (valorUnitario == static_cast<int>(valorUnitario)) {
        streamObj << "R$ " << static_cast<int>(valorUnitario);
      } else {
        streamObj << fixed << setprecision(1) << "R$ " << valorUnitario;
      }
      streamObj << ", quant: " << quantidade << ", total: R$ ";
      float total = getTotal();
      if (total == static_cast<int>(total)) {
        streamObj << static_cast<int>(total);
      } else {
        streamObj << fixed << setprecision(1) << total;
      }
      return streamObj.str();
    }
};

class Livro {
  private:
    string titulo;
    int totalPaginas;
  public:
    Livro(string titulo, int paginas) : titulo(titulo), totalPaginas(paginas) {}

    int getTotal() {
      return totalPaginas;
    }

    string toString() const {
      return titulo + ", páginas: " + to_string(totalPaginas);
    }
};

int main() {
  int nPedidos, nLivros;
  cin >> nPedidos;

  vector<Pedido> pedidos;
  for(int i = 0; i < nPedidos; i++) {
    float valor;
    int quant;
    cin >> valor >> quant;
    pedidos.push_back(Pedido(valor, quant));
  }

  cin >> nLivros;

  vector<Livro> livros;
  for(int i = 0; i < nLivros; i++) {
    string titulo;
    int paginas;
    cin.ignore();
    getline(cin, titulo);
    cin >> paginas;
    livros.push_back(Livro(titulo, paginas));
  }

  Estatisticas<Pedido> estPedidos;
  int maiorPedidoIndex = estPedidos.indexOfMaior(pedidos);
  int menorPedidoIndex = estPedidos.indexOfMenor(pedidos);
  float mediaPedidos = estPedidos.media(pedidos);

  cout << "Maior: " << pedidos[maiorPedidoIndex].toString() << endl;
  cout << "Menor: " << pedidos[menorPedidoIndex].toString() << endl;
  cout << "Média: " << fixed << setprecision(2) << mediaPedidos << endl;

  Estatisticas<Livro> estLivros;
  int maiorLivroIndex = estLivros.indexOfMaior(livros);
  int menorLivroIndex = estLivros.indexOfMenor(livros);
  float mediaPaginas = estLivros.media(livros);

  cout << "Maior: " << livros[maiorLivroIndex].toString() << endl;
  cout << "Menor: " << livros[menorLivroIndex].toString() << endl;
  
  if (mediaPaginas == static_cast<int>(mediaPaginas)) {
    cout << "Média: " << static_cast<int>(mediaPaginas) << endl;
  } else {
    cout << "Média: " << fixed << setprecision(2) << mediaPaginas << endl;
  }

  return 0;
}
