#include <stdio.h>

int main() {
  int a = 20;
  int* aPtr = &a;
  
  printf("a: %i\n", a);
  printf("aPtr: %p\n", aPtr);
  printf("&a: %p\n", &a);
  printf("*aPtr: %i\n\n", *aPtr);

  a += 5;
  printf("a += 5\n\n");

  printf("a: %i\n", a);
  printf("aPtr: %p\n", aPtr);
  printf("&a: %p\n", &a);
  printf("*aPtr: %i\n\n", *aPtr);
  
  aPtr += 4;
  printf("aPtr += 4\n\n");

  printf("a: %i\n", a);
  printf("aPtr: %p\n", aPtr);
  printf("&a: %p\n", &a);
  printf("*aPtr: %i\n\n", *aPtr);

  *aPtr += 2;
  printf("*aPtr += 2\n\n");

  printf("a: %i\n", a);
  printf("aPtr: %p\n", aPtr);
  printf("&a: %p\n", &a);
  printf("*aPtr: %i\n\n", *aPtr);

  return 0;
}
