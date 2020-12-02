
#include <stdio.h>

int main()
{
    char ch;

    printf("Insira qualquer caractere: ");
    scanf("%c", &ch);

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("'%c' eh uma letra do alfabeto. \n", ch);
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("'%c' eh um digito. \n", ch);
    }
    else 
    {
        printf("'%c' eh um caractere. \n", ch);
    }

    return 0;
}
