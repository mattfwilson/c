#include <stdio.h>

int main() {
  float float_arr[5] = {0.0};
  float float_arr2[5];
  float int_arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int int_size = sizeof(int_arr) / sizeof(int_arr[0]);
 
  for (int i = 0; i < 5; i++) {
    printf("%f", float_arr[i]);
  }
  printf("\n");

  for (int i = 0; i < 5; i++) {
    printf("%f ", float_arr2[i]);
  }
  printf("\n");

  printf("[Size of array: %i]\n", int_size);
  for (int i = 0; i < int_size; i++) {
    printf("%d ", int_arr[i]);
  }
  printf("\n");

  return 0;
}
