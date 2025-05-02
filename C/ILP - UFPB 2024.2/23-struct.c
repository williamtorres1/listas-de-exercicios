#include <stdio.h>

#define NAMESIZE 100
#define CITIZENS 100

typedef enum {
  CISMASCULINO,
  CISFEMININO,
  TRANSMASCULINO,
  TRANSFEMININO,
  NAOBINARIO,
} gender;

typedef struct {
  char name[NAMESIZE];
  int age;
  gender peopleGender;
} people;

void clearKeyboardBuffer(){
  int c;
  while ((c = getchar()) != '\n' && c != EOF);
}

void fillCitizensData(people *citizens, int *lastRegisteredCitizen) {
  int i =  *lastRegisteredCitizen;
  printf("Digite o nome do cidadão: ");
  fgets(citizens[i].name, NAMESIZE, stdin);
  printf("Digite a idade do cidadão: ");
  scanf("%d", &citizens[i].age);
  printf("Qual o gênero do cidadão?");
  printf("\n0)CISMASCULINO\n1)CISFEMININO\n2)TRANSMASCULINO\n3)TRANSFEMININO\n4)NAOBINARIO\n");
  scanf("%d", &citizens[i].peopleGender);
  clearKeyboardBuffer();
  (*lastRegisteredCitizen)++;
}
void modifyData(people *citizens){
  int targetCitizen = 0;
  printf("Digite o id do cidadão para alterar dados: ");
  scanf("%d", &targetCitizen);
  clearKeyboardBuffer();
  printf("Digite o nome modificado do cidadão: ");
  fgets(citizens[targetCitizen].name, NAMESIZE, stdin);
  printf("Digite a idade corrigida do cidadão: ");
  scanf("%d", &citizens[targetCitizen].age);
  printf("Qual o gênero corrigido do cidadão?");
  printf("\n0)CISMASCULINO \n1)CISFEMININO\n2)TRANSMASCULINO\n3)TRANSFEMININO\n4)NAOBINARIO\n");
  scanf("%d", &citizens[targetCitizen].peopleGender);
  clearKeyboardBuffer();
}
void showData (people *citizens, int *registeredCitizens){
  int i;
  for (i = 0; i < *registeredCitizens; i++){
    printf("\nCidadão: %d \nNome: %sIdade: %d \nGênero: ", i+1, 
      citizens[i].name, (citizens[i].age));
    switch((citizens[i].peopleGender)) {
      case CISMASCULINO: printf("Homem Cis"); break;
      case CISFEMININO: printf("Mulher Cis"); break;
      case TRANSMASCULINO: printf("Homem Trans"); break;
      case TRANSFEMININO: printf("Mulher Trans"); break;
      case NAOBINARIO: printf("Pessoa Não-binária"); break;
      default: printf("Gênero não localizado/inválido! "); break;
    }
  }
  putchar('\n');
}

int main(){
  /*
    Faça um struct “pessoa”, que vai conter campos para o nome, idade, gênero e
     profissão.
    Crie um array desse struct com no máx 100 posições;
    • Faça uma função que permita o usuário preencher os dados
    • Faça outra função que permita ao usuário modificar qualquer um dos campos.
    • Por fim uma função para exibir os dados
  */
  int registeredCitizens = 0, menu = 0;
  people citizens[CITIZENS];
  do {
    printf("1)Preencher dados dos cidadãos \n2)Modificar dados do cidadão\n");
    printf("3)Exibir todos os cidadãos \n0)Encerrar o programa\n");
    scanf("%d", &menu);
    clearKeyboardBuffer();
    switch (menu) {
      case 1: fillCitizensData(citizens, &registeredCitizens); break;
      case 2: modifyData(citizens); break;
      case 3: showData(citizens, &registeredCitizens); break;
      default: break;
    }
  } while(menu);
  return 0;
}
