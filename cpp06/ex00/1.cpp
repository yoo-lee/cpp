#include <stdio.h>

int main(void){
  int a;
  double b;

  a = 100;
  b = (double)a;

  printf("b = %f\n", b);

  b = 12.345;
  a = (int)b;

  printf("a = %d\n", a);

  return 0;
}