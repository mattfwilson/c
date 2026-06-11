#include <stdio.h>
#include <string.h>


int main() {
  int num;
  num = 4;
  int *ptr = &num;
  int **ptr = &ptr;

  int arr[7] = {0, 1, 2, 3, 5, 7, 13};


  printf("Var num: %d\n", num);
  printf("Memory address %p\n", &num);
  printf("Var num pointer dereferenced: %d\n", *ptr);
  printf("Pointer of pointer %d\n", *ptr);
  
  printf("%d\n", *arr);
  printf("%d\n", *(arr + 1));
  printf("%d\n", *(arr + 2));
  printf("%d\n", *(arr + 3));

  return 0;
}
