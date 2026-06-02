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
<!-- 10. [**Exercício 10: Jogadores**](./jogadores.c)

    **Descrição:** Defina um tipo estruturado para armazenar os dados de um jogador de futebol no decorrer de um partida. Considere para tal os seguintes dados:

    - Nome Completo;
    - Idade;
    - Chutes a Gol;
    - Gols;

    Escreve um programa no qual o usuário entra com os dados de dois jogares j1 e j2. O programa deverá imprimir na tela o nome e idade do jogador com a melhor pontaria. Isto é, qual converteu a maior parte dos chutes a gol.
11. [**Exercício 11: Receber uma string e armazená-la em um vetor**](./relatorio_2.c)

    **Descrição:** Considere a estrutura a seguir:

```c
struct Movel{
    char descricao[50];
    float peso;
    char tipo;
};
```

    A partir desta estrutura, escreva um programa no qual o usuário cadastra *n* móveis, imprimindo ao final do cadastro um relatório informando:

    - Qual a descrição do móvel mais pesado;​
    - Quantos móveis acima de 10Kg são do tipo 's';​
    - Quantos móveis tem a descrição terminando em "Real";​
12. [**Exercício 12: Menu de opções**](./menu_de_opcoes.c)

    **Descrição:** Faça um programa que apresente um Menu com 4 opções, em seguida, leia, da entrada padrão a opção desejada. Por fim, apresente a opção selecionada, e volte ao início do Menu. Caso a opção tenha sido o item 4 o programa deve ser finalizado. Caso uma opção invalida lida, apresente a mensagem `"Opcao <ValorOpcao> Invalida".`

    **Troque a numeração: 1, 2, 3 e 4, por A, B, C, D.**

    Exemplo do menu:

    1. Item 1

    2. Item 2

    3. Item 3

    4. Sair
13. [**Exercício 13: Distância entre dois pontos**](./distance_2_points.c)

    **Descrição:** Escreva um programa para calcular a distância entre dois pontos no plano
catersiano. O seu programa deve ter uma estrutura **Ponto**, com campos
x e y, e uma função que recebe dois pontos e retorna o quadrado da distância
entre eles.

14. [**Exercício 14: Ponto mais próximo**](./distance_2_points.c)

    **Descrição:** Escreva um programa que lê as coordenadas no plano cartesiano de um ponto
**p** e em seguida lê um inteiro **n** e as coordenadas de **n** pontos. Seu programa deve
dizer qual dos **n** pontos é o ponto mais próximo de p. **Cada ponto deve ser alterado de forma alternada entre multiplicar por 2 e dividir por 2.**

    O seu programa deve ter uma estrutura **Ponto**, com campos **x** e **y**, e uma função que recebe dois pontos e retorna a distância entre eles.

15. [**Exercício 15: Maior, menor e média**](./maior_menor_media.c)

    **Descrição:** Escreva um programa para ler uma sequência de valores inteiros fornecidos pelo usuário e informar o menor, o maior e a média dos valores lidos. Seu programa deve ler inicialmente o tamanho da sequência representado por um valor inteiro **_N_** e, em seguida, ler os **_N_** valores inteiros da sequência. Após a leitura, seu programa deverá imprimir o menor, o maior e a média dos valores, nesta ordem **inversa**
16. [**Exercício 16:**](./16-functions.c)

    **Descrição:** Função aritmética, recebe 3 parâmetros, 2 operandos e um operador
     e de acordo com o operador realiza a soma, subtração, divisão ou multiplicação.

17. [**Exercício 17:**](./17-functions.c)

    **Descrição:** Exponenciação: Recebe dois parâmetros inteiro e retorna o
     primeiro elevado ao segundo (fazer função recursiva).

18. [**Exercício 18:**](./18-functions.c)

    **Descrição:** Raízes de uma equação de segundo grau. Recebe coeficientes e
     retornas as raízes reais, se existirem.
        X1 = (-B + sqrt(Delta)) / 2*A,
        X2 = (-B – sqrt(Delta)) / 2*A.
        Onde Delta = B*B – 4*A*C

19. [**Exercício 19:**](./19-ponteiros.c)

    **Descrição:** Verifique qual vai ser a saída de cada um dos printfs desse
     exercício de ponteiros.

20. [**Exercício 20:**](./20-ponteiros.c)

    **Descrição:** Escreva uma função que receba um vetor de inteiros como parâmetro,
     percorra tal vetor e substitua os valores pares por 1 e os ímpares por 0.
     A função deve alterar os valores do vetor original.
     Na função main() leia o vetor
      int arr1[10] = {2,5,7,4,8,9,12,17,23,6};
     Exiba na tela o vetor antes e depois da chamada da função.

21. [**Exercício 21:**](./21-strings.c)

    **Descrição:** Considere a matriz seguinte de caracteres e:
    `char matriz [3][10] = {"gato", "cachorro", "passarinho"};`
    - Exibir o tamanho de cada string.
    - Exibir a primeira letra de cada palavra da string.
    - Contar quantas vogais existem na matriz inteira e armazene esse valor em
       uma variável.
    - Criar um vetor de ponteiros para as strings da matriz e imprima as letras
       de cada string na ordem inversa.

22. [**Exercício 22:**](./22-struct.c)

    **Descrição:** Faça um programa em C que armazene os dados de até 50 alunos:
     Nome, matrícula, 3 notas e situação entre aprovado, na final ou reprovado.
     Faça 3 funções: cadastrar aluno, buscar aluno pela matrícula e exibir um
      relatório da turma (número de alunos, média da turma, número de aprovados).
     Dicas: usar typedef struct, pode usar union no caso da situação do aluno,
      criar array de struct

23. [**Exercício 23:**](./23-struct.c)

    **Descrição:** Faça um struct “pessoa”, que vai conter campos para o nome,
     idade, gênero e profissão.
     Crie um array desse struct com no máx 100 posições;
     • Faça uma função que permita o usuário preencher os dados
     • Faça outra função que permita ao usuário modificar qualquer um dos campos.
     • Por fim uma função para exibir os dados

24. [**Exercício 24:**](./24-arquivos.c)

    **Descrição:** Faça um programa que usa a função fgetc() e fputc() para abrir um
      arquivo de texto e substituir os caracteres:
      - 'a' por 4,
      - 'e' por 3,
      - 'i' por 1,
      - 'o' por 0,
      - 'u' por 5

25. [**Exercício 25:**](./25-arquivos.c)

    **Descrição:** Faça um programa que receba de um arquivo .txt com dados de
      alunos no seguinte formato:
      - nome1, nota1, nota2
     O programa deve elaborar um relatório em outro arquivo com a lista de nomes,
      média de duas notas de cada aluno e situação: aprovado, na final ou reprovado.
     No final do arquivo informe a porcentagem dos alunos aprovados e média da turma.

26. [**Exercício 26:**](./26-memoria_dinamica.c)

    **Descrição:** Escreva um programa que leia um número inteiro n do usuário e
      aloque dinamicamente um array de n inteiros.
     Em seguida, o programa deve preencher o array com valores lidos do usuário e
      calcular a média dos valores armazenados no array.
     Por fim, o programa deve imprimir a média na tela e liberar a memória alocada.

     Dicas:
     - Use as funções malloc (ou calloc) e free para alocar a memória e liberar a
       memória alocada, respectivamente.
     - Lembre-se de verificar se a alocação de memória foi bem-sucedida antes de
        acessar o array alocado.
     - Não se esqueça de liberar a memória alocada antes de sair do programa.

27. [**Exercício 27:**](./27-memoria_dinamica.c)

    **Descrição:** Escreva um programa que permita que o usuário insira uma string
     e depois a exiba invertida na tela.
    O programa deve alocar memória dinamicamente para armazenar a string e, em seguida,
     inverter a string usando um loop e alocando memória dinamicamente para armazenar
     a string invertida.
    O programa deve imprimir a string invertida na tela antes de liberar a memória
     alocada dinamicamente.
    Dicas:
      - Usar scanf(“%m[^\n]”, &str);
      - Usar strlen para saber o quanto alocar de memória para a outra string.

28. [**Exercício 28:**](./28-memoria_dinamica.c)

    **Descrição:** Alocar memória para matrizes multidimensionais usando alocação dinâmica.
     Pedir p usuário informar o número de linhas e colunas.
     Você pode alocar uma matriz de ponteiros e, em seguida, alocar cada linha da
      matriz separadamente.
     Dica: A matriz deve ser alocada como um array de ponteiros:
     `int **matrix; ** significa ponteiro para ponteiro`
     Cada ponteiro aponta para uma linha da matriz.
     A alocação de memória é feita em duas etapas: primeiro, aloca a matriz de
      ponteiros com `matrix = (int **) malloc(rows * sizeof(int *));`, e depois
      aloca cada linha da matriz usando um laço for:
      `matrix[i] = (int *) malloc(cols * sizeof(int))`

29. [**Exercício 29:**](./29-struct.c)

    **Descrição:** Implemente em C um sistema de cadastro de funcionários de uma empresa.
     Cada funcionário possui as seguintes informações: Nome, idade, cargo e
      Salário.
     Defina a estrutura de dados para os funcionários (array de structs).
     O programa deve ter duas funcionalidades:
      a) Cadastrar Funcionário;
      b) Buscar o funcionário pelo nome e exibir os dados do funcionário encontrado.

30. [**Exercício 30:**](./30-struct.c)

    **Descrição:** Considere uma loja de eletrônicos que vende três tipos de produtos:
      smartphones,notebooks e televisores.
     Cada produto possui as seguintes informações: nome e preço.
     Além disso, cada produto possui informações específicas, descritas a seguir:
      - Smartphone: sistema operacional (Android ou iOS)
      - Notebook: tamanho da tela (em polegadas) e quantidade de memória RAM (em GB).
      - Televisor: tamanho da tela (em polegadas) e resolução (HD, Full HD ou 4K).
     a) Crie uma estrutura chamada "Produto" que armazene todas as informações
      descritas acima.
      Utilize as estruturas "enum" e "union" caso seja necessário.
     b) Crie um programa que permita ao usuário cadastrar produtos na loja e
      imprimir na tela os produtos cadastrados.

31. [**Exercício 31:**](./31-struct.c)

    **Descrição:** Faça um programa que receba, via teclado, o nome e as duas notas dos alunos
     a) Armazene essas informações em um Array de Structs.
     b) faça um relatório contendo:
       Média da classe;
       Quantidade de aprovados;
       Quantidade de reprovados;
       percentagem de aprovados.
     Esse relatório deve ser salvo em um arquivo relatorio.txt.
     Opcional: Gere também um arquivo txt com os dados digitados no formato
       nome1, nota 1, nota2

32. [**Exercício 32:**](./32-struct.c)

    **Descrição:** Implemente em C um sistema de cadastro de funcionários de uma empresa.
     Cada funcionário possui as seguintes informações: Nome, Sobrenome, Idade e
      Salário.
     Defina a estrutura de dados para os funcionários (array de structs de no máx 10).
     O programa deve ter duas funcionalidades: Cadastrar Funcionário e Buscar o
      funcionário pelo nome e sobrenome, caso encontre, exibir os dados do funcionário.

33. [**Exercício 33:**](./33-struct.c)

    **Descrição:** Considere uma loja de eletrônicos que vende três tipos de produtos: smartphones,
      notebooks e televisores.
     Cada produto possui as seguintes informações: nome e preço. Além disso, cada
      produto possui informações específicas, descritas a seguir:
     • Smartphone: sistema operacional (Android ou iOS)
     • Notebook: tamanho da tela (em polegadas) e quantidade de memória RAM (em GB).
     • Televisor: tamanho da tela (em polegadas) e resolução (HD, Full HD ou 4K).
     a) Crie uma estrutura chamada "Produto" que armazene todas as informações descritas acima.
      Utilize as estruturas "enum" e "union" caso seja necessário.
     c) Crie um programa que permita ao usuário cadastrar produtos na loja e imprimir na tela os
      produtos cadastrados.

34. [**Exercício 34:**](./34-struct-files.c)

    **Descrição:** Faça um programa que receba, via teclado, o nome e as duas notas dos alunos
     a)Armazene essas informações em um Array de Structs, Use alocação dinâmica
      para criar esse array de acordo com o número de alunos informado pelo usuário.
     b)faça um relatório contendo: Média da classe; Quantidade de aprovados;
      Quantidade de reprovados; porcentagem de aprovados.
     c)Esse relatório deve ser salvo em um arquivo relatorio.txt.
     Opcional: Gere um arquivo com os dados digitados no formato nome1, nota 1, nota2

35. [**Exercício 35:**](./35-struct-files.c)

    **Descrição:** Faça um programa em C que recebe um arquivo txt com os nomes e
     as duas notas de alunos no formato : nome1, nota 1, nota 2.
     Faça uma função que permita ao usuário modificar esses dados, onde a busca
      será a partir do nome. Dê as opções de alterar o nome ou alguma das notas. -->
