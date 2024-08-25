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

void show_double_arr(double* arr, int size) {
  for (int i = 0; i < size; i++) {
    printf("index %d, address %d, value %d\n", i, arr + i, *(arr + i));
  }
}

int main() {
  int arr[] = {3, 27, 9, 16, 22};
  char arr2[] = {"Hello"};
  double arr3[] = {3.14, 1.23, 0.001, 88.91};
  int int_size = sizeof(arr) / sizeof(int);
  int char_size = sizeof(arr2) / sizeof(char);
  int dbl_size = sizeof(arr3) / sizeof(double);

  show_int_arr(arr, int_size);
  printf("\n");
  show_char_arr(arr2, char_size);
  printf("\n");
  show_double_arr(arr3, dbl_size);

  return 0;
}
