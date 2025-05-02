#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define STUDENTSNUMBER 50
#define NAMESIZE 30
#define REGISTRYSIZE 10
typedef enum {
  CURSANDO,
  APROVADO,
  REPROVADO,
  FINAL
} situation;

typedef struct {
  char name[NAMESIZE];
  char registry[REGISTRYSIZE];
  float examPunctuation[3];
  situation studentSituation;
} student;

void clearKeyboardBuffer(){
  int c;
  while ((c = getchar()) != '\n' && c != EOF);
}

situation calcPunctuation(float *exam1, float *exam2, float *exam3) {
  float median = (*exam1 + *exam2 + *exam3)/3;
  if (median >= 7) return APROVADO;
  if (median >= 4) return FINAL;
  else return REPROVADO;
}

void registryStudent(student *students, int *registeredStudents){
  if (*registeredStudents >= STUDENTSNUMBER) {
    printf("Erro! Número máximo de alunos registrados!");
    return;
  }
  printf("Digite o nome do estudante: ");
  fgets(students[*registeredStudents].name, NAMESIZE, stdin);
  printf("Digite a matrícula do estudante: ");
  fgets(students[*registeredStudents].registry, REGISTRYSIZE, stdin);
  printf("Digite as três notas do estudante: ");
  scanf("%f %f %f", 
    &students[*registeredStudents].examPunctuation[0], 
    &students[*registeredStudents].examPunctuation[1], 
    &students[*registeredStudents].examPunctuation[2]
  );
  students[*registeredStudents].studentSituation = calcPunctuation(
    &students[*registeredStudents].examPunctuation[0], 
    &students[*registeredStudents].examPunctuation[1], 
    &students[*registeredStudents].examPunctuation[2]
  );
  (*registeredStudents)++;
  clearKeyboardBuffer();
}

void searchStudentByRegistry(student *students, int *registeredStudents){
  int i;
  char registry[REGISTRYSIZE];
  printf("Digite a matrícula para procurarmos: ");
  fgets(registry, REGISTRYSIZE, stdin);
  for (i = 0; i < *registeredStudents; i++) {
    if (!(strcmp(students[i].registry, registry))) {
      printf("\nEstudante %d \nNome: %s \nMatrícula: %s\n", 
        i+1, 
        students[i].name,
        students[i].registry
      );
      printf("Notas: %.2f || %.2f || %.2f", students[i].examPunctuation[0],
        students[i].examPunctuation[1],
        students[i].examPunctuation[2]
      );
      switch (students[i].studentSituation){
        case APROVADO:
          printf("Situação: Aprovado.\n");
          break;
        case REPROVADO:
          printf("Situação: Reprovado.\n");
          break;
        case FINAL:
          printf("Situação: Final.\n");
          break;
        default:
          break;
        }
      break;
    }
  }
}

void showReport(student *students, int *registeredStudents){
  int i;
  for (i = 0; i < *registeredStudents ; i++){
    printf("\nEstudante %d \nNome: %s \nMatrícula: %s\n", 
      i + 1,
      students[i].name,
      students[i].registry
    );
    printf("Nota I)%.2f II)%.2f III)%.2f\n", 
      students[i].examPunctuation[0],
      students[i].examPunctuation[1],
      students[i].examPunctuation[2]
    );
    switch (students[i].studentSituation){
    case APROVADO:
      printf("Situação: Aprovado.\n");
      break;
    case REPROVADO:
      printf("Situação: Reprovado.\n");
      break;
    case FINAL:
      printf("Situação: Final.\n");
      break;
    default:
      break;
    }
  }
}

int main(){
  /*
  Faça um programa em C que armazene os dados de até 50 alunos: Nome, matrícula,
    3 notas e situação entre aprovado, na final ou reprovado.
  Faça 3 funções: cadastrar aluno, buscar aluno pela matrícula e exibir um 
    relatório da turma (número de alunos, média da turma, número de aprovados).
  Dicas: usar typedef struct, pode usar union no caso da situação do aluno, 
    criar array de struct    
  */
  student students[STUDENTSNUMBER] = {0};
  int escolha = 0, registeredStudents = 0;
  do {
    printf("\nDigite o número correspondente a função que deseja executar.");
    printf("\n1) Verificar relatório de todos os estudantes.");
    printf("\n2) Registrar novo estudante.");
    printf("\n3) Buscar aluno por matrícula");
    printf("\n0) Fechar programa\n");
    scanf("%d", &escolha);
    clearKeyboardBuffer();
    switch (escolha){
      case 1:
        showReport(students, &registeredStudents);
        break;
      case 2:
        registryStudent(students, &registeredStudents);
        break;
      case 3: 
        searchStudentByRegistry(students, &registeredStudents);
        break;
      case 0:
        break;
      default:
        printf("Opção inválida! Tente novamente.");
        break;
    }
  } while(escolha);

  return 0;
}
