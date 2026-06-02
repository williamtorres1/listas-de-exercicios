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
<!-- 11. [**Exercício 11: Receber uma string e armazená-la em um vetor**](./relatorio_2.c)

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
