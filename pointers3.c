#include <stdio.h>

int main() {
  int x = 5;
  int *pX = &x; 
  int *y = x;

  int doubleValue(int x) {
    return x * 2;
  }

  x = doubleValue(x);
  printf("%d\n", x);

  x = 5;

  void tripleValue(int *x) {
    *x = *x * 3;
  }
  
  tripleValue(&x);
  
  void greet() {
    printf("Hello\n");
  }

  greet();

  printf("x: %d\n", x);
  printf("x pointer: %p\n", &x);
  printf("y pointer: %p\n", *y);

  return 0;
}
