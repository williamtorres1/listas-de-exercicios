/***********************************************************
*   File:    32-struct.c                                   *
*   Authors: William Torres     || @williamtorres1         *
*            Laís Viana         || @laisvianamelo          *
************************************************************/
#include <stdio.h>
#include <string.h>

#define NAMESIZE 50

typedef struct {
  char nome[NAMESIZE];
  char sobrenome[NAMESIZE];
  unsigned int idade;
  unsigned int salario;
} typeFuncionario;

void cadastrarFuncionario(typeFuncionario *funcionariosArray, int *totalFuncionarios){
  printf("Digite o nome do funcionario: ");
  fgets(funcionariosArray[*totalFuncionarios].nome, NAMESIZE, stdin);
  printf("Digite o sobrenome do funcionario: ");
  fgets(funcionariosArray[*totalFuncionarios].sobrenome, NAMESIZE, stdin);
  printf("Digite a idade do funcionario: ");
  scanf("%d", &funcionariosArray[*totalFuncionarios].idade);
  printf("Digite o salario do funcionario: ");
  scanf("%d", &funcionariosArray[*totalFuncionarios].salario);
  (*totalFuncionarios)++;
}
void buscarFuncionarioPorNome(typeFuncionario *funcionariosArray, int totalFuncionarios){
  
  if (totalFuncionarios == 0){
    printf("Erro! Nenhum funcionario cadastrado!\n");
    return;
  }
  
  char nomePesquisado[NAMESIZE];
  char sobrenomePesquisado[NAMESIZE];
  int i;
  printf("Digite o nome a ser pesquisado: ");
  fgets(nomePesquisado, NAMESIZE, stdin);
  printf("Digite o sobrenome a ser pesquisado: ");
  fgets(sobrenomePesquisado, NAMESIZE, stdin);
  for (i = 0; i < totalFuncionarios; i++){
    if ((strcmp(nomePesquisado, funcionariosArray[i].nome)) == 0 
      && (strcmp(sobrenomePesquisado, funcionariosArray[i].sobrenome)) == 0) {
        printf("\tFuncionario encontrado!\n");
        printf("Nome: %sSobrenome:%sIdade:%d \nSalario: %d\n",
          funcionariosArray[i].nome,
          funcionariosArray[i].sobrenome,
          funcionariosArray[i].idade,
          funcionariosArray[i].salario
        );
        break;
    }
  }
}

int main(){
  /*
    1.(2,5pts)
    Implemente em C um sistema de cadastro de funcionários de uma empresa. 
    Cada funcionário possui as seguintes informações: Nome, Sobrenome, Idade e
      Salário.
    Defina a estrutura de dados para os funcionários (array de structs de no 
      max 10).
    O programa deve ter duas funcionalidades: Cadastrar Funcionário e Buscar o
      funcionário pelo nome e sobrenome, caso encontre, exibir os dados do funcionário.
  */
  typeFuncionario funcionarios[10];
  int escolha = 0, totalFuncionarios = 0;
  do {
    printf("Digite qual funcionalidade quer acessar!\n");
    printf("1) Cadastrar Funcionario.\n");
    printf("2) Buscar Funcionario pelo nome.\n");
    printf("0) Sair do programa\n");
    scanf("%d", &escolha);
    getchar();
    switch (escolha){
      case 1:
        cadastrarFuncionario(funcionarios, &totalFuncionarios);
        break;
      case 2:
        buscarFuncionarioPorNome(funcionarios, totalFuncionarios);
        break;
      case 0:
        break;
      default:
        printf("Opção inválida!");
        break;
    }
  } while(escolha);
  return 0;
}
