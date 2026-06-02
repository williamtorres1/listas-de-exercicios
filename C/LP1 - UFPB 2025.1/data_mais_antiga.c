#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

int comparaDatas(Data d1, Data d2) {
    if (d1.ano < d2.ano) {
        return 1;
    } else if (d1.ano > d2.ano) {
        return -1;
    }
    if (d1.mes < d2.mes) {
        return 1;
    } else if (d1.mes > d2.mes) {
        return -1;
    }
    if (d1.dia < d2.dia) {
        return 1;
    } else if (d1.dia > d2.dia) {
        return -1;
    }
    return 0;
}

int main() {
    Data data1, data2;
    
    scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);
    scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);
    
    int resultado = comparaDatas(data1, data2);
    
    if (resultado == 1) {
        printf("Pessoa 1 é mais velha\n");
    } else if (resultado == -1) {
        printf("Pessoa 2 é mais velha\n");
    } else {
        printf("Pessoas são da mesma idade\n");
    }
    
    return 0;
}
