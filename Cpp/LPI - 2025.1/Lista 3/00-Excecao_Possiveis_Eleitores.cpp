#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

class Eleitor {
  private:
    string nome;
    int idade;
    string titulo;

  public:
    Eleitor(string nome, int idade, string titulo) {
      this->nome = nome;
      this->idade = idade;
      this->titulo = titulo;
    }

    string getNome() {
      return this->nome;
    }

    int getIdade() {
      return this->idade;
    }
};

class GerenciadorEleitores {
  private:
    vector<Eleitor*> eleitores;

    void verificaMenoridade(Eleitor* el) {
      if (el->getIdade() < 16) {
        throw underflow_error("Eleitor " + el->getNome() + " não pode ser cadastrado");
      }
    }

    void verificaPendenciaIdade(Eleitor* el) {
      if (el->getIdade() > 20) {
        throw overflow_error("Eleitor " + el->getNome() + " com pendência");
      }
    }

  public:
    void cadastrarEleitor(string nome, int idade, string titulo) {
      eleitores.push_back(new Eleitor(nome, idade, titulo));
    }

    void verificaEleitores() {
      for (Eleitor* el : eleitores) {
        try {
          verificaPendenciaIdade(el);
          verificaMenoridade(el);
        }
        catch (underflow_error e) {
          cout << e.what() << endl;
        }
        catch (overflow_error d) {
          cout << d.what() << endl;
        }
      }
    }
};

int main() {
  int N;
  string nome, titulo;
  int idade;
  
  GerenciadorEleitores gerenciador;
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin.ignore();
    getline(cin, nome);
    cin >> idade >> titulo;
    gerenciador.cadastrarEleitor(nome, idade, titulo);
  }
  gerenciador.verificaEleitores();
  return 0;
}
