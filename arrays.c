#include <stdio.h>

int main() {
  float float_arr[5];
  int int_arr[] = {10, 0, 50, 70, 90};
  int size = sizeof(int_arr) / sizeof(int_arr[0]);
 
  for (int i = 0; i < size; i++) {
    printf("%d ", int_arr[i]);
  }

  printf("\n");
  return 0;
}
