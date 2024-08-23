#include <stdio.h>
#include <string.h>


void show_int_arr(int* arr, int size) {
  for (int i = 0; i < size; i++) {
    printf("index %d, address %d, value %d\n", i, arr + i, *(arr + i));
  }
}

void show_char_arr(char* arr, int size) {
  for (int i = 0; i < size; i++) {
    printf("index %d, address %d, ascii value %d, char value %c\n", i, arr + i, *(arr + i), *(arr + i));
  }
}


int main() {
  int arr[] = {3, 27, 9, 16, 22};
  char arr2[] = {"Hello"};
  int size = sizeof(arr) / sizeof(int);

  show_int_arr(arr, size);
  printf("\n");
  show_char_arr(arr2, size);

  return 0;
}
