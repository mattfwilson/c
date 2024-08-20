#include <stdio.h>

int main(void) {
  int b = 37; // initialize in var b with value of 37
  int *a = &b; // initialize int pointer a with the value of memory address of b

  printf("b: %d\n", b); // print int var b
  printf("&b: %p\n", &b); // print pointer address of var b
  printf("a: %p\n", *a); // print pointer var a that holds the addres of var b

  *a = 50; // de-reference a's pointer to allow updating of what *a is pointing to

  printf("b: %d\n", b);
  printf("&b: %p\n", &b);
  printf("a: %p\n", *a);

  int x, y, z;
  x = y = z = 0;

  printf("Enter 3 numbers: ");
  scanf("%d %d %d", &x, &y, &z);
  printf("Result: %d\n", x + y + z);

  return 0;
}
