#include <stdio.h>

int count = 0;

void incCount(int amount) {
    count += amount;
    count++;
}

int main() {
  incCount(1);
  printf("count: %d\n", count);
  incCount(4);
  printf("count: %d\n", count);

  return 0;
}

