'''
    Crie um programa que converta uma temperatura em fahrenheit para uma temperatura em Celsius.
'''
temperatura_Fahrenheit = float(input('Qual a Temperatura: '))
temperatura_Celsius = (temperatura_Fahrenheit - 32)*(5/9)
print('{}° F equivale à {:.2f}°C'.format(temperatura_Fahrenheit,temperatura_Celsius))

'''
    Crie um programa que converta um dado número de segundos
        em horas, minutos e segundos.
'''
segundos = int(input('Digite o número de segundos: '))
horas = segundos // 3600
segundos_restantes = segundos%3600
minutos = segundos_restantes // 60
segundos_restantes = segundos_restantes % 60
print('{0} segundos são, respectivamente, {1} horas, {2} minutos, e {3} segundos'.format(segundos,horas,minutos,segundos_restantes))