# Exercícios de Linguagem de Programação I - UFPB  2025.1

Repositório com os códigos em C++ para as resoluções de exercícios propostos em sala de aula.

1. [**Exercício 1: [OO] Classe Data - 01**](./01-Date.cpp).

     **Descrição:** Crie uma classe chamada Data para representar uma data. Essa classe deve conter três atributos públicos: o dia, o mês, e o ano. Considere também:

    - Um construtor padrão (sem parâmetros) que inicializa os três atributos com o valor 1

    O programa deverá ler uma data (dia, mês e ano nessa ordem), diretamente nos atributos do objeto Data. Por fim, exiba a data no seguinte formato: DIA/MÊS/ANO.

    **Multiplique o dia por 2, o mês por 3 e o ano por 4.**
2. [**Exercício 2: [OO] Classe Invoice - 01**](./01-Invoice.cpp)

    **Descrição:** Crie uma classe chamada Invoice para que uma loja de suprimentos de informática possa utilizá-la para representar uma fatura de um único item vendido na loja.

    Uma Invoice (fatura) deve incluir quatro partes de informações como variáveis de instância (atributos) – o número, a descrição, a quantidade comprada de um item e o preço do item. Os atributos devem ser públicos.

    Além disso, forneça um método float getTotal() (sem parâmetros) que calcula o valor total da fatura (isto é, multiplica a quantidade pelo preço por item).

    **Multiplique o preço por 2.5**

    Na a função main() crie 2 invoices lendo os valores da entrada padrão e armazene diretamente nos atributos da classe. Se a quantidade ou o preço não forem positivos, eles devem ser configurados como 0 (zero). Em seguida, exiba os 4 atributos e o total da Invoice.

    **O total deve ser dividido por 3**

    ​​Obs: Se estiver implementando em C++, utilize std::string para os atributos de texto, e para entrada e saída utilize std::cin e std::cout.

3. [**Exercício 3: [OO] Classe Funcionário - 01**](./01-Employee.cpp)

    **Descrição:** Crie uma classe chamada Funcionario para uma determinada empresa.

    Essa classe possui três variáveis de instância (atributos) **públicos** – primeiro nome, sobrenome e o salário mensal.

    No construtor sem parâmetros, inicie o Salário Mensal com zero.

    Crie também um método que retorna o salário anual (float getSalarioAnual()).

    Na a função main() crie   N-1 Funcionários lendo os valores da entrada padrão e armazene diretamente nos atributos da classe. Em seguida, exiba os 3 atributos e o salário anual.

    ​Obs: Se estiver implementando em C++, utilize std::string para os atributos de texto, e para entrada e saída utilize std::cin e std::cout.

4. [**Exercício 4: [OO] Classe Pessoa - 01**](./01-People.cpp)

    **Descrição:** Considere um sistema de uma agenda telefônica que possui uma classe Pessoa.

    Implemente a classe Pessoa que possui os atributos **públicos** nome, idade e telefone. **A idade deve ser multiplicada por 2**

    Na a função main() instancie 2 pessoas **lendo os valores da entrada padrão e armazene-os diretamente nos atributos da classe.** Em seguida, exiba os 3 atributos.

    ​​Obs: Se estiver implementando em C++, utilize std::string para os atributos de texto, e para entrada e saída utilize std::cin e std::cout.
5. [**Exercício 5: [OO] Classe Data - 02**](./02-Date.cpp)

    **Descrição:** Crie uma classe chamada Data para representar uma data. Essa classe deve conter três atributos privados: o dia, o mês, e o ano. Considere também:

    - Um construtor padrão (sem parâmetros) que inicializa os três atributos com o valor 1.
    - Um método get() um set() para cada atributo;
    - Um método void printData() (sem parâmetros) que deve exibir a data no formato: `"<DIA> de <NomeDoMês> de <ANO>"`

    O programa deverá ler uma data (dia, mês e ano nessa ordem), e configurar esses valores no objeto Data utilizando os métodos set. Por fim, chame o método printData() e exiba a data. Caso o mês não seja conhecido (os meses válidos são de 1 a 12), exiba o nome do mês como "Indefinido". **Multiplique o dia por 2, o mês por 3 e o ano por 4.**

    Sugestão de Implementação:
    - Crie um método `string getMesString()` que retorne o mês por extenso; isto é, caso o mês seja 1, retorne "Janeiro", e assim por diante.

6. [**Exercício 6: [OO] Classe Invoice - 02**](./02-Invoice.cpp)

    **Descrição:** Crie uma classe chamada Invoice para que uma loja de suprimentos de informática possa utilizá-la para representar uma fatura de um único item vendido na loja.

    Uma Invoice (fatura) deve incluir quatro partes de informações como variáveis de instância (atributos) – o número, a descrição, a quantidade comprada de um item e o preço do item. **Os atributos devem ser privados, a classe deve conter um construtor que inicializa os quatro atributos, e forneça um método get e set para cada atributo da classe.** Se a quantidade ou o preço não forem positivos, eles devem ser configurados como 0 (zero).

    Além disso, forneça um método float getTotal() (sem parâmetros) que calcula o valor total da fatura (isto é, multiplica a quantidade pelo preço por item). **A quantidade deve ser incrementada em 1.**

    Forneça também um método void print() (sem parâmetros) que exibe os 4 atributos e o total da Invoice.

    ​Na a função main() crie 2 invoices lendo os valores da entrada padrão, **e os utilize com parâmetros na chamada do construtor.** Em seguida, exiba os 4 atributos e o total da Invoice, **utilizando o método print()**.

    Obs: Se estiver implementando em C++, utilize std::string para os atributos de texto, e para entrada e saída utilize std::cin e std::cout.
7. [**Exercício 7: [OO] Classe Funcionário - 02**](./02-Employee.cpp)

    **Descrição:** Crie uma classe chamada Funcionario para uma determinada empresa.

    Essa classe possui três variáveis de instância (atributos) **privados** – primeiro nome, sobrenome e o salário mensal. Forneça um construtor que inicializa as três variáveis de instância. Forneça também um método get e set para cada atributo da classe. Se o salário mensal não for positivo, configure esse valor com zero.

    Crie também um método que retorna o salário anual (float getSalarioAnual()) **e um método que gere um aumento percentual do salário (void aumentaSalario(float percent)).Calcule o salário anual baseado em 15 meses.**

    Na a função main() crie N Funcionários lendo os valores da entrada padrão, **e os utilize com parâmetros na chamada do construtor.** Em seguida, exiba os 3 atributos e o salário anual. Por fim, chame o método **aumentaSalario(0.1), dê um aumento de 10%, e exiba o novo salário anual do funcionário.**

    ​Obs: Se estiver implementando em C++, utilize std::string para os atributos de texto, e para entrada e saída utilize std::cin e std::cout.
8. [**Exercício 8: [OO] [OO] Classe Pessoa - 02**](./02-People.cpp)

    **Descrição:**  Considere um sistema de uma agenda telefônica que possui uma classe Pessoa.

    Implemente a classe Pessoa que possui os atributos privados nome, idade e telefone.

    Considere também que ela possui três construtores, o padrão (sem parâmetros) que inicializa a idade com zero; outro que só recebe o nome; e outro que recebe nome, idade e telefone. Implemente também os métodos para obter e alterar esses atributos (métodos get e set). **o getIdade() e o setIdade() deve retornar e alterar a idade dividida por 2.**

    Na a função main() instancie um vetor de N Pessoas (pergunte ao usuário o valor de N) **lendo os valores da entrada padrão, e os utilize com parâmetros na chamada do construtor.** Em seguida leia o nome (ou parte do nome) de uma pessoa a ser pesquisada, e exiba os dados dessa(s) pessoa(s) caso ela seja encontrada, caso não encontrada exiba a mensagem: "Pessoa não encontrada".

    Obs1: A pesquisa deve pesquisar em qualquer lugar do nome, não apenas no começo.

    ​​Obs2: Se estiver implementando em C++, utilize std::string para os atributos de texto, string::find() para pesquisar pela pessoa, e para entrada e saída utilize std::cin e std::cout.
