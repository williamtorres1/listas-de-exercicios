/***********************************************************
*   File:    #33 - struct.c                                *
*   Authors: William Torres     || @williamtorres1         *
*            Laís Viana         || @laisvianamelo          *
************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAMESIZE 50

typedef enum {
    ANDROID,
    IOS
} SistemaOperacional;

typedef enum {
    HD,
    FULL_HD,
    UHD_4K
} Resolucao;

typedef struct {
    SistemaOperacional sistema;
} Smartphone;

typedef struct{
    float tamanhoTela;
    int memoriaRAM;
} Notebook;

typedef struct{
    float tamanhoTela;
    Resolucao resolucao;
} Televisor;

typedef union {
    Smartphone smartphone;
    Notebook notebook;
    Televisor televisor;
} Especificacoes;

typedef enum {
    SMARTPHONE,
    NOTEBOOK,
    TELEVISOR
} Tipodoproduto;

typedef struct{
    char nome[NAMESIZE];
    float preco;
    Tipodoproduto tipo;
    Especificacoes especificacoes;
} Produto;

void cadastrarProduto(Produto *produto){
  printf("\nCadastro do Produto\n");
  printf("\nNome: ");
  scanf("%[^\n]", &produto->nome);
  printf("Digite o preco do produto: ");
  scanf("%f", &produto->preco);
  int tipo;
  printf("Digite o tipo do produto:\n1)Smartphone \n2)Notebook \n3)Televisor\n");
  scanf("%d", &tipo);
  switch (tipo){
    case 1:
      produto->tipo = SMARTPHONE;
      int sistema;
      printf("Sistema Operacional: \n1)Android \n2)IOS\n");
      scanf("%d", &sistema);
      produto->especificacoes.smartphone.sistema = (sistema == 1)? ANDROID : IOS;        
      break;
    case 2:
      produto->tipo = NOTEBOOK;
      printf("Tamanho da tela (polegadas): ");
      scanf("%f", &produto->especificacoes.notebook.tamanhoTela);
      printf("Memória RAM (GB): ");
      scanf("%d", &produto->especificacoes.notebook.memoriaRAM);
      break;
    case 3:
      produto->tipo =TELEVISOR;
      printf("Tamanho da tela (polegadas): ");
      scanf("%f", &produto->especificacoes.televisor.tamanhoTela);
      int resolucao;
      printf("Resolução: \n1)HD \n2)Full HD \n3)4K\n");
      scanf("%d", &resolucao);
      produto->especificacoes.televisor.resolucao = (resolucao == 1) ? HD: (resolucao == 2) ? FULL_HD: UHD_4K;
      break;
    default:
      break;
  }
}

void listarProdutos(Produto produto){
  printf("\nNome: %s\n", produto.nome);
  printf("Preço: R$%.2f\n", produto.preco);
  switch (produto.tipo){
    case SMARTPHONE:
      printf("Tipo: Smartphone \nSistema Operacional: %s\n", produto.especificacoes.smartphone.sistema == ANDROID ? "Android" : "iOS");
      break;
    case NOTEBOOK:
      printf("Tipo: Notebook \nTamanho da tela: %.1f Polegadas\n", produto.especificacoes.notebook.tamanhoTela);
      printf("Memória Ram: %d GB\n", produto.especificacoes.notebook.memoriaRAM);
      break;
    case TELEVISOR:
      printf("Tipo: Televisor \nTamanho da tela: %.1f Polegadas \nResolução: ", produto.especificacoes.televisor.tamanhoTela);
      switch (produto.especificacoes.televisor.resolucao){
        case HD:
          printf("HD\n");
          break;
        case FULL_HD:
            printf("Full HD\n");
            break;
        case UHD_4K:
            printf("4K\n");
            break;
        default:
            break;
      }
      break;
    default:
        break;
  }
}

int main(){

  /**
   2.(2,5pts)
    Considere uma loja de eletrônicos que vende três tipos de produtos: smartphones,
      notebooks e televisores.
    Cada produto possui as seguintes informações: nome e preço. Além disso, cada
      produto possui informações específicas, descritas a seguir:
    • Smartphone: sistema operacional (Android ou iOS)
    • Notebook: tamanho da tela (em polegadas) e quantidade de memória RAM (em GB).
    • Televisor: tamanho da tela (em polegadas) e resolução (HD, Full HD ou 4K).
    a) Crie uma estrutura chamada "Produto" que armazene todas as informações descritas acima.
    Utilize as estruturas "enum" e "union" caso seja necessário.
    c) Crie um programa que permita ao usuário cadastrar produtos na loja e imprimir na tela os
    produtos cadastrados.
  */
    int capacidade = 10, escolha = 0, produtosCadastrados = 0;
    int i;
    Produto produto[10];
    do {
      printf(" 1)Cadastrar Produto \n2)Listar Produtos \n0)Encerrar programa\n");
      scanf("%d", &escolha);
      switch (escolha){
      case 1:
        cadastrarProduto(produto);
        produtosCadastrados++;
        break;
      case 2:
        printf("\n\tProdutos cadastrados!");
        for (i = 0; i < produtosCadastrados; i++){
            listarProdutos(produto[i]);
        }
        break;
      default:
        break;
      }
    } while(escolha);
    free(produto);
    return 0;
}
