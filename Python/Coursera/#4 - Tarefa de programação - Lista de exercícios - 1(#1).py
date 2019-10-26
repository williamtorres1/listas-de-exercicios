'''
Exercício 1
Faça um programa em Python que receba (entrada de dados) o valor correspondente ao lado de um quadrado,
calcule e imprima (saída de dados) seu perímetro e sua área.

Observação: a saída deve estar no formato: "perímetro: x - área: y"

Abaixo um exemplo de como deve ser a entrada e saída de dados do programa:

Exemplo:

Entrada de Dados:
Digite o valor correspondente ao lado de um quadrado: 3

Saída de Dados:
perímetro: 12 - área: 9
'''

lado_quadrado = int(input('Digite o valor correspondente ao lado de um quadrado: '))
perimetro_quadrado = lado_quadrado * 4
area_quadrado = lado_quadrado ** 2
print('perímetro: {} - área: {}'.format(perimetro_quadrado,area_quadrado))
