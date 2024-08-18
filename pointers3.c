#include <stdio.h>

int main() {
  int x = 5;

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
  printf("%d\n", x);

  return 0;
}
