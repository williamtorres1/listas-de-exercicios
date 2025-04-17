#include <stdio.h>
#include <stdlib.h>

#define NAMESIZE 50

typedef enum {
  ANDROID,
  IOS
} OperationSystem;

typedef struct{
  OperationSystem SO;
} Smartphone;

typedef struct {
  unsigned int screenSize;
  unsigned int ramMemory;
} Notebook;

typedef enum {
  HD,
  FULL_HD,
  UHD_4K
} Resolution;

typedef struct {
  unsigned int screenSize;
  Resolution resolution;
} Televisor;

typedef enum {
  SMARTPHONE,
  NOTEBOOK,
  TELEVISOR
} product;

typedef union {
  Smartphone smartphone;
  Televisor televisor;
  Notebook notebook;
} Specifications;

typedef struct {
  char name[NAMESIZE];
  float price;
  product type;
  Specifications specs;
} productType;

void registryProducts(productType *products, unsigned int *registeredProducts){
  getchar(); //limpar buffer do teclado
  printf("Qual o nome do produto que deseja cadastrar?\n");
  fgets(products[*registeredProducts].name, NAMESIZE, stdin);
  printf("Qual o preço do produto que deseja cadastrar? ");
  scanf("%f", &products[*registeredProducts].price);
  printf("Qual produto deseja cadastrar?\n");
  printf("0)Smartphone \n1)Notebook \n2)Televisor\n");
  scanf("%d", (int *) &products[*registeredProducts].type);
  switch(products[*registeredProducts].type){
    case SMARTPHONE:
      printf("Qual o Sistema Operacional do Smartphone? \n0)Android \n1)IOS\n");
      scanf("%d", (int *)&products[*registeredProducts].specs.smartphone.SO);
      break;
    case NOTEBOOK:
      printf("Qual o tamanho da tela, em polegadas? ");
      scanf("%u", &products[*registeredProducts].specs.notebook.screenSize);
      printf("Qual a quantidade de memória ram, em GB? ");
      scanf("%u", &products[*registeredProducts].specs.notebook.ramMemory);
      break;
    case TELEVISOR:
      printf("Qual o tamanho da tela, em polegadas? ");
      scanf("%u", &products[*registeredProducts].specs.televisor.screenSize);
      printf("Qual a resolução do televisor?\n");
      printf("0)HD \n1)Full HD \n2)UHD_4k\n");
      scanf("%d", (int *)&products[*registeredProducts].specs.televisor.resolution);
      break;
    default:
      printf("Opção inválida! Tente novamente.\n");
      break;
  }
  (*registeredProducts)++;
}

void showProducts(productType *products, unsigned int registeredProducts){
  if (!registeredProducts) {
    printf("Nenhum produto registrado! \n");
    return;
  }
  unsigned int i;
  for (i = 0; i < registeredProducts; i++) {
    printf("Nome do produto: %sPreço: R$ %.2f\n", products[i].name, products[i].price);
    switch(products[i].type){
      case SMARTPHONE:
        printf("Sistema Operacional: %s\n", 
          (products[i].specs.smartphone.SO == ANDROID ? "Android" : "iOS"));
        break;
      case NOTEBOOK:
        printf("Tamanho da Tela: %u\"\n", products[i].specs.notebook.screenSize);
        printf("Quantidade de memória RAM: %u\n", products[i].specs.notebook.ramMemory);
        break;
      case TELEVISOR:
        printf("Tamanho da tela: %u\"\n", products[i].specs.televisor.screenSize);
        switch(products[i].specs.televisor.resolution) {
          case HD:
            printf("Resolução: HD");
            break;
          case FULL_HD:
            printf("Resolução: Full HD");
            break;
          case UHD_4K:
            printf("Resolução: 4K");
            break;
          default:
            printf("Resolução desconhecida!\n");
            break;
        }
        putchar('\n');
        break;
    }
  }
}

int main(){
  /*
    Considere uma loja de eletrônicos que vende três tipos de produtos: 
      smartphones,notebooks e televisores.
    Cada produto possui as seguintes informações: nome e preço. 
    Além disso, cada produto possui informações específicas, descritas a seguir:
      - Smartphone: sistema operacional (Android ou iOS)
      - Notebook: tamanho da tela (em polegadas) e quantidade de memória RAM (em GB).
      - Televisor: tamanho da tela (em polegadas) e resolução (HD, Full HD ou 4K).
    a) Crie uma estrutura chamada "Produto" que armazene todas as informações 
      descritas acima.
      Utilize as estruturas "enum" e "union" caso seja necessário.
    b) Crie um programa que permita ao usuário cadastrar produtos na loja e 
      imprimir na tela os produtos cadastrados.
  */
  int escolha = 0, i = 0;
  unsigned int registeredProducts = 0;
  printf("Digite quantos produtos irá armazenar: ");
  scanf("%d", &i);
  productType *products;
  products = (productType *)malloc(i * sizeof(productType));
  if (products == NULL) {
    printf("Erro na alocação de memória!\n");
    return 1;
  }
  do {
    printf("Digite qual funcionalidade quer acessar!\n");
    printf("1) Cadastrar Produto.\n");
    printf("2) Listar todos os produtos.\n");
    printf("0) Sair do programa\n");
    scanf("%d", &escolha);
    switch(escolha){
      case 1:
        // cadastro de produtos
        registryProducts(products, &registeredProducts);
        break;
      case 2:
        // Listagem de produtos
        showProducts(products, registeredProducts);
        break;
      case 0:
        // Encerrar o programa
        printf("Encerrando...");
        break;
      default:
        printf("Opção inválida! Tente novamente.\n");
        break;
    }
  } while(escolha);
  free(products);
  return 0;
}
