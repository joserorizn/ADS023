#include <stdio.h>

int main() {
  int numero, guarda_maior, guarda_menor;
  int i;

  printf("Entre com o primeiro numero inteiro: ");
  scanf("%i", &numero);

  guarda_maior = numero;
  guarda_menor = numero;

  for (i = 1; i < 10; i++) {
    printf("\nEntre com o %dº numero inteiro: ", i + 1);
    scanf("%i", &numero);

    if (numero > guarda_maior) {
      guarda_maior = numero;
    } else if (numero < guarda_menor) {
      guarda_menor = numero; 
    }
  }

  printf("\n O menor numero entrado e: %d", guarda_menor);
  printf("\n O maior numero entrado e: %d", guarda_maior);
  
}