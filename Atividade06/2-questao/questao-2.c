#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>
#include <time.h>
#include <stdbool.h>

int main () {

    char nome[50];
    int telefone;
    int i = 1;
    
    while (i <= 10) {
        
        printf("Qual o seu nome: ");
        scanf("%s", &nome);

        printf("\n");

        printf("Qual o seu telefone: ");
        scanf("%d", &telefone);

        printf("\n");

        i++;

    }

    printf("Nome: %s; Telefone: %d;\n", nome, telefone);

}