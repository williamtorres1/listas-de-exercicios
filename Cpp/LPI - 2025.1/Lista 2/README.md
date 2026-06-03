# Exercícios de Linguagem de Programação I - UFPB  2025.1

Repositório com os códigos em C para as resoluções de exercícios propostos em sala de aula.

1. [**Exercício 1: [OO] Figuras Geométricas 1 - Herança**](./00-Figuras_Geometricas.cpp).

     **Descrição:** Crie um programa que lida com Figuras Geométricas, de acordo com o diagrama de classes apresentado.

    [Diagrama de classes](https://drive.google.com/file/d/1wXuIE94KL6IMIkoLLScuizd8IQUUQx2z/view)

    A classe FiguraGeometrica possui o atributo **protected** tipo, e possui os seguintes métodos:

    - **FiguraGeometrica(int tipo).Construtor que recebe como parâmetro o tipo e inicia seu atributo.**
    - float calcularArea(). Calcula a área de acordo com a figura geométrica.
    - void lerAtributosArea(). Lê da entrada padrão os atributos relacionados a área.
    - std::string getNome(). Retorna o nome da figura geométrica. Antecedido por palavra "Figura".

    Considere que tipo é um valor numérico, onde os seguintes valores possuem os seguintes significados:

        0. INDEFINIDO
        1. QUADRADO
        2. RETANGULO
        3. TRIANGULO
        4. CIRCULO

    Crie as classes Triângulo, Quadrado, Retângulo e Círculo que herdam de FiguraGeometrica. Adicione a essas classes os atributos que forem necessários para o cálculo de sua área. Implemente os seguintes métodos:

    - Construtor(). Chame o construtor da superclasse dentro desse construtor, passando para o construtor da superclasse o tipo da figura em questão.
    - float calcularArea(). Sobrescreva e implemente de acordo com o tipo da figura geométrica.
    - void lerAtributosArea(). Sobrescreva para ler os atributos específicos da figura em questão.

    Na função principal, leia o tipo, em seguida, instancie a figura geométrica correspondente ao tipo **(declare um objeto para cada possível tipo)**. Logo após, chame o método lerAtributosArea() para ler os atributos específicos da figura em questão, e exiba a sua área de acordo com a saída esperada. Continue lendo o as figuras até que seja digitado o tipo 0 (indefinido).

    Obs: Utilize como valor de PI 3.1415.
2. [**Exercício 2: [OO] Figuras Geométricas 2 - Classes Abstratas**](./01-Figuras_Geometricas.cpp)

    **Descrição:** Crie um programa que lida com Figuras Geométricas, de acordo com o diagrama de classes apresentado.

    [Diagrama de classes](https://drive.google.com/file/d/1wXuIE94KL6IMIkoLLScuizd8IQUUQx2z/view)

    A classe **abstrata** FiguraGeometrica possui o atributo **protected** tipo, e possui os seguintes métodos:

    - FiguraGeometrica(int tipo).Construtor que recebe como parâmetro o tipo e inicia seu atributo.
    - float calcularArea(). **Abstrato** (virtual puro). Calcula a área de acordo com a figura geométrica.
    - void lerAtributosArea(). **Abstrato** (virtual puro). Lê da entrada padrão os atributos relacionados a área.
    - std::string getNome(). Retorna o nome da figura geométrica.

    Considere que tipo é um valor numérico, onde os seguintes valores possuem os seguintes significados:

        0 INDEFINIDO
        1 QUADRADO
        2 RETANGULO
        3 TRIANGULO
        4 CIRCULO

    Crie as classes Triângulo, Quadrado, Retângulo e Círculo que herdam de FiguraGeometrica. Adicione a essas classes os atributos que forem necessários para o cálculo de sua área. Implemente os seguintes métodos:

    - Construtor(). Chame o construtor da superclasse dentro desse construtor, e passe como parâmetro o tipo da figura em questão.
    - float calcularArea(). Sobrescreva e o implemente de acordo com o tipo da figura geométrica.
    - void lerAtributosArea(). Sobrescreva para ler os atributos específicos da figura em questão.

    Na função principal, **declare um ponteiro para FiguraGeométrica**, leia o tipo, em seguida, instancie a figura geométrica correspondente ao tipo **(usando polimorfismo no ponteiro declarado).** Logo após, chame o método lerAtributosArea() para ler os atributos específicos da figura em questão, e exiba a sua área de acordo com a saída esperada. Continue lendo o as figuras até que seja digitado o tipo 0 (indefinido).

    Obs: Utilize como valor de **PI 3.14.**

3. [**Exercício 3: [OO] Funcionário - Herança**](./00-Funcionário.cpp)

    **Descrição:** Crie um sistema para uma empresa para gerenciar os seus Funcionários e Consultores, seguindo a seguinte especificação:

    A classe Funcionario com os atributos **protected** matrícula, nome e salário, e os métodos **públicos** get() e set() de cada atributo. Em seu construtor inicie salário e matrícula com o valor zero.

    A classe Consultor herda da classe Funcionario, e possui os seguintes métodos:

    - float getSalario(). Sobrescreve o método, retornando o salário acrescido de um percentual de 10%.
    - float getSalario(float percentual). O parâmetro percentual, varia entre 0 e 1. Deve ser retornando o salário acrescido do valor indicado no parâmetro percentual.

    Na função main() teste as classes Funcionario e Consultor. No programa crie 1 objeto da classe Funcionario e 1 Consultor, nesta ordem, leia seus dados e exiba seus atributos.
4. [**Exercício 4: [OO] Trabalhador - Herança**](./00-Trabalhador.cpp)

    **Descrição:** Crie um sistema para uma empresa com as classes Trabalhador e classes derivadas (herança) TrabalhadorPorHora e TrabalhadorAssalariado.

    A classe Trabalhador tem os atributos protected nome e salário; e os métodos públicos get e set. E possui as seguintes especificações:

    - Em seu construtor inicie o salário com zero.

    O salário do TrabalhadorAssalariado é referente ao seu salário mensal. **E possui seguintes especificações:​**

    - Em seu construtor inicie o valor do salário com o valor passado como parâmetro.​
    ​float calcularPagamentoSemanal(). Pagamento semanal é o valor do salario mensal dividido por 4.

    A classe TrabalhadorPorHora possui um atributo privado valorDaHora. E possui as seguintes especificações:​

    - Em seu construtor inicia valorDaHora com o valor passado como parâmetro.
    - float calcularPagamentoSemanal(int horasSemanais). Calcula o pagamento semanal do trabalhador e retorna o valor. Neste método calcule também o salário mensal estimado do TrabalhadorPorHora, multiplicando o semanal por 4, e armazenando-o no atributo salário.
    - O trabalhador que ganha por hora é pago, de acordo com o número real de horas trabalhadas semanais. Se ele trabalhou mais de 40 horas, cada hora excedente é paga como hora extra e seu valor é equivalente uma hora e meia normal.

    Considere que as classes possuem os seguintes tipos numéricos:

    1. TrabalhadorAssalariado
    2. TrabalhadorPorHora

    Crie um programa principal que lê N trabalhadores. Inicialmente, leia o valor de N, e, em seguida, o tipo do trabalhador, e seus atributos. Para o **TrabalhadorAssalariado leia os atributos nome e salário, e para o TrabalhadorPorHora leia o nome, o valorDaHora, e a quantidade de horasSemanais.** Instancie o trabalhador de acordo com o seu tipo e exiba suas informações.
5. [**Exercício 5: [OO] Aluno e Professor - Herança**](./00-Aluno_Professor.cpp)

    **Descrição:** Crie um sistema educacional para uma escola com as classes Pessoa e classes derivadas (herança) Aluno e Professor, de acordo com o diagrama de classes apresentado.

    [Diagrama de classes](https://drive.google.com/file/d/1nIChs7mXpvqRT_NV-JaNi_vSlrMFnk6K/view)

    A classe **Pessoa** tem os atributos **protected** nome, telefone, cpf; e o método público exibir(), que exibe todos seus atributos.

    A classe Aluno **possui os atributos privados, CRA e semestre. A classe Professor deve possuir os atributos privados qtdDisciplinas e departamento. Ambas classes devem possuir as seguintes especificações:​**

    - Em seu construtor, inicie seus atributos e chame o construtor da superclasse para iniciar os demais atributos.
    ​- void exibir(). Método a ser sobrescrito que exibe todos os atributos da classe e da superclasse.

    Crie um programa principal que lê uma Pessoa, um Aluno e um Professor. Para cada objeto leia todos os seus atributos através variáveis da função main(); configure seus valores passando essa variáveis para o construtor da classe. Por fim, exiba todas as informações dos objetos, utilizando o método exibir(), de acordo com a saída esperada.
6. [**Exercício 6: [OO] Imobiliária - Herança**](./00-Imobiliaria.cpp)

    **Descrição:** Você foi contratado para implementar um sistema que gerencia os imóveis de uma imobiliária. Todos os imóveis devem conter como atributos protected o valor desse imóvel, o tipo do imóvel e a disponibilidade (se ele está disponível para aluguel ou venda). O sistema também deve permitir que sejam cadastrados e consultados os seguintes tipos de imóveis:

    **Casa**: Contém informações sobre uma casa incluindo o número de pavimentos, número de quartos, área do terreno e área construída (atributos privados);

    **Apartamento**: Contém informações sobre um apartamento incluindo a sua área, número de quartos, andar,  valor do condomínio e número de vagas de garagem (atributos privados).

    **Terreno**: Contém informações sobre um terreno, incluindo a sua área (atributos privados).

    [Diagrama de Classes](https://drive.google.com/file/d/1OZX1booUCSCO-H7mfRUT9ilcJpY5gpBE/view)

    As classes Casa, Apartamento e Terreno devem herdar da classe Imóvel. As 4 classes, incluindo a classe Imóvel, deve conter os seguintes métodos:

    - Construtor(int tipo) (apenas para a classe Imóvel): Deve configurar o valor do atributo tipo de acordo com o parâmetro.
    - Construtor() (para as demais classes). Chame o construtor da super classe dentro desse construtor, passando como parâmetro o tipo correspondente.
    - void exibeAtributos(). Exibe todos os atributos do imóvel em questão. Implemente de acordo com o tipo do imóvel.
    - void lerAtributos(). Ler os atributos específicos do imóvel em questão.

    Implemente os gets/sets que se mostrarem necessários para a resolução da questão. Para a classe Imovel, implemente o método getNome() que retorna o nome do imóvel a partir do seu tipo.

    Considere que tipo é um valor numérico, onde os seguintes valores possuem os seguintes significados:

        0 INDEFINIDO
        1 CASA
        2 APARTAMENTO
        3 TERRENO

    Na função principal preencha N imóveis. Para isso, leia o valor de N, em seguida, leia o tipo e instancie o imóvel correspondente ao tipo (declare um objeto para cada possível tipo). Logo após, chame o método lerAtributos() para ler os atributos específicos do imóvel em questão, e exiba a seus atributos de acordo com a saída esperada.
7. [**Exercício 7: [OO] Agenda telefone e endereço**](./00-Telefone_Endereco.cpp)

    **Descrição:** Considere um sistema de uma agenda telefônica e de endereços que possui uma classe Pessoa e uma classe Endereco.

    Implemente a classe Endereco, com os atributos privados rua (string), número, bairro, cidade, estado e CEP (string). Crie um construtor que receba os parâmetro referentes a todos os atributos. Crie o método toString() que retorna todos os atributos da classe Endereço na forma de string.

    Implemente a classe Pessoa que possui os atributos privados nome (string), endereço (do tipo Endereco), e telefone (string). Considere também que ela possui dois construtores, um que só recebe o nome e outro que recebe nome, endereço (do tipo Endereco) e telefone, e métodos para obter e alterar esses atributos (métodos get e set). Crie também o método toString() que retorna todos os atributos da classe Pessoa na forma de string.​

    Em seguida, crie um programa principal que pergunta ao usuário quantas pessoas ele quer cadastrar, e, em seguida, lê todos os atributos da pessoa e os armazena em um vetor de pessoas. Por fim, exiba todas pessoas da agenda utilizando o método toString() de cada pessoa.
8. [**Exercício 8: [OO] Sistema de Controle de Pagamentos**](./00-Controle_Pagamentos.cpp)

    **Descrição:**  Considere um Sistema de Controle de Pagamentos de Funcionários de uma empresa.

    Esse sistema apresenta uma classe chamada Pagamento, com os atributos privados valorPagamento e nomeDoFuncionario e métodos para obter e alterar esses atributos (métodos get e set). No construtor sem parâmetros de Pagamentos inicie o atributo valorPagamento com zero.

    Esse sistema apresenta também uma classe ControleDePagamentos, que apresenta um atributo privado chamado pagamentos, que é um conjunto (vetor) de objetos do tipo Pagamento. Essa classe apresenta os seguintes métodos:

    - `void setPagamento(Pagamento p, int index)`. Esse método, vai receber um pagamento e o seu índice, e adicionar o pagamento ao vetor no índice indicado.
    - `Pagamento getPagamento(int pos)`. Esse método vai receber o índice de um Pagamento e retornar o Pagamento do vetor de pagamentos.
    - `float calculaTotalDePagamentos()`. Não tem parâmetros e deve retornar o valor total dos pagamentos do sistema.
    - `int getIndexFuncionario(string nomeFuncionario)`. Verifica se dentre os pagamentos guardados no ControleDePagamentos há algum deles que se refere ao funcionário passado como parâmetro, retornando o índice dele, caso contrário deve ser retornado o valor -1.

    No programa principal crie um objeto do tipo ControleDePagamentos e pergunte ao usuário quantos pagamentos ele que inserir, leia os dados dos pagamentos e armazene-os na classe ControleDePagamentos. Em seguida, pergunte ao usuário o nome de um Funcionários que ele quer buscar. Por fim, exiba o pagamento do funcionário pesquisado e o total dos pagamentos utilizando o método correspondente da classe ControleDePagamentos. Caso o funcionário pesquisado não seja encontrado exibia a mensagem: `"<NomeFuncionario> não encontrado(a)."`
9. [**Exercício 9: [OO] Restaurante**](./00-Restaurante.cpp)

    **Descrição:** Crie um programa para o gerenciamento de um restaurante. Esse programa deve conter as classes Pedido, MesaDeRestaurante e Restaurante.

    [Diagrama de Classes](https://drive.google.com/file/d/1gAGtWS9gNqkFRkb6YK_uH3PTmn5ZhExv/view)

    Siga as seguintes especificações:

    - A classe Pedido representa o pedido de um único item do cardápio, e contém os seguintes atributos privados: o número, a descrição, a quantidade comprada de um item e o preço do item;
        - Construtor que recebe 4 parâmetros e inicia os 4 atributos.
        - float getTotal(). Calcula o total do pedido, isto é, o quantidade multiplicada pelo preço.
        - Métodos get para todos os atributos.
        - Método para setar ou incrementar o atributo quantidade.
    - A classe MesaDeRestaurante deve conter um atributo privado para representar uma lista (vetor) de instâncias da classe Pedido, representando os pedidos feitos na mesa. Ela deve conter os seguintes métodos:
        - void adicionarPedido(Pedido p). Adiciona um novo pedido ao conjunto de pedidos feitos. Se o pedido já existir a quantidade do pedido deve ser adicionada a um pedido já existente na mesa. Se o pedido ainda não existir o pedido é adicionado.
        - void zeraPedidos(). Cancela todos os pedidos feitos, isto é, faz com que a quantidade de pedidos seja zero para cada item;
        - float calculaTotal(). Calcula o total a ser pago por aquela mesa.
        - void exibeConta(). Exibe a conta da mesa na saída principal, conforme os exemplos.
    - A classe Restaurante deve ter um atributo que é uma lista (vetor) instâncias da classe MesaDeRestaurante, para representar suas mesas separadamente. Ela deve conter os seguintes métodos:
        - void adicionarPedido(Pedido p, int indMesa). Adicionará um pedido a uma mesa. Esse método deverá chamar o método adicionarPedido(Pedido p) da mesa à qual o pedido está sendo adicionado.
        - float calculaTotalRestaurante(). Calcula o total arrecadado no restaurante, somando os pedidos realizados em todas as mesas.
        MesaDeRestaurante getMesa(int indMesa). Retorna a mesa do índice passado como parâmetro.

    Obs: Você pode usar arrays e criar um número predeterminado e imutável de instâncias de Pedidos e de MesaDeRestaurante.

    Na função main(), leia vários pedidos, incluindo todos os atributos do pedido, e, em seguida, o índice da mesa a qual o pedido pertence.

    Quando o número de pedido negativo for lido a leitura deve ser finalizada. Por fim, exiba todas as contas das mesas e o total do restaurante.

    Obs: Na função main deve ter um objeto do tipo Restaurante e um objeto do tipo Pedido, não deve haver objeto do tipo MesaRestaurante
