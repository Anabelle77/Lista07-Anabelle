#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char input[21];

  printf("Digite uma string (máximo de 20 caracteres): ");
  fgets(input, sizeof(input), stdin);

  int len = strlen(input);
  int numVogais = 0;
  for (int i = 0; i < len; i++) {
    char c = tolower(input[i]);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
      numVogais++;
    }
  }
  printf("Número de vogais na string: %d\n", numVogais);
  return 0;
}
