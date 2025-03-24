#include <stdio.h>
#include <string.h>


int main() {
  int num;
  num = 4;
  int *ptr = &num;

  printf("Var num: %d\n", num);
  printf("Memory address%d\n", ptr);
  printf("Var num pointer dereferenced: %d\n", *ptr);

  return 0;
}
