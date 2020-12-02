#include <stdio.h>
#include <stdlib.h>

int comparacao(int a, int b);

int main()
{
    int n1, n2, res;
    printf("Digite um valor: ");
    scanf("%d", &n1);
    printf("Digite outro valor: ");
    scanf("%d", &n2);

    res = comparacao(n1, n2);
    printf("O menor numero eh: %d\n", res);
    return 0;
}

int comparacao(int a, int b) {
    if (a > b)
    {
        return b;
    }
    else
    {
        return a;
    } 
}
