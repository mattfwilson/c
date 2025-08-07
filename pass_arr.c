#include <stdio.h>

void printArr(int array[], int size) {
  for (int i = 0; i < size; i++) {
    array[i]++;
    printf("%d (%p)\n", array[i], (void*)&array[i]);
  }
}


int main() {
  int coffeePerWeek[] = {2, 1, 2, 2, 3, 0};
  int arr_size = sizeof(coffeePerWeek) / sizeof(int);
  
  printf("Original output:\n");
  for (int i = 0; i < arr_size; i++) {
    printf("%d ", coffeePerWeek[i]);
  }

  printf("\n\nAfter printArr:\n");
  printArr(coffeePerWeek, arr_size);
  
  for (int i = 0; i < arr_size; i++) {
    printf("%d ", coffeePerWeek[i]);
  }

  return 0;
}
