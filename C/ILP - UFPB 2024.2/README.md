# Exercícios de Introdução à Programação - UFPB  2024.2

Repositório com os códigos em C para as resoluções de exercícios propostos em sala de aula.

1. [**Exercício 1: Dobro do número digitado**](./1-hello_world.c).

     **Descrição:** Faça um programa que receba um número inteiro pelo usuário
    e apresente o dobro do valor digitado.
2. [**Exercício 2: Conversor de Temperatura e Distância**](./2-convertions.c)

    **Descrição:** Faça um programa que receba uma temperatura em Celsius e
        apresente a temperatura convertida em Fahrenheit. Depois receba uma distância
        em Km e apresente a distância em milhas.

    Obs¹: Lembre que 1ºF = (ºC * 9/5) + 32.

    Obs²: 1 Milha = 0.621371 * Kms.
3. [**Exercício 3: Média aritmética de um aluno**](./3-calculator.c)

    **Descrição:** Faça um programa que receba três notas e imprima a média aritmética.
4. [**Exercício 4: Classificador de um nadador**](./4-classifier.c)

    **Descrição:** Faça um programa que receba a idade de um nadador e o classifique baseado na sua idade.

    Use:
    - A: – Infantil A --- de 5 a 7 anos
    - B: – Infantil B --- de 8 a 10 anos
    - C: – Juvenil A --- de 11 a 13 anos
    - D: – Juvenil B --- de 14 a 17 anos
    - S: – Sênior --- maiores de 17 anos
5. [**Exercício 5: Calculadora**](./5-calculator.c)

    **Descrição:** Faça um programa que receba o operador de uma calculadora e
        e dois números para fazer a operação.

    Deve ter as seguintes operações: Soma, Subtração, Multiplicação e Divisão.
6. [**Exercício 6: IMC**](./6-imc.c)

    **Descrição:** Faça um programa que receba peso e altura de uma pessoa e
    classifique ela no IMC.

    Use:
    - IMC < 18.5: Abaixo do peso ideal.
    - 18.5 < IMC <= 24.9: Peso normal.
    - 24.9 < IMC <= 29.9: Acima do peso ideal (sobrepeso).
    - 29.9 < IMC <= 34.9: Obesidade grau I.
    - 34.9 < IMC <= 39.9: Obesidade grau II.
    - IMC >= 40: Obesidade grau III.
7. [**Exercício 7: Somador de números**](./7-sum_higher_lower_number.c)

    **Descrição:** Faça um programa que receba números inteiros digitados pelo usuário
    até que o mesmo digite zero.

    Ao final mostre qual foi o maior número digitado, o menor e a soma de todos os
    números que foram digitados até o zero.
  
    Obs1: Não armazenar os números em array. Deixar gravado apenas a soma, maior e menor.

    Obs2: variável tipo int pode armazenar de -2147483647 a 2147483647.
8. [**Exercício 8: Somador de números pares sem operador %**](./8-even_numbers.c)

    **Descrição:**  Escrever um programa que solicite ao usuário um número inteiro N e, em seguida, use um loop for para calcular a soma de todos os números pares de 1 até N.
    Obs: Não utilizar operador resto de divisão.
9. [**Exercício 9: Quadrado de elementos de um array**](./9-vectors.c)

    **Descrição:** Faça um programa que recebe 10 valores inteiros digitados pelo usuário,
      armazene os valores digitados em um array. Em seguida o programa deve
      criar um segundo array de 10 elementos onde os valores correspondem ao
      quadrado de cada valor digitado pelo usuário.
    Exiba os 2 arrays na tela.
10. [**Exercício 10: Desenhar uma matriz com vários números**](./10-vectors.c)

    **Descrição:** Crie uma matriz 3x3 de inteiros, e peça para o usuário do programa
    preenchê-la: Em seguida exiba-a separando os elementos da mesma linha por “-”
    (traço) e separando as linhas por nova linha.
    Dica: Usar 2 lacos de repeticao FOR
11. [**Exercício 11: Receber uma string e armazená-la em um vetor**](./11-strings.c)

    **Descrição:** Escreva um programa que solicite ao usuário que digite uma
        frase (com até 100 letras) e armazene essa frase em um vetor de caracteres.
12. [**Exercício 12: Contar vogais**](./12-strings.c)

    **Descrição:** Baseado no exercício anterior, o programa deve percorrer o
    vetor e contar quantas vogais (a, e, i, o, u) foram digitadas pelo usuário.
13. [**Exercício 13: Separar nome e sobrenomes por espaço**](./13-strings.c)

    **Descrição:** Faça um programa onde o usuário vai digitar o nome completo,
        separando nome e sobrenomes por espaço.
    - O programa separa o nome e os sobrenomes em strings diferentes.
    - Exiba o nome e sobrenome separados por nova linha!

14. [**Exercício 14: Use a função strtok no exercício anterior**](./14-strings.c)

    **Descrição:** Baseado no exercício anterior, o programa deve utilizar a função
    **strtok** para fazer a delimitação.

15. [**Exercício 15:**](./15-ponteiros.c.c)

    **Descrição:** Faça uma matriz de char, onde cada linha terá seu nome e sobrenomes,
      exemplo: `char matriz[3][20] = {"Vitor", "Meneghetti", "Araujo"};`
    Escreva um programa com 4 funcionalidades:
    - Exibir o tamanho de cada string.
    - Exibir a primeira letra de cada palavra da matriz em maiúsculo separados por
        ponto depois espaço (Exiba o nome completo abreviado pela primeira letra).
    - Contar número de vogais da matriz inteira e armazene esse valor em uma variável.
    - Criar um vetor de ponteiros para as strings da matriz e substituir as
        vogais por números
        • a por 4
        • e por 3
        • i por 1
        • o por 0
        • u por 5

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
      será a partir do nome. Dê as opções de alterar o nome ou alguma das notas.
