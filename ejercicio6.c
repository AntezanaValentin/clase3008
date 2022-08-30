#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));
  int random(int a, int c) {
    int b = rand() % (c - a + 1) + a;
    printf("%d %d %d\n", a, b, c);
  }
  random(1, 10);
  return 0;
}
