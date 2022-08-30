#include <stdio.h>

int main(void) {
  void is_triangle(int a, int b, int c){
    if (a + b > c && b + c > b && c + a > b) {
      printf("True\n");
    }
    else {
      printf("False\n");
    }
  }
  is_triangle(1,2,3);
  return 0;
}
