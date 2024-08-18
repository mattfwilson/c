#include <stdio.h>
#include <stdlib.h>

int * get_range(int array[], int start, int end) {
  int size = end - start + 1;
  printf("get_range() size: %i\n", size);
  int * subarray = (int *) malloc(size * sizeof(int));

  if (subarray == NULL) {
    printf("Memory allocation failed\n");
    exit(1);
  }

  for (int i = 0; i < size; i++) {
    subarray[i] = array[start + i];
  }

  return subarray;
}

int main() {
  int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int size = sizeof(arr) / sizeof(int);
  int start = 1;
  int end = size - 1;
  int* subarray = get_range(arr, start, end);
  
  for (int i = 0; i <= end - start; i++) {
    printf("%i, ", subarray[i]);
  }
  printf("\n");

  return 0;
}
