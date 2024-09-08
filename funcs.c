#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <tgmath.h>

float addNums(float num1, float num2) {
  return num1 + num2;
}

int main() {
  const char *to_int = "Hi pal!";
  long num = atol(to_int);
  printf("%s equates to %i as an integer\n", to_int, num);
  
  int randNum = rand();
  int randomNumber = rand() % 1000 + 1;
  printf("randNum: %i\n", randNum);
  printf("randomNumber: %i\n", randomNumber);

  float f = 7.0f;
  double d = 3.0;
  double res = fmod(f, d);
  printf("float + double result: fmod(%f, %f) = %f\n", f, d, res);

  int *ptr = (int *)malloc(sizeof(int));
  printf("pointer of malloc int: %p\n", *ptr);
  
  float addedFloats = addNums(4, 7);
  printf("two floats added: %f", addedFloats);

  return 0;
}
