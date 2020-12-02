#include <stdio.h>

int main() {

    int dia, mes, ano;
    
    printf("Qual o dia? ");
    scanf("%d", &dia);

    printf("Qual o mes? ");
    scanf("%d", &mes);

    printf("Qual o ano? ");
    scanf("%d", &ano);

    printf("O formato da data em BR eh: %d/%d/%d \n\n", dia, mes, ano);
    printf("O formato da data em US eh: %d/%d/%d", mes, dia, ano);

}