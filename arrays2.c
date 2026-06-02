#include <stdio.h>

int main() {
  
  int arr[5] = {20, 40, 60, 80, 100};
  int i;

  for (i = 0; i <= 4; i++) {
    printf("%p\n", &arr[i]);
  }

  return 0;

}
