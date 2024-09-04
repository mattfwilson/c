#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  const char *to_int = "Hi pal!";
  long num = atol(to_int);

  printf("%s equates to %i as an integer", to_int, num);
  return 0;
}
