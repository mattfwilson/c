#include <stdio.h>

int main() {
  double brackets[] = {.10, .12, .22, .24, .32, .35, .37};
  int lower[] = {0, 11601, 47151, 100526, 191951, 243726, 609351};
  int upper[] = {11600, 47150, 100525, 191950, 243725, 609350, 9999999};
  
  for (int i = 0; i < sizeof(brackets) / sizeof(double); i++) {
    printf("%f\n", brackets);
  }

  for (int i = 0; i < sizeof(lower) / sizeof(int); i++) {
    printf("%d\n", lower);
    printf("%d\n", upper);
  }
}
