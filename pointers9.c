#include <stdio.h>
#include <string.h>


int main() {
  int num;
  num = 4;
  int *ptr = &num;
  int **ptr = &ptr;

  printf("Var num: %d\n", num);
  printf("Memory address %p\n", &num);
  printf("Var num pointer dereferenced: %d\n", *ptr);
  printf("Pointer of pointer %d\n", **ptr);

  return 0;
}
