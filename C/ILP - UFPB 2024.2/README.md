# Exercícios de Introdução à Programação - UFPB  2024.2

Repositório com os códigos em C para as resoluções de exercícios propostos em sala de aula.

1. [**Exercício 1: Dobro do número digitado**](./%231 - hello_world.c).

     **Descrição:** Faça um programa que receba um número inteiro pelo usuário
    e apresente o dobro do valor digitado.
2. [**Exercício 2: Conversor de Temperatura e Distância**](./#2%20-%20convertions.c)

    **Descrição:** Faça um programa que receba uma temperatura em Celsius e
        apresente a temperatura convertida em Fahrenheit. Depois receba uma distância
        em Km e apresente a distância em milhas.

    Obs¹: Lembre que 1ºF = (ºC * 9/5) + 32.

    Obs²: 1 Milha = 0.621371 * Kms.
3. [**Exercício 3: Média aritmética de um aluno**](./#3%20-%20calculator.c)

    **Descrição:** Faça um programa que receba três notas e imprima a média aritmética.
4. [**Exercício 4: Classificador de um nadador**](./#4%20-%20classifier.c)

    **Descrição:** Faça um programa que receba a idade de um nadador e o classifique baseado na sua idade.

    Use:
    - A: – Infantil A --- de 5 a 7 anos
    - B: – Infantil B --- de 8 a 10 anos
    - C: – Juvenil A --- de 11 a 13 anos
    - D: – Juvenil B --- de 14 a 17 anos
    - S: – Sênior --- maiores de 17 anos
5. [**Exercício 5: Calculadora**](./#5%20-%20calculator.c)

    **Descrição:** Faça um programa que receba o operador de uma calculadora e
        e dois números para fazer a operação.

    Deve ter as seguintes operações: Soma, Subtração, Multiplicação e Divisão.
6. [**Exercício 6: IMC**](./#6%20-%20imc.c)

    **Descrição:** Faça um programa que receba peso e altura de uma pessoa e
    classifique ela no IMC.

    Use:
    - IMC < 18.5: Abaixo do peso ideal.
    - 18.5 < IMC <= 24.9: Peso normal.
    - 24.9 < IMC <= 29.9: Acima do peso ideal (sobrepeso).
    - 29.9 < IMC <= 34.9: Obesidade grau I.
    - 34.9 < IMC <= 39.9: Obesidade grau II.
    - IMC >= 40: Obesidade grau III.
7. [**Exercício 7: Somador de números**](./#7%20-%20sum_higher_lower_number.c)

    **Descrição:** Faça um programa que receba números inteiros digitados pelo usuário
    até que o mesmo digite zero.

    Ao final mostre qual foi o maior número digitado, o menor e a soma de todos os
    números que foram digitados até o zero.
  
    Obs1: Não armazenar os números em array. Deixar gravado apenas a soma, maior e menor.

    Obs2: variável tipo int pode armazenar de -2147483647 a 2147483647.
8. [**Exercício 8: Somador de números pares sem operador %**](./#8%20-%20even_numbers.c)

    **Descrição:**  Escrever um programa que solicite ao usuário um número inteiro N e, em seguida, use um loop for para calcular a soma de todos os números pares de 1 até N.
    Obs: Não utilizar operador resto de divisão.
9. [**Exercício 9: Quadrado de elementos de um array**](./#9%20-%20vectors.c)

    **Descrição:** Faça um programa que recebe 10 valores inteiros digitados pelo usuário,
      armazene os valores digitados em um array. Em seguida o programa deve
      criar um segundo array de 10 elementos onde os valores correspondem ao
      quadrado de cada valor digitado pelo usuário.
    Exiba os 2 arrays na tela.
10. [**Exercício 10: Desenhar uma matriz com vários números**](./#10%20-%20vectors.c)

    **Descrição:** Crie uma matriz 3x3 de inteiros, e peça para o usuário do programa
    preenchê-la: Em seguida exiba-a separando os elementos da mesma linha por “-”
    (traço) e separando as linhas por nova linha.
    Dica: Usar 2 lacos de repeticao FOR
11. [**Exercício 11: Receber uma string e armazená-la em um vetor**](./#11%20-%20strings.c)

    **Descrição:** Escreva um programa que solicite ao usuário que digite uma
        frase (com até 100 letras) e armazene essa frase em um vetor de caracteres.
12. [**Exercício 12: Contar vogais**](./#12%20-%20strings.c)

    **Descrição:** Baseado no exercício anterior, o programa deve percorrer o
    vetor e contar quantas vogais (a, e, i, o, u) foram digitadas pelo usuário.
13. [**Exercício 13: Separar nome e sobrenomes por espaço**](./#13%20-%20strings.c)

    **Descrição:** Faça um programa onde o usuário vai digitar o nome completo,
        separando nome e sobrenomes por espaço.
    - O programa separa o nome e os sobrenomes em strings diferentes.
    - Exiba o nome e sobrenome separados por nova linha!

14. [**Exercício 14: Use a função strtok no exercício anterior**](./#14%20-%20strings.c)

    **Descrição:** Baseado no exercício anterior, o programa deve utilizar a função
    **strtok** para fazer a delimitação.

<!-- 15. [**Exercício 15: **](./#15%20-%20ponteiros.c.c)

    **Descrição:** Baseado no exercício anterior, o programa deve percorrer o
    vetor e contar quantas vogais (a, e, i, o, u) foram digitadas pelo usuário.

16. [**Exercício 13: **](./#13%20-%20strings.c)

    **Descrição:** Baseado no exercício anterior, o programa deve percorrer o
    vetor e contar quantas vogais (a, e, i, o, u) foram digitadas pelo usuário.

17. [**Exercício 13: **](./#13%20-%20strings.c)

    **Descrição:** Baseado no exercício anterior, o programa deve percorrer o
    vetor e contar quantas vogais (a, e, i, o, u) foram digitadas pelo usuário.

18. [**Exercício 13: **](./#13%20-%20strings.c)

    **Descrição:** Baseado no exercício anterior, o programa deve percorrer o
    vetor e contar quantas vogais (a, e, i, o, u) foram digitadas pelo usuário.

19. [**Exercício 13: **](./#13%20-%20strings.c)

    **Descrição:** Baseado no exercício anterior, o programa deve percorrer o
    vetor e contar quantas vogais (a, e, i, o, u) foram digitadas pelo usuário.

20. [**Exercício 13: **](./#13%20-%20strings.c)

    **Descrição:** Baseado no exercício anterior, o programa deve percorrer o
    vetor e contar quantas vogais (a, e, i, o, u) foram digitadas pelo usuário.

21. [**Exercício 13: **](./#13%20-%20strings.c)

    **Descrição:** Baseado no exercício anterior, o programa deve percorrer o
    vetor e contar quantas vogais (a, e, i, o, u) foram digitadas pelo usuário.

22. [**Exercício 13: **](./#13%20-%20strings.c)

    **Descrição:** Baseado no exercício anterior, o programa deve percorrer o
    vetor e contar quantas vogais (a, e, i, o, u) foram digitadas pelo usuário.

23. [**Exercício 13: **](./#13%20-%20strings.c)

    **Descrição:** Baseado no exercício anterior, o programa deve percorrer o
    vetor e contar quantas vogais (a, e, i, o, u) foram digitadas pelo usuário.

24. [**Exercício 13: **](./#13%20-%20strings.c)

    **Descrição:** Baseado no exercício anterior, o programa deve percorrer o
    vetor e contar quantas vogais (a, e, i, o, u) foram digitadas pelo usuário.

25. [**Exercício 13: **](./#13%20-%20strings.c)

    **Descrição:** Baseado no exercício anterior, o programa deve percorrer o
    vetor e contar quantas vogais (a, e, i, o, u) foram digitadas pelo usuário.

26. [**Exercício 13: **](./#13%20-%20strings.c)

    **Descrição:** Baseado no exercício anterior, o programa deve percorrer o
    vetor e contar quantas vogais (a, e, i, o, u) foram digitadas pelo usuário.

27. [**Exercício 13: **](./#13%20-%20strings.c)

    **Descrição:** Baseado no exercício anterior, o programa deve percorrer o
    vetor e contar quantas vogais (a, e, i, o, u) foram digitadas pelo usuário.

28. [**Exercício 13: **](./#13%20-%20strings.c)

    **Descrição:** Baseado no exercício anterior, o programa deve percorrer o
    vetor e contar quantas vogais (a, e, i, o, u) foram digitadas pelo usuário.

29. [**Exercício 13: **](./#13%20-%20strings.c)

    **Descrição:** Baseado no exercício anterior, o programa deve percorrer o
    vetor e contar quantas vogais (a, e, i, o, u) foram digitadas pelo usuário.

30. [**Exercício 13: **](./#13%20-%20strings.c)

    **Descrição:** Baseado no exercício anterior, o programa deve percorrer o
    vetor e contar quantas vogais (a, e, i, o, u) foram digitadas pelo usuário.

31. [**Exercício 13: **](./#13%20-%20strings.c)

    **Descrição:** Baseado no exercício anterior, o programa deve percorrer o
    vetor e contar quantas vogais (a, e, i, o, u) foram digitadas pelo usuário.

32. [**Exercício 13: **](./#13%20-%20strings.c)

    **Descrição:** Baseado no exercício anterior, o programa deve percorrer o
    vetor e contar quantas vogais (a, e, i, o, u) foram digitadas pelo usuário.

33. [**Exercício 13: **](./#13%20-%20strings.c)

    **Descrição:** Baseado no exercício anterior, o programa deve percorrer o
    vetor e contar quantas vogais (a, e, i, o, u) foram digitadas pelo usuário.

34. [**Exercício 13: **](./#13%20-%20strings.c)

    **Descrição:** Baseado no exercício anterior, o programa deve percorrer o
    vetor e contar quantas vogais (a, e, i, o, u) foram digitadas pelo usuário.

35. [**Exercício 13: **](./#13%20-%20strings.c)

    **Descrição:** Baseado no exercício anterior, o programa deve percorrer o
    vetor e contar quantas vogais (a, e, i, o, u) foram digitadas pelo usuário. -->
