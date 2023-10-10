#include <stdio.h>
#include <string.h>

struct Aluno {
  char nome[50];
  char sobrenome[50];
};

int main() {
  struct Aluno aluAprov[10];
  char nomeBusca[100];
  int i;

  printf("\nDigite os nomes e sobrenomes dos alunos aprovados no vestibular:\n");
  for (i = 0; i < 10; i++) {
    printf("Nome e sobrenome do aluno da posiçao %d: ", i + 1);
    scanf("%s %s", aluAprov[i].nome, aluAprov[i].sobrenome);
  }

  printf("Digite o nome completo do aluno que deseja buscar: ");
  scanf("%s %s", nomeBusca, nomeBusca + 50);

  int encontrado = 0;
  for (i = 0; i < 10; i++) {
    if (strcmp(aluAprov[i].nome, nomeBusca) == 0 && strcmp(aluAprov[i].sobrenome, nomeBusca + 50) == 0) {
      encontrado = 1;
      printf("\nO aluno %s %s foi aprovado e está na posição %d da lista.\n", aluAprov[i].nome, aluAprov[i].sobrenome, i + 1);
      break;
    }
  }
  
  if (!encontrado) {
    printf("Nome informado não está na lista de aprovados.\n");
  }
  return 0;
}
