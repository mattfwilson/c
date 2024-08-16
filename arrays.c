#include <stdio.h>

int main() {
  float float_arr[5] = {0.0};
  float float_arr2[5];
  int int_arr[] = {10, {1, 2, 3}, 30, NULL, 50, 60, true, 80, 90.0, 100};
  int int_size = sizeof(int_arr) / sizeof(int);
 
  for (int i = 0; i < 5; i++) {
    printf("%f", float_arr[i]);
  }
  printf("\n");

  for (int i = 0; i < 5; i++) {
    printf("%f ", float_arr2[i]);
  }
  printf("\n");

  printf("[Size of array: %d]\n", int_size);
  for (int i = 0; i < int_size; i++) {
    printf("%d ", int_arr[i]);
  }
  printf("\n");

  return 0;
}
