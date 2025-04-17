/***********************************************************
*   File:    #35 -struct-files.c                           *
*   Authors: William Torres     || @williamtorres1         *
*            Laís Viana         || @laisvianamelo          *
************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ALUNOS 100
#define TAM_NOME 100

typedef struct {
    char nome[TAM_NOME];
    float nota1;
    float nota2;
} Aluno;

int carregarAlunos(const char *nome_arquivo, Aluno alunos[]) {
  FILE *arquivo = fopen(nome_arquivo, "r");
  if (arquivo == NULL) {
    printf("Erro ao abrir o arquivo %s\n", nome_arquivo);
    return 0;
  }
  int count = 0;
  while (fscanf(arquivo, " %[^,],%f,%f", alunos[count].nome, 
      &alunos[count].nota1, &alunos[count].nota2) == 3) {
    count++;
    if (count >= MAX_ALUNOS) break;
  }
  fclose(arquivo);
  return count;
}

void salvarAlunos(const char *nome_arquivo, Aluno alunos[], int total_alunos) {
  FILE *arquivo = fopen(nome_arquivo, "w");
  if (arquivo == NULL) {
    printf("Erro ao abrir o arquivo %s para escrita\n", nome_arquivo);
    return;
  }

  for (int i = 0; i < total_alunos; i++) {
    fprintf(arquivo, "%s,%.2f,%.2f\n", alunos[i].nome, alunos[i].nota1, alunos[i].nota2);
  }

  fclose(arquivo);
}

void listarAlunos(Aluno alunos[], int total_alunos) {
  printf("\nLista de Alunos:\n");
  printf("-------------------------------------------------\n");
  printf("%-30s %-10s %-10s\n", "Nome", "Nota 1", "Nota 2");
  printf("-------------------------------------------------\n");
  for (int i = 0; i < total_alunos; i++) {
    printf("%-30s %-10.2f %-10.2f\n", alunos[i].nome, alunos[i].nota1, alunos[i].nota2);
  }
  printf("-------------------------------------------------\n");
}

int buscarAlunoPorNome(Aluno alunos[], int total_alunos, const char *nome) {
  for (int i = 0; i < total_alunos; i++) {
    if (strcmp(alunos[i].nome, nome) == 0) {
      return i;
    }
  }
  return -1;
}

void modificarAluno(Aluno *aluno) {
  int opcao;
  do {
    printf("\nDados atuais do aluno:\n");
    printf("1. Nome: %s\n", aluno->nome);
    printf("2. Nota 1: %.2f\n", aluno->nota1);
    printf("3. Nota 2: %.2f\n", aluno->nota2);
    printf("4. Voltar ao menu principal\n");
    
    printf("\nO que deseja modificar? ");
    scanf("%d", &opcao);
    
    switch (opcao) {
      case 1:
        printf("Novo nome: ");
        scanf(" %[^\n]", aluno->nome);
        break;
      case 2:
        printf("Nova Nota 1: ");
        scanf("%f", &aluno->nota1);
        break;
      case 3:
        printf("Nova Nota 2: ");
        scanf("%f", &aluno->nota2);
        break;
      case 4:
        break;
      default:
        printf("Opção inválida!\n");
    }
  } while (opcao != 4);
}

int main() {
  /*
    4.(2,5pts)
    Faça um programa em C que recebe um arquivo txt com os nomes e as duas notas
    de alunos no formato : nome1, nota 1, nota 2.
    Faça uma função que permita ao usuário modificar esses dados, onde a busca
      será a partir do nome. Dê as opções de alterar o nome ou alguma das notas.
  */
  Aluno alunos[MAX_ALUNOS];
  char nome_arquivo[] = "alunos.txt";
  int total_alunos = carregarAlunos(nome_arquivo, alunos);
  if (total_alunos == 0) {
    printf("Nenhum aluno encontrado no arquivo ou arquivo vazio.\n");
    printf("Crie um arquivo 'alunos.txt' com dados no formato: nome,nota1,nota2\n");
    return 1;
  }
  int opcao;
  do {
    printf("\nSistema de Gerenciamento de Alunos\n");
    printf("1. Listar todos os alunos\n");
    printf("2. Buscar e modificar aluno por nome\n");
    printf("3. Salvar alterações e sair\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
      case 1:
        listarAlunos(alunos, total_alunos);
        break;
      case 2: {
        char nome_busca[TAM_NOME];
        printf("Digite o nome do aluno: ");
        scanf(" %[^\n]", nome_busca);
        int indice = buscarAlunoPorNome(alunos, total_alunos, nome_busca);
        if (indice == -1) {
            printf("Aluno não encontrado!\n");
        } else {
            modificarAluno(&alunos[indice]);
            printf("Aluno modificado com sucesso!\n");
        }
        break;
      }   
      case 3:
        salvarAlunos(nome_arquivo, alunos, total_alunos);
        printf("Alterações salvas no arquivo %s\n", nome_arquivo);
        break;
      default:
        printf("Opção inválida!\n");
    }
  } while (opcao != 3);
  free(alunos);
  return 0;
}
