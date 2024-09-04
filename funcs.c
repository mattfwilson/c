#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  const char *to_int = "Hi pal!";
  long num = atol(to_int);
  int randNum = rand();

  printf("%s equates to %i as an integer\n", to_int, num);
  printf("%i", randNum);
  return 0;
}
