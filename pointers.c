#include <stdio.h>

int main() {
  int x = 100;
  int * pX = &x;
  int y = *pX;
  int z = *pX;
  char greet[] = "Hello World!";
  char * pGreet = greet;
  char greet2 = *pGreet;

  printf("x: %i\n", x);
  printf("x pointer: %p\n", (void*)pX);
  printf("y: %i\n", y);
  printf("z: %i\n", z);
  printf("greeting: %s\n", greet);
  printf("greeting pointer: %p\n", (void*)pGreet);
  printf("greet: %s\n", greet2);

  return 0;
}
