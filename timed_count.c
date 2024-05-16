#include <stdio.h>
#include <time.h>

int main() {
  clock_t start, end;
  double cpu_time_used;

  start  = clock();

  int i = 0;
  
  while (i < 1000000) {
    i++;
    printf("%d\n", i);
  }
  
  end = clock();

  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("Time: %f seconds\n", cpu_time_used);

  return 0;
}
