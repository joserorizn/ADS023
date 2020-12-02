#include <stddef.h>
#include <stdio.h>

int main() {

  int funcionario[7][2] = {{1111, 30001000}, {2222, 30002000}, {3333, 30003000},
                           {4444, 30004000}, {5555, 30005000}, {6666, 30006000},
                           {7777, 30007000}};

  for (int i = 0; i <= 7; i++) {

    for (int j = 0; j <= 2; j++) {

      printf("%d, %d ", funcionario[i][j]);
    
    }
  }

}