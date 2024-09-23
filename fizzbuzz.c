#include <stdio.h>

int main() {
  for (int i = 0; i <= 100; i++) {
    if (i % 3 == 0) {
      printf("%d is divisible by 3.\n", i);
    } 
    else if (i % 5 == 0) {
      printf("%d is divisible by 5.\n", i);
    }
    else if (i % 3 == 0 && i % 5 == 0) {
      printf("%d is divisible by both 3 and 5.\n", i);
    }
    //printf("%d\n", i);
  }
  return 0;
}
