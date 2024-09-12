#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <tgmath.h>
#include <time.h>

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
  printf("two floats added: %f\n", addedFloats);

  clock_t start, end;
  double cpu_time_passed;
  start = clock();
  for (long i = 0; i < 100000000; i++);
  end = clock();
  cpu_time_passed = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("Time taken to count to one billion: %f seconds\n", cpu_time_passed);

  double tan_res = tan(70.0);
  double tan_abs = abs(tan_res);

  tan_res = ceil(tan_res * 100) / 100.0;
  printf("double abs: %f\n", tan_abs);  
  printf("double tan: %d\n", tan_res);

  return 0;
}
