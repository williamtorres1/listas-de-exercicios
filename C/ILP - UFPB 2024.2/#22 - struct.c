#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define STUDENTSNUMBER 3

typedef enum {
  CURSANDO,
  APROVADO,
  REPROVADO,
  FINAL
} situation;

typedef struct {
  char name[30];
  char registry[10];
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

void registryStudent(student *students){
  int i;
  for (i = 0; i < STUDENTSNUMBER; i++){
    printf("Digite o nome do estudante: ");
    fgets(students[i].name, 30, stdin);
    printf("Digite a matrícula do estudante: ");
    fgets(students[i].registry, 10, stdin);
    printf("Digite as três notas do estudante: ");
    scanf("%f %f %f", 
      &students[i].examPunctuation[0], 
      &students[i].examPunctuation[1], 
      &students[i].examPunctuation[2]
    );
    clearKeyboardBuffer();
    students[i].studentSituation = calcPunctuation(
      &students[i].examPunctuation[0], 
      &students[i].examPunctuation[1], 
      &students[i].examPunctuation[2]
    );
  }
}

// void searchStudentByRegistry(){}

void showReport(student *students){
  int i;
  for (i = 0; i < STUDENTSNUMBER ; i++){
    printf("\nEstudante %d \nNome: %s \nMatrícula: %s", 
      i + 1,
      students[i].name,
      students[i].registry
    );
    printf("Nota I)%.2f II)%.2f III)%.3f\n", 
      students[i].examPunctuation[0],
      students[i].examPunctuation[1],
      students[i].examPunctuation[2]
    );
    switch (students[i].studentSituation)
    {
    case APROVADO:
      printf("Situação: Aprovado.\n");
      break;
    case REPROVADO:
      printf("Situação: Reprovado.\n");
    case FINAL:
      printf("Situação: Final.\n");
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
  student students[STUDENTSNUMBER];
  registryStudent(students);
  showReport(students);

  return 0;
}
