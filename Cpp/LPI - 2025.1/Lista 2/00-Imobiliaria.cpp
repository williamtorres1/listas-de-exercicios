#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Imovel {
  protected:
    float valor;
    int tipo;
    string disponibilidade;

  public:
    Imovel(int t) : tipo(t) {}
    virtual ~Imovel() {}
    
    virtual void exibeAtributos() = 0;
    virtual void lerAtributos() = 0;
    
    string getNome() {
      switch(tipo) {
        case 1: return "Casa";
        case 2: return "Apartamento";
        case 3: return "Terreno";
        default: return "Indefinido";
      }
    }
};

class Casa : public Imovel {
  private:
    int numPavimentos;
    int numQuartos;
    float areaTerreno;
    float areaConstruida;

  public:
    Casa() : Imovel(1) {}
    
    void exibeAtributos() override {
      cout << getNome() << " para " << disponibilidade << ", R$ " << valor << ". "
        << numPavimentos << " pavimentos, " << numQuartos << " quartos, "
        << areaTerreno << "m2 de área de terreno e " << areaConstruida 
        << "m2 de área construída." << endl;
    }
    
    void lerAtributos() override {
      cin >> valor;
      cin.ignore();
      getline(cin, disponibilidade);
      cin >> numPavimentos >> numQuartos >> areaTerreno >> areaConstruida;
    }
};

class Apartamento : public Imovel {
  private:
    float area;
    int numQuartos;
    int andar;
    float valorCondominio;
    int vagasGaragem;

  public:
    Apartamento() : Imovel(2) {}
    
    void exibeAtributos() override {
      cout << getNome() << " para " << disponibilidade << ", R$ " << valor << ". "
        << area << "m2 de área, " << numQuartos << " quartos, "
        << andar << " andar(es), " << valorCondominio << " de condomínio, "
        << vagasGaragem << " vaga(s) de garagem." << endl;
    }
    
    void lerAtributos() override {
      cin >> valor;
      cin.ignore();
      getline(cin, disponibilidade);
      cin >> area >> numQuartos >> andar >> valorCondominio >> vagasGaragem;
    }
};

class Terreno : public Imovel {
  private:
    float area;

  public:
    Terreno() : Imovel(3) {}
    
    void exibeAtributos() override {
      cout << getNome() << " para " << disponibilidade << ", R$ " << valor << ". "
        << area << "m2 de área de terreno." << endl;
    }
    
    void lerAtributos() override {
      cin >> valor;
      cin.ignore();
      getline(cin, disponibilidade);
      cin >> area;
    }
};

int main() {
  int n;
  cin >> n;
  
  vector<Imovel*> imoveis;
  
  for (int i = 0; i < n; i++) {
    int tipo;
    cin >> tipo;
    
    Imovel* imovel = nullptr;
    
    switch(tipo) {
      case 1:
        imovel = new Casa();
        break;
      case 2:
        imovel = new Apartamento();
        break;
      case 3:
        imovel = new Terreno();
        break;
      default:
        continue;
    }
    
    imovel->lerAtributos();
    imoveis.push_back(imovel);
  }
  
  for (auto imovel : imoveis) {
    imovel->exibeAtributos();
    delete imovel;
  }
  
  return 0;
}
