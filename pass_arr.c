#include <stdio.h>

void printArr(int array[], int size) {
  for (int i = 0; i < size; i++) {
    array[i]++;
    printf("%d ", array[i]);
  }
}


int main() {
  int coffeePerWeek[] = {2, 1, 2, 2, 3, 0};

  for (int i = 0; i < sizeof(coffeePerWeek) / sizeof(int); i++) {
    printf("%d ", coffeePerWeek[i]);
  }

  printf("\n");
  printArr(coffeePerWeek, 6); // when array passed into func it decays to a pointer, pointers do not hold a size
  printf("\n");
  
  for (int i = 0; i < 6; i++) {
    printf("%d ", coffeePerWeek[i]);
  }

  return 0;
}
