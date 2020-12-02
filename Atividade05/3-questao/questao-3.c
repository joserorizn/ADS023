#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {

  int x, y, tam;
  char nome[80];

  printf("Digite uma palavra ou número de no máximo 80 caracteres: ");
  fgets(nome,80,stdin);
  
  tam = strlen(nome);
  
  printf("\n A palavra ou numero de forma invertida eh: ");
  
  for (x = tam - 1; x >= 0; x--) {
    printf("%c", nome[x]);
  }

}