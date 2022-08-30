#include <stdio.h>

int main(void) {
  void comparar(int a, int b, int c) {
    if (a == b && b == c && a == c) {
      printf("True\n");
    }
      else {
        printf("False\n");
    }
  }
  comparar(2, 3, 2);
}