9. [**Exercício 9: [OO] Classe Data - 03 - Avançar Dia**](./03-Date.cpp)

    **Descrição:** Crie uma classe chamada Data para representar uma data. Essa classe deve conter três atributos **privados**: o dia, o mês, e o ano. Considere também:

    - Um construtor que inicializa os três atributos e verifica a validade dos valores fornecidos; Caso algum atributo seja inválido, exiba a mensagem: "Atributo Inválido" e atribua 1 (um) a esse atributo. Considere que os meses válidos são entre 1 e 12 e os dias válidos são entre 1 e a quantidade de dias do mês em questão.
    - Um método set() um get() para cada atributo;
    - Um método void avancarDia() (sem parâmetros) que avança a data para o dia seguinte (avança apenas 1 dia).

    O programa deverá ler uma data (dia, mês e ano nessa ordem), e em seguida deverá ler a quantidade de dias a serem avançados. Essa quantidade determinará quantas vezes o método avançarDia() será chamado. Por fim, exiba a data resultante. **Multiplique a quantidade de dias por 2.**

    A exibição da Data deve ser feita obtendo os atributos por meio dos métodos get().

    Obs: Considere que fevereiro tem 28 dias, e os demais meses 30 ou 31 dependendo do mês em questão.

    Dicas implementação:

    - Faça um método int getDaysMonth(int mes) que retorna a quantidade de dias que um determinado mês possui. Utilize esse método no construtor, na verificação de validade do dia e no método void avancarDia(), para verificar se o avanço ultrapassou o limite máximo de dias do mês atual.
    - Faça os métodos get() retornarem um valor de string já com "0" antes, caso o número seja menor que 10.

10. [**Exercício 10: [OO] Sistema de Controle de Gastos**](./00-Expenses.cpp)

    **Descrição:** Considere um Sistema de Controle de Gastos.

    Esse sistema apresenta uma classe chamada Despesa, com os atributos privados nome, valor e tipoDeGasto e métodos para obter e alterar esses atributos (métodos get e set). No seu construtor, inicie o atributo valor com zero.

    Esse sistema apresenta também uma classe ControleDeGastos, que apresenta um atributo privado chamado despesas, que é um conjunto (vetor) de objetos do tipo Despesa, com 100 elementos. E os seguintes métodos:

    - void setDespesa(Despesa d, int pos). Esse método, vai receber uma despesa e uma posição, e adicionar a despesa ao vetor na posição indicada.
    - Despesa getDespesa(int pos). Esse método vai receber o índice de uma despesa e retornar a despesa do vetor de despesas.
    - float calculaTotalDeDespesas(). Esse método não recebe parâmetros e deve retornar o valor total das despesas do sistema. **O total das despesas deve ser dividida por 2.**
    float calculaTotalDeDespesas(string tipo). Esse método recebe o tipo como parâmetro e deve retornar o valor total das despesas do tipo especificado.​ **O total das despesas deve ser dividida por 5.**
    - bool existeDespesaDoTipo(string tipo). Esse método verifica se dentre as despesas guardadas no ControleDeGastos há alguma delas que é do tipo passado, retornando true neste caso e false, caso contrário.

    Na função main(), pergunte ao usuário quantas despesas ele quer inserir, e leia as N despesas, inserindo cada uma no ControleDeGastos. Em seguida, pergunte qual tipo de despesa ele quer exibir, e exiba a lista de despesas desse tipo. Caso nenhuma despesa do tipo seja encontrada, exiba a mensagem "Nenhuma despesa do tipo especificado". Por fim, exiba o total de despesas do tipo "/" o total de despesas geral.

    Obs: Se estiver implementando em C++, utilize std::string para os atributos de texto e para entrada e saída utilize std::cin e std::cout.
