  #include <iostream>
  #include <vector>

  /*
    A classe FiguraGeometrica possui o atributo protected tipo, e possui os seguintes métodos:

      FiguraGeometrica(int tipo).
        Construtor que recebe como parâmetro o tipo e inicia seu atributo.
      float calcularArea().
        Calcula a área de acordo com a figura geométrica.
      void lerAtributosArea().
        Lê da entrada padrão os atributos relacionados a área.
      std::string getNome().
        Retorna o nome da figura geométrica.

    Considere que tipo é um valor numérico, onde os seguintes valores possuem os seguintes significados:

        0 INDEFINIDO
        1 QUADRADO
        2 RETANGULO
        3 TRIANGULO
        4 CIRCULO

    Crie as classes Triângulo, Quadrado, Retângulo e Círculo que herdam de FiguraGeometrica.
      Adicione a essas classes os atributos que forem necessários para o cálculo de
        sua área.
      Implemente os seguintes métodos:

      Construtor(). 
        Chame o construtor da superclasse dentro desse construtor, passando para o
          construtor da superclasse o tipo da figura em questão. 
      float calcularArea(). Sobrescreva e implemente de acordo com o tipo da figura geométrica.
      void lerAtributosArea(). Sobrescreva para ler os atributos específicos da figura em questão.

    Na função principal leia o tipo, em seguida, instancie a figura geométrica correspondente
      ao tipo (declare um objeto para cada possível tipo).
    Logo após, chame o método lerAtributosArea() para ler os atributos específicos
      da figura em questão, e exiba a sua área de acordo com a saída esperada.
    Continue lendo o as figuras até que seja digitado o tipo 0 (indefinido).

    Obs: Utilize como valor de PI 3.14.
  */

class FiguraGeometrica{
  protected:
    int tipo;
  public:
    FiguraGeometrica(int t){
      tipo = t;
    }
    virtual double calcularArea() = 0;
    virtual void lerAtributosArea() = 0;
    std::string getNome(){
      switch(tipo){
        case 1: return "Quadrado";
        case 2: return "Retângulo";
        case 3: return "Triângulo";
        case 4: return "Círculo"; 
        default: return "Indefinido";
      }
    }
    virtual ~FiguraGeometrica(){}
};

class Retangulo: public FiguraGeometrica{
  private:
      double altura, largura;
  public:
    Retangulo(int tipo): FiguraGeometrica(tipo){}
    double calcularArea() override{
      return largura * altura;
    };
    void lerAtributosArea() override{
      std::cin >> altura >> largura;
    };        
};

class Triangulo: public FiguraGeometrica{
  private:
      double altura, base;
  public:
    Triangulo(int tipo): FiguraGeometrica(tipo){}
    double calcularArea() override{
      return base * altura / 2;
    };
    void lerAtributosArea() override{
      std::cin >> altura >> base;
    };
};

class Circulo: public FiguraGeometrica{
  private:
    double raio;
  public:
    Circulo(int tipo): FiguraGeometrica(tipo){}
    double calcularArea() override{
      return 3.14 * raio * raio;
    };
    void lerAtributosArea() override{
      std::cin >> raio;
    };
};

class Quadrado: public FiguraGeometrica{
  private:
    double lado;
  public:
    Quadrado(int tipo): FiguraGeometrica(tipo){}
    double calcularArea(){
      return lado * lado;
    };
    void lerAtributosArea(){
      std::cin >> lado;
    };
};

int main(){
  std::vector<FiguraGeometrica*> figuras;
  int tipo;
  do{
    std::cin >> tipo;
    if (tipo){
      FiguraGeometrica* figura = nullptr;
      switch(tipo){
        case 1:{
          figura = new Quadrado(tipo); break;}
        case 2:{
          figura = new Retangulo(tipo); break;}
        case 3:{
          figura = new Triangulo(tipo); break;}
        case 4:{
          figura = new Circulo(tipo); break;}
        default:{
          figura = new Circulo(0); break;}
      }
    figura->lerAtributosArea();
    std::cin.ignore();
    std::cout << figura->getNome() << " de área "<< figura->calcularArea() << std::endl;
    figuras.push_back(figura);
    delete figura;
    }
  } while(tipo != 0);
  return 0;
}
