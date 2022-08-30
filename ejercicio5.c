#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double raices(int a, int b, int c){
  double discriminant = b*b - 4*a*c;
  double root = sqrt(discriminant);
  double x1 = (-b + root) / (2*a);
  double x2 = (-b - root) / (2*a);
  return x1;
  }
int main(int argc, char const *argv[]) {
  double a = atof(argv[1]);
  double b = atof(argv[2]);
  double c = atof(argv[3]);
  printf("%.2f\n", raices(a, b, c));
  return 0;
}
