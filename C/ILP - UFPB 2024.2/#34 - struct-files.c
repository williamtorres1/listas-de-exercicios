/***********************************************************
*   File:    #34 -struct-files.c                           *
*   Authors: William Torres     || @williamtorres1         *
*            Laís Viana         || @laisvianamelo          *
************************************************************/
#include <stdio.h>

#define NAMESIZE 50

typedef enum {
  APROVADO,
  REPROVADO
} alunoSituacao;

typedef struct {
  char nome[NAMESIZE];
  float media;
  alunoSituacao situacao;
} dadosAlunos;

typedef struct {
  unsigned int aprovadosQuantidade;
  unsigned int reprovadosQuantidade;
  float mediaTurma;
  float percentagemAprovados;
} dadosTurma;

void cadastrarAlunos(dadosAlunos *alunos, int *alunosRegistrados){
  float nota1, nota2;
  getchar();//Limpar buffer do teclado
  printf("Digite o nome do aluno: ");
  fgets(alunos[*alunosRegistrados].nome, NAMESIZE, stdin);
  printf("Digite as duas notas do aluno: ");
  scanf("%f %f", &nota1, &nota2);
  alunos[*alunosRegistrados].media = (nota1 + nota2)/2;
  if (alunos[*alunosRegistrados].media >= 7){
    alunos[*alunosRegistrados].situacao = APROVADO;
  }
  else alunos[*alunosRegistrados].situacao = REPROVADO;
  (*alunosRegistrados)++;
}

void relatorioDaTurma(dadosAlunos *alunos, int alunosRegistrados){
  dadosTurma turma;
  turma.mediaTurma = 0;
  turma.aprovadosQuantidade = 0;
  turma.reprovadosQuantidade = 0;
  turma.percentagemAprovados = 0;
  char string_final[100];

  int i;

  for (i = 0; i < alunosRegistrados; i++){
    if (alunos[i].situacao == 0){
      turma.aprovadosQuantidade = turma.aprovadosQuantidade + 1;
    }
    else if (alunos[i].situacao == 1) {
      turma.reprovadosQuantidade = turma.reprovadosQuantidade + 1;
    }
    turma.mediaTurma += alunos[i].media;
  }
  turma.percentagemAprovados = 100 * ((float) turma.aprovadosQuantidade / alunosRegistrados);
  turma.mediaTurma = turma.mediaTurma / alunosRegistrados;

  sprintf(string_final, "\n\t Relatório da turma!\n"
  "\nMédia da turma: %.2f \nAprovados: %d | Reprovados: %d | percentagem de Aprovados: %.2f%% \n", 
    turma.mediaTurma,
    turma.aprovadosQuantidade,
    turma.reprovadosQuantidade,
    turma.percentagemAprovados);
  
  printf("%s", string_final);

  FILE *relatorio;
  relatorio = fopen("relatorio.txt", "wb");
  if (relatorio == NULL){
    printf("Erro! Arquivo não criado!");
    return;
  }
  if(fputs(string_final, relatorio) == -1)
    printf("Erro! Arquivo não salvo!");
  fclose(relatorio);
}

int main(){
  /*
    3.(2,5pts)
    Faça um programa que receba, via teclado, o nome e as duas notas dos alunos
    a)Armazene essas informações em um Array de Structs, Use alocação dinâmica
      para criar esse array de acordo com o número de alunos informado pelo usuário.
    b)faça um relatório contendo: Média da classe; Quantidade de aprovados;
      Quantidade de reprovados; porcentagem de aprovados.
    c)Esse relatório deve ser salvo em um arquivo relatorio.txt.
    Opcional: Gere um arquivo com os dados digitados no formato nome1, nota 1, nota2
  */
  unsigned int quantidadeAlunos = 0;
  printf("Digite a quantidade de alunos a ser registrado: ");
  scanf("%d", &quantidadeAlunos);

   dadosAlunos *alunos;
   alunos = (dadosAlunos *) malloc(quantidadeAlunos * sizeof(dadosAlunos)); 
   int escolha = 0, alunosRegistrados = 0;
   while (1){
    printf("Digite o que quer fazer: \n1)Cadastrar aluno \n2)Relatório da turma \n0)Sair do programa");
    scanf("%d", &escolha);
    if (escolha == 1) {
      cadastrarAlunos(alunos, &alunosRegistrados);
     } else if (escolha == 2) {
      relatorioDaTurma(alunos, alunosRegistrados);
     }
    else return 0;
   }
   free(alunos);
   return 0;
}
