#include <stdio.h>

int main() {
  for (int i = 0; i <= 100; i++) {
    if (i % 3 == 0) {
      printf("Divisible by 3.");
    } 
    else if (i % 5 == 0) {
      printf("Divisible by 5.");
    }
    else if (i % 3 == 0 && i % 5 == 0) {
      printf("Divisible by both 3 and 5.");
    }
    printf("%d\n", i);
  }
  return 0;
}
