altura = float(input('Digite sua altura, em metros: '))
peso = float(input('Digite seu peso, em kgs: '))
idade = int(input('Digite sua iade: '))
IMC = peso / altura ** 2
if altura < 3.0 and altura > 0.3 and peso > 0 and peso < 550:
    print('Você tem {} anos, e seu IMD é {:.2f}'.format(idade,IMC))
else:
    print('Voce digitou algum valor errado, o programa ira encerrar...')