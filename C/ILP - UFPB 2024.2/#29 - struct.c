#include <stdio.h>
#include <string.h>

#define NAMESIZE 50
#define CARGOSIZE 50
#define QUANTIDADEFUNCIONARIOS 100

typedef struct {
  char nome[NAMESIZE];
  char cargo[CARGOSIZE];
  unsigned int idade;
  unsigned int salario;
} typeFuncionario;

void clearKeyboardBuffer(){
  int c;
  while ((c = getchar()) != '\n' && c != EOF);
}

void cadastrarFuncionario(typeFuncionario *funcionariosArray, int *totalFuncionarios){
  printf("Digite o nome do funcionario: ");
  fgets(funcionariosArray[*totalFuncionarios].nome, NAMESIZE, stdin);
  printf("Digite o cargo do funcionario: ");
  fgets(funcionariosArray[*totalFuncionarios].cargo, CARGOSIZE, stdin);
  printf("Digite a idade do funcionario: ");
  scanf("%d", &funcionariosArray[*totalFuncionarios].idade);
  printf("Digite o salario do funcionario: ");
  scanf("%d", &funcionariosArray[*totalFuncionarios].salario);
  (*totalFuncionarios)++;
}

void listarFuncionarios(typeFuncionario *funcionariosArray, int totalFuncionarios){
  int i;
  printf("\tFuncionarios\n");
  for (i = 0; i < totalFuncionarios; i++){
    printf("\nFuncionario %d: \nNome: %sCargo: %sIdade: %d \nSalario: %d", 
      i+1, 
      funcionariosArray[i].nome,
      funcionariosArray[i].cargo,
      funcionariosArray[i].idade,
      funcionariosArray[i].salario
    );
    putchar('\n');
  }
}

void buscarFuncionarioPorNome(typeFuncionario *funcionariosArray, int totalFuncionarios){
  
  if (totalFuncionarios == 0){
    printf("Erro! Nenhum funcionario cadastrado!\n");
    return;
  }
  
  char nomePesquisado[NAMESIZE];
  int i;
  printf("Digite o nome a ser pesquisado: ");
  fgets(nomePesquisado, NAMESIZE, stdin);
  for (i = 0; i < totalFuncionarios; i++){
    if ((strcmp(nomePesquisado, funcionariosArray[i].nome)) == 0) {
      printf("\tFuncionario encontrado!\n");
      printf("Nome: %sCargo:%sIdade:%d \nSalario: %d\n",
        funcionariosArray[i].nome,
        funcionariosArray[i].cargo,
        funcionariosArray[i].idade,
        funcionariosArray[i].salario
      );
      break;
    }
  }
}

int main(){
  /*
    Implemente em C um sistema de cadastro de funcionários de uma empresa.
    Cada funcionário possui as seguintes informações: Nome, idade, cargo e 
      Salário. Defina a estrutura de dados para os funcionários (array de structs).
    O programa deve ter duas funcionalidades:
      a) Cadastrar Funcionário;
      b) Buscar o funcionário pelo nome e exibir os dados do funcionário 
        encontrado.    
  */
  typeFuncionario funcionarios[QUANTIDADEFUNCIONARIOS];
  int escolha = 0, totalFuncionarios = 0;
  do {
    printf("Digite qual funcionalidade quer acessar!\n");
    printf("1) Cadastrar Funcionario.\n");
    printf("2) Buscar Funcionario pelo nome.\n");
    printf("3) Listar todos os funcionarios.\n");
    printf("0) Sair do programa\n");
    scanf("%d", &escolha);
    clearKeyboardBuffer();
    switch (escolha){
      case 1:
        cadastrarFuncionario(funcionarios, &totalFuncionarios);
        break;
      case 2:
        buscarFuncionarioPorNome(funcionarios, totalFuncionarios);
        break;
      case 3:
        listarFuncionarios(funcionarios, totalFuncionarios);
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
