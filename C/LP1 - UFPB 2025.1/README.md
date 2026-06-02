# Exercícios de Linguagem de Programação I - UFPB  2025.1

Repositório com os códigos em C para as resoluções de exercícios propostos em sala de aula.

1. [**Exercício 1: Maior Número Sequência**](./higher_number.c).

     **Descrição:** Faça um programa que receba um número inteiro N e em seguida lê uma sequência de N números inteiros. O seu programa deve imprimir o valor do maior número da sequência.
2. [**Exercício 2: Encontrar o Maior de Três Números**](./higher_number_function.c)

    **Descrição:** Você está desenvolvendo um sistema que compara valores inteiros de sensores em um experimento. A cada rodada, três valores inteiros são coletados e você precisa determinar qual deles é o maior. Para simplificar essa tarefa, crie um programa em C++ que receba três números inteiros e, **utilizando uma função**, retorne o maior dos três.

    Requisitos:
    - O programa deve conter uma função que receba três números inteiros como parâmetros.
    - A função deve retornar o maior dos três números.
    - O programa principal deve ler os três números do usuário e chamar a função para determinar o maior valor.

3. [**Exercício 3: Maiores que a média**](./aritmetic_average.c)

    **Descrição:** Escreva um programa que calcule e exiba a média aritmética de dez inteiros, fornecidos pelo usuário, e que exiba todos os números maiores que o valor da média aritmética.

    **Divida o resultado por 2.**
4. [**Exercício 4: Dois maiores dentre vários números**](./two_highest.c)

    **Descrição:** Implemente um programa que receba uma quantidade indeterminada de números inteiros. Assumindo que serão digitados pelo menos dois números, o programa deve se encerrar quando for digitado o número 0. Após isto, devem ser impressos os dois maiores números digitados.

    **Exiba também os 2 menores.**
5. [**Exercício 5: Porcentagem dos maiores que 15**](./porcentagem_maiores_que_15.c)

    **Descrição:** Implemente um programa que recebe vários números inteiros e calcula a porcentagem dos números ímpares maiores do que 15 dentre todos os números. Em seguida, imprima na saída o valor da porcentagem seguido do caractere '%'. O programa deve encerrar quando for informado o número 0.
6. [**Exercício 6: Data mais antiga**](./data_mais_antiga.c)

    **Descrição:** Crie uma estrutura **Data**, com campos **dia**, **mes** e **ano**, e escreva um
    programa que lê as datas de nascimento de duas pessoas e determina
    quem é a mais velha.

    Para isso, crie uma função que recebe duas datas, d1 e d2 , e retorna 1
    se d1 é a data mais antiga, 0 se as duas datas são iguais, e −1 se d2 é a
    data mais antiga.
7. [**Exercício 7: Função para informar se matriz é esparsa**](./7-sum_higher_lower_number.c)

    **Descrição:** Implemente uma função que receba como parâmetro de entrada uma matriz de números inteiros de tamanho qualquer e o seu tamanho.

    A função a ser implementada deve retornar verdadeiro caso a matriz seja esparsa ou falso caso contrário, considerando que uma matriz é esparsa se ela possuir mais do que 70% dos seus elementos iguais a 0.

    A função main deve ler as dimensões da matriz, cada um dos seus elementos e imprimir uma mensagem
    informando se a matriz é esparsa ou não, de acordo com a resposta da função.

    **Informe ao usuário a mensagem: "fim dos cálculos!!"**

    A matriz tem largura/altura máximas igual a 10.
8. [**Exercício 8: Funções: soma de matrizes**](./soma_matrizes.c)

    **Descrição:**  Escreva um programa que leia duas matrizes inteiras A e B, ambas de ordem m x n, e que utilize uma função para realizar a operação A + B. **A matriz resultante deve ter seus valores multiplicados por 3.**

    A matriz resultante da operação deve ser exibida na própria função.
9. [**Exercício 9: Veículos**](./veiculos.c)

    **Descrição:** Defina um tipo estruturado para representar um veículo, descrito pelos seguintes dados:
    - Modelo;
    - Marca;
    - Ano de Fabricação;
    - Preço;

    Escreva um programa no qual o usuário informa os dados de dois veículos, sendo impresso ao final o modelo e marca do veículo mais antigo. Caso ambos os veículos tenham sido fabricados no mesmo ano, informe a marca e o modelo do veículo mais barato.
10. [**Exercício 10: Jogadores**](./jogadores.c)

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
<!-- 16. [**Exercício 16:**](./16-functions.c)

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
