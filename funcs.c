#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
  const char *to_int = "Hi pal!";
  long num = atol(to_int);
  int randNum = rand();
  int *ptr = (int *)malloc(sizeof(int));
  int randomNumber = rand() % 1000 + 1;

  printf("%s equates to %i as an integer\n", to_int, num);
  printf("%i\n", randNum);
  printf("%p\n", *ptr);
  printf("Random number: %i", randomNumber);
  return 0;
}
