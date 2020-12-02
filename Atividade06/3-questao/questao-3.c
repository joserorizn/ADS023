#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>
#include <time.h>
#include <stdbool.h>

int main () {

    char *ano[] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    
    int enumeracao = 1;
    int count = 0;
    
    while (enumeracao <= 12) {
        
        printf("%d - %s\n", enumeracao, ano[count]);
        enumeracao++;
        count++;
    
    }

}