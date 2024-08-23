#include <stdio.h>

void test(int* arr, int size) {
  for (int i = 0; i < size; i++) {
    printf("%d - %d > %d\n", *(arr + i), arr, arr + i);
  }
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(int);

  test(arr, size);
  
  return 0;
}
