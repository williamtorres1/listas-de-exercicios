#include <iostream>
#include <string>
#include <vector>

class Imovel {
  public:
    Imovel();
    virtual ~Imovel();
    Imovel(int tipo);

    void setNome(std::string nome) { this->nome = nome; }
    void setValor(float valor) { this->valor = valor; }
    void setTipo(int tipo) { this->tipo = tipo; }
    void setDisponibilidade(std::string disponibilidade) {
      this->disponibilidade = disponibilidade;
    }

    std::string getNome() { return nome; }
    float getValor() { return valor; }
    int getTipo() { return tipo; }
    std::string getDisponibilidade() { return disponibilidade; }

    virtual void exibeAtributos() = 0;
    virtual void lerAtributos() = 0;

  protected:
    std::string nome, disponibilidade;
    float valor;
    int tipo;
};

Imovel::Imovel() {}

Imovel::~Imovel() {
  std::cout << "Deletando Imovel" << "\n";
}

Imovel::Imovel(int tipo) {
  setTipo(tipo);
}

class Apartamento : public Imovel {
  public:
    Apartamento();
    virtual ~Apartamento();

    void exibeAtributos();
    void lerAtributos();

  private:
    int andar, nQuartos, valorCondominio, vagas;
    float area;
};

Apartamento::Apartamento() : Imovel(2) { this->nome = "Apartamento"; }

Apartamento::~Apartamento() {
  std::cout << "Deletando Apartamento" << "\n";
}

void Apartamento::exibeAtributos() {
  std::cout << "Apartamento para " << disponibilidade << ". " << area
    << "m2 de área, " << nQuartos << " quartos, " << andar
    << " andar(es), " << valorCondominio << " de condomínio, " << vagas
    << " vaga(s) de garagem. "
    << "R$ " << valor << "." << std::endl;
}

void Apartamento::lerAtributos() {
  std::cin >> valor;
  getchar();
  getline(std::cin, disponibilidade);
  std::cin >> area >> nQuartos >> andar >> valorCondominio >> vagas;
}

class Terreno : public Imovel {
  public:
    Terreno();
    virtual ~Terreno();

    void exibeAtributos();
    void lerAtributos();

  private:
    float area;
};

Terreno::Terreno() : Imovel(3) { this->nome = "Terreno"; }

Terreno::~Terreno() {
  std::cout << "Deletando Terreno" << "\n";
}

void Terreno::exibeAtributos() {
  std::cout << "Terreno para " << disponibilidade << ". " << area
    << "m2 de área de terreno. "
    << "R$ " << valor << "." << std::endl;
}

void Terreno::lerAtributos() {
  std::cin >> valor;
  getchar();
  getline(std::cin, disponibilidade);
  std::cin >> area;
}

class Casa : public Imovel {
  public:
    Casa();
    virtual ~Casa();

    void setPav(int nPav) { this->nPav = nPav; }
    void setQuartos(int nQuartos) { this->nQuartos = nQuartos; }
    void setAreaT(float areaTerreno) { this->areaTerreno = areaTerreno; }
    void setAreaC(float areaConstruida) { this->areaConstruida = areaConstruida; }

    int getPav() { return nPav; }
    int getQuartos() { return nQuartos; }
    float getAreaT() { return areaTerreno; }
    float getAreaC() { return areaConstruida; }

    void exibeAtributos();
    void lerAtributos();

  private:
    int nPav, nQuartos;
    float areaTerreno, areaConstruida;
};

Casa::Casa() : Imovel(1) { this->nome = "Casa"; }

Casa::~Casa() {
  std::cout << "Deletando Casa" << "\n";
}

void Casa::exibeAtributos() {
  std::cout << "Casa para " << disponibilidade << ". " << nPav << " pavimentos, "
    << nQuartos << " quartos, " << areaTerreno
    << "m2 de área de terreno e " << areaConstruida
    << "m2 de área construída. "
    << "R$ " << valor << "." << std::endl;
}

void Casa::lerAtributos() {
  std::cin >> valor;
  getchar();
  getline(std::cin, disponibilidade);
  std::cin >> nPav >> nQuartos >> areaTerreno >> areaConstruida;
}

class Imobiliaria {
public:
  Imobiliaria();
  virtual ~Imobiliaria();
  void addImovel(Imovel *im);
  void buscaImovel(std::string busca);
private:
  std::vector<Imovel*> lista;
};

Imobiliaria::Imobiliaria() {}

Imobiliaria::~Imobiliaria() {
  std::cout << "Deletando Imobiliária" << std::endl;
  for (int i = 0; i < lista.size(); i++) {
    delete lista[i];
  }
}

void Imobiliaria::addImovel(Imovel *im) { lista.push_back(im); }

void Imobiliaria::buscaImovel(std::string busca) {
  for (int i = 0; i < lista.size(); i++) {
    if (lista[i]->getNome().find(busca) != std::string::npos ||
        lista[i]->getDisponibilidade().find(busca) != std::string::npos)
      lista[i]->exibeAtributos();
  }
}

int main() {
  int n, tipo;
  std::string busca;

  std::cin >> n;

  Imovel* imovel;
  Imobiliaria imob;
  
  while (n--) {
    std::cin >> tipo;

    if (tipo == 1)
      imovel = new Casa;
    else if (tipo == 2)
      imovel = new Apartamento;
    else
      imovel = new Terreno;

    imovel->lerAtributos();
    imob.addImovel(imovel);
    
  }

  getchar();
  getline(std::cin, busca);
  imob.buscaImovel(busca);

  return 0;
}
