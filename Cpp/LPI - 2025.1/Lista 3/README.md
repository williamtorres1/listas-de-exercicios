# Exercícios de Linguagem de Programação I - UFPB  2025.1

Repositório com os códigos em C para as resoluções de exercícios propostos em sala de aula.

1. [**Exercício 1: [OO] IConta**](./00-IConta.cpp).

     **Descrição:** Crie uma classe 100% abstrata IConta (interface) de acordo com o diagram de classes apresentado:

    [Diagrama de Classes](https://drive.google.com/file/d/1fwF4otT2wm7z_BDGkGAt-Wil5sCd2iYD/view)
    Ela deve possuir os seguintes métodos abstratos (virtuais puros):

    - float saldoTotalDisponível(). Deve verificar o saldo total, incluindo o limite.​
    - void sacar(float valor) : deve sacar o valor, caso esse valor seja menor ou igual ao saldo total disponível ( saldoTotalDisponível() ).
    - void depositar(float valor). Deve adicionar ao saldo o valor depositado.

    Crie uma classe Conta que herda de IConta e que contenha os atributos protected nomeCliente, numeroConta, salarioMensal, saldo e limite, e os métodos para obter e alterar esses atributos (métodos get e set).  Além disso, essa classe possui as seguintes características:

    - Os valores dos atributos nomeCliente, numeroConta e salarioMensal são parâmetros a serem configurados no construtor da classe, o saldo deve ser zerado, e o limite definido (chame o método definirLimite()).
    - O método "virtual void definirLimite()", define o valor do atributo limite como 2 vezes o valor de salarioMensal.

    Crie uma classe ContaEspecial que herda da classe Conta e sobrescreve o método definirLimite() como 3 vezes o valor de salarioMensal. Essa classe deve possuir um construtor que recebe os mesmos 3 parâmetros do construtor da Classe Conta, deve chamar o construtor de sua super classe Conta, e também deve chamar o seu definirLimite().

    Crie uma função main, declare um ponteiro para Conta, e instancie dinamicamente um objeto da classe Conta e, depois, usando o mesmo ponteiro, um objeto da classe ContaEspecial. Leia da entrada padrão os valores do Nome, conta, salárioMensal, e os valores para depositar e sacar; por fim, exiba os dados de cada conta conforme apresentado nos exemplos. Faça isso para cada conta. Lembre-se de deletar o ponteiro após o seu uso.​
2. [**Exercício 2: [OO] Gerenciamento de contas bancárias**](./00-Gerenciamento_Contas_Bancarias.cpp)

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

3. [**Exercício 3: [OO] Exceção Possíveis Eleitores**](./00-Excecao_Possiveis_Eleitores.cpp)

    **Descrição:** Você está trabalhando em um sistema que vai cadastrar eleitores que ainda não têm o título de eleitor e que estão sendo cadastrados pela primeira vez.

    Crie uma classe Eleitor com os atributos privados nome, idade e título de eleitor (zona e sessão foram retirados para simplificar o exercício). Essa classe deve possuir um construtor que recebe 3 parâmetros referentes aos 3 atributos e os inicia. O construtor padrão é opcional. Crie também os métodos get para os atributos Nome e Idade.

    Crie uma classe GerenciadorEleitores que possui uma lista de eleitores (array ou vector) privada.

    A classe GerenciadorEleitores deve possuir os seguintes métodos:

    - void cadastrarEleitor(string nome, int idade, string titulo). Método público (public). Cadastra os eleitores adicionando-os na lista de eleitores.
    - void verificaEleitores(). Método público (public). Este método verifica se os possíveis eleitores (do vetor de eleitores) têm idades válidas, através da chamada dos 2 métodos seguintes. As exceções devem ser tratadas neste método, o tratamento deve ser apenas exibir o retorno do método what() da exceção. Utilize um único bloco try e dois blocos catch.
    - void verificaMenoridade(Eleitor *el). Método privado (private). Verifica se a idade do eleitor é menor que 16, se for deve ser lançada a exceção underflow_error passando como parâmetro no construtor da exceção o string "Eleitor ```<Nome do Eleitor>``` não pode ser cadastrado".
    ​- ```void verificaPendenciaIdade(Eleitor *el)```. Método privado (private). Verifica se a idade do eleitor é maior que 20, neste caso, o eleitor já era para ter votado com 20 anos e não votou, desta forma, deve ser lançada a exceção overflow_error,  passando como parâmetro no construtor da exceção o string "Eleitor ```<Nome do Eleitor>``` com pendência".

    Na função main() crie um objeto GerenciadorEleitores, leia o valor N referente a quantidade de eleitores que serão cadastrados, em seguida, leia os atributos de cada eleitor e chame o método cadastraEleitor() passando esses atributos. Por fim chame o método verificaEleitores() que internamente vai verificar todos os eleitores.

    Obs: As exceções underflow_error e overflow_error estão definidas no cabeçalho `<stdexcept>`.
4. [**Exercício 4: [OO] Folha de Pagamento Exception**](./00-Folha_de_Pagamento_Exception.cpp)

    **Descrição:** Considere um sistema para calcular a folha de pagamento dos funcionários de uma empresa (conforme diagrama abaixo). A empresa possui três tipos de funcionários: os Assalariados que recebem salários fixos independentemente do número de horas trabalhadas, os Horistas que são pagos de acordo com a quantidade de horas trabalhadas e recebem horas extras (1,5 vezes sua taxa de salário por hora) por todas as horas trabalhadas além das 40 horas normais, considere que o atributo horasTrabalhadas representa a quantidade horas semanais. Considere que o salário do Horista é o salário semanal * 4.  E os Comissionados que recebem um salário baseado no percentual sobre suas vendas, renomeie o atributo vendasSemanais para vendas vendasMensais.

    [Diagrama de Classes](https://drive.google.com/file/d/1BmCm0qWHzA7YmD8vhrkBAagimkdvsVVy/view)

    Nesse sistema usamos a classe abstrata Funcionario que possui nome e matricula (e seus respectivos métodos get e set) e um método abstrato calcularSalario()para representar o conceito geral de um funcionário. Também definimos as classes Assalariado, Horista e Comissionado que herdam de Funcionario e representam cada um dos três tipos de funcionários.

    SistemaGerenciaFolha deve ter um construtor que receba como parâmetro o valor do orçamento máximo. O método consultaSalarioFuncionário(std::string nome) deve receber o nome do funcionário como parâmetro. Se o funcionário não existir FuncionarioNaoExisteException deve ser lançada (throw). No método calculaValorTotalFolha() deve lançar (throw) uma exceção (OrcamentoEstouradoException) se o valor da folha for maior que o orçamento máximo. O try/catch deverá ficar na função main().

    Na função main(), leia o orçamento máximo, e use-o na instanciação do objeto do tipo SistemaGerenciaFolha, crie 3 objetos dos 3 tipos de funcionários que existem na ordem: Assalariado, Horista, Comissionado. Para cada objeto, leia seus atributos e os adicione no SistemaGerenciaFolha através do método setFuncionários(Funcionario *func). Leia 3 nomes e busque-os no sistema utilizando o método consultaSalarioFuncionário() e exiba o salário, caso esse seja retornado. Em seguida, exiba o valor total da folha de pagamento. Faça os try/catch necessários na função main().

    As classes OrcamentoEstouradoException e FuncionarioNaoExisteException devem herdar de overflow_error e invalid_argument respectivamente. Em seu construtor, devem receber um parâmetro string com a mensagem da exceção.

    As exceções invalid_argument e overflow_error estão definidas no cabeçalho .
5. [**Exercício 5: [OO] Insumos Destrutor**](./00-Insumos_Destrutor.cpp)

    **Descrição:** Implemente a classe Insumos e suas classes derivadas de acordo com o seguinte diagrama de classes UML:

    [Diagrama de Classes](https://drive.google.com/file/d/1UXbr6OyDqyyHj-Ryn_9_8nyrKeL0zHqC/view)
    Na classe LocalController adicione os métodos:

    - void addInsumoArr(Insumo *in, int index). Adiciona um insumo no vetor (array)
    - void addInsumoVec(Insumo *in). Adiciona um insumo no std::vector.
    - ~LocalController(). Implemente o destrutor de LocalController, fazendo com que ele Delete os seus 3 Insumos, e esvazie o std::vector de insumos. Neste destrutor exiba uma mensagem "Deletando Local";

    Na classe Insumos e em suas classes derivadas, também implemente seus destrutores e exiba uma mensagem ```"Deletando <NomeDaClasse>"```

    Considere que tipoInsumo é um valor numérico, onde os seguintes valores possuem os seguintes significados:

        0 INDEFINIDO
        1 VACINA
        2 MEDICAMENTO
        3 EPI

    Na função main crie um objeto LocalController. Perceba que ele tem dois vetores de insumos, um que é um array estático de 3 elementos e outro que é um std::vector.

    Em seguida, leia os os atributos de 3 Insumos dos tipos Vacina, Medicamento e EPI, e os adicione em cada vector de LocalController, instance um objeto diferente em cada lista utilizada.

    Por fim, delete o objeto LocalController e verifique se sua memória foi liberada. Nesse destrutor delete inicialmente todos os insumos do array e em seguida todos os insumos do std::vector.

    Obs: Utilize a ferramenta Valgrind para verificar se a memória foi completamente liberada.
6. [**Exercício 6: [OO] Imobiliária Destrutor**](./00-Imobiliaria_Destrutor.cpp)

    **Descrição:** Você foi contratado para implementar um sistema que gerencia os imóveis de uma imobiliária. Todos os imóveis devem conter como atributos protected o nome, o valor desse imóvel, tipo e se ele está disponível para aluguel ou venda. O sistema também deve permitir que sejam cadastrados e consultados os seguintes tipos de imóveis:

    **Casa**: Contém informações sobre uma casa incluindo o número de pavimentos, número de quartos, área do terreno e área construída;

    **Apartamento**: Contém informações sobre um apartamento incluindo a sua área, número de quartos, andar,  valor do condomínio e número de vagas de garagem.

    **Terreno**: Contém informações sobre um terreno, incluindo a sua área.

    [Diagrama de Classes](https://drive.google.com/file/d/169SA7AfgTvilvHNFazKaY8Dc6PLGr2jn/view)

    As classes Casa, Apartamento e Terreno devem herdar da classe Imóvel. As 4 classes, incluindo a classe Imóvel, deve conter os seguintes métodos:

    - Construtor(). Sobrescreva o construtor da superclasse, e chame o construtor da super classe dentro desse construtor (exceto para a classe Imóvel). Configure o atributo nome de acordo com o nome do imóvel.
    - Destrutor(). Exiba uma mensagem ```"Deletando <NomeDaClasse>"​```
    - void exibeAtributos(). Exibe todos os atributos do imóvel em questão. Implemente de acordo com o tipo do imóvel.
    - void lerAtributos(). Ler os atributos específicos do imóvel em questão.

    Implemente os gets/sets que se mostrarem necessários para a resolução da questão. Para a classe Imovel, implemente o método getNome() que retorna o nome do imóvel a partir do seu tipo.

    Considere que tipo é um valor numérico, onde os seguintes valores possuem os seguintes significados:

        0 INDEFINIDO
        1 CASA
        2 APARTAMENTO
        3 TERRENO

    A classe Imobiliaria deve possuir o método void addImovel(Imovel *im), que adiciona um imóvel no vetor. Implemente o destrutor de Imobiliaria, fazendo com que ele delete todos os elementos de seu vector, e o esvazie. Neste destrutor exiba uma mensagem "Deletando Imobiliaria";

    ​Na função principal, declare um objeto do tipo Imobiliaria, leia N imóveis, e os adicione na Imobiliária. Leia o valor de N, em seguida, leia o tipo e instancie o imóvel correspondente ao tipo. Logo após, chame o método lerAtributos() para ler os atributos específicos do imóvel em questão.

    Em seguida, leia um texto a ser buscado na imobiliária, e pesquise por esse texto em todos os atributos strings de todos os imóveis. E exiba todos os atributos dos imóveis encontrados.

    Por fim, delete o objeto Imobiliaria e verifique se sua memória foi liberada.

    Obs: Utilize a ferramenta Valgrind para verificar se a memória foi completamente liberada.
7. [**Exercício 7: [OO] Template Estatístico**](./[OO]-Template_Estatístico.cpp)

    **Descrição:** Crie uma classe template chamada Estatisticas. Essa classe deve possuir um atributo privado vector de template ```(vector<T> vec)```, e os seguintes métodos públicos:

    - int indexOfMaior(). Calcula o maior elemento dentro do vetor, e retorna o índice desse elemento.
    - int indexOfMenor(). Calcula o menor elemento dentro do vetor, e retorna o índice desse elemento.
    - float media(). Calcula a média dentre os elementos do vetor, e retorna a média.
    - void addEl(T el). Adiciona um elemento ao vector.
    - T getEl(int i). Retorna o elemento da posição i.

    Os primeiros três métodos devem considerar que a classe representada pelo Template possui o método getTotal(), e este deve ser utilizado para as comparações realizadas nos métodos.

    Crie também as classes Pedido e Livro. A classe Pedido deve ter a seguinte configuração:

    - 2 atributos privados valorUnitário e quantidade.
    - Pedido(float valor, int quant). Construtor para inicializar os atributos.
    - float getTotal(). Retorna o total do Pedido, ou seja o valor unitário multiplicado pela quantidade.
    - void print(). Exibe o Pedido na saída padrão, no formato "R$ <valorUnitário>, quant: <quantidade>, total: R$ <getTotal()>"

    A classe Livro deve ter a seguinte configuração:

    - 2 atributos privados titulo e totalPaginas.
    - Livro(string titulo, int paginas). Construtor para inicializar os atributos.
    - int getTotal(). Retorna o total de páginas do Livro.
    - void print(). Exibe o Livro na saída padrão, no formato `"<titulo>, páginas: <totalPaginas>"`

    Na função main leia uma sequência de Pedidos (leia o valor N da quantidade Pedidos antes), depois uma sequência de Livros (leia o valor N da quantidade de Livros antes). Por fim, exiba o maior Pedido, o menor Pedido e o valor médio dos pedidos, e depois exiba o maior Livro, menor Livro e a média da quantidade de páginas dos livros, conforme a saída esperada. Para exibir os pedidos e os livros utilize o método print().
8. [**Exercício 8: [00] Arquivo Pessoa**](./[OO]-Template_Estatístico.cpp)

    **Descrição:** Adicione o seguinte código no seu programa, e na sua função principal chame a função geraArquivos().

    ```cpp
        void geraArquivo(string path, string data) {
            fstream fs;
            fs.open(path.c_str(),fstream::out);
                if (fs.is_open()) {
                    fs.write(data.c_str(), data.size());
                    fs.close();
            } else
                cout << "Nao foi possivel abrir o arquivo " << path;
        }
        void geraArquivos() {
            string data1 = "1\nJoao Pedro\n(83) 8888-8888\n"
            "2\nMaria Teresa\n(83) 9999-9999\n000.000.000-00\n"
            "2\nLuiz Pereira\n(83) 7777-7777\n111.111.111-11\n"
            "1\nDenis Carlos\n(83) 5555-5555\n";
            string data2 = "2\nLuma Oliveira\n(83) 1111-1111\n222.222.222-22\n"
            "2\nTercio Marquies\n(83) 2222-2222\n333.333.222-33\n"
            "1\nJonas Luz\n(83) 3333-3333\n";
            geraArquivo("dados01.txt", data1);
            geraArquivo("dados02.txt", data2);
        }
    ```

    Crie uma classe do tipo Pessoa com 4 atributos: tipo (1 ou 2), nome, telefone e CPF.

    Considere que os tipos tem o seguinte significado:

        1 - PESSOA SEM CPF (criança)
        2 - PESSOA COM CPF

    Caso o tipo seja 2 o CPF deve ser utilizado (lido e exibido), caso contrário não utilize o CPF.

    Na função principal, leia um nome de arquivo, e em seguida leia esse arquivo, considerando que cada linha do arquivo vai ter um atributo de uma pessoa, na ordem: tipo, nome, telefone e CPF (CPF apenas para o tipo 2). Em seguida, exiba as pessoas lidas de acordo com a saída esperada.
