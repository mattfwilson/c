#include <stdio.h>

void printArr(int array[], int size) {
  for (int i = 0; i < size; i++) {
    array[i]++;
    printf("%d ", array[i]);
    printf("%p", &array[i]);
  }
}


int main() {
  int coffeePerWeek[] = {2, 1, 2, 2, 3, 0};
  int arr_size = sizeof(coffeePerWeek) / sizeof(int);

  for (int i = 0; i < arr_size; i++) {
    printf("%d ", coffeePerWeek[i]);
  }

  printf("\n");
  printArr(coffeePerWeek, arr_size); // arrays passed into funcions decay to a pointer; and pointers do not hold a size
  printf("\n");
  
  for (int i = 0; i < arr_size; i++) {
    printf("%d ", coffeePerWeek[i]);
  }

  printf("\n");
  printArr(coffeePerWeek, arr_size);
  printf("\n");

  return 0;
}
