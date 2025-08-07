#include <stdio.h>
#include <string.h>


int main() {
  int num;
  num = 4;
  int *ptr = &num;

  printf("Var num: %d\n", num);
  printf("Memory address %p\n", &num);
  printf("Var num pointer dereferenced: %d\n", *ptr);

  int num2;
  num2 = 12345;
  int *ptr2 = &num2;

  printf("var num2: %d\n", num2);
  printf("Memory address %p\n", &num2);
  printf("Derefenced num2 pointers: %d\n", *ptr2);

  return 0;
}
