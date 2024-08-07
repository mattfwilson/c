#include <stdio.h>
#include <time.h>

int main() {
  clock_t start_time, end_time;
  double cpu_time_used;

  start_time = clock();

  int i = 0;
  
  while (i < 100000000) {
    i++;
  }
  
  end_time = clock();

  cpu_time_used = ((double) (end_time - start_time)) / CLOCKS_PER_SEC * 10;
  printf("Time taken in C: %f seconds.\n", cpu_time_used);
  printf("CLOCKS_PER_SEC: %f", CLOCKS_PER_SEC);

  return 0;
}
