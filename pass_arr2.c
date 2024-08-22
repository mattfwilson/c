#include <stdio.h>

void pass_in(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d - ", i);
    printf("%d\n", array[i]);
  }
  printf("\n");
}

int main() {
  int num_plebs[] = {7, 3, 0, 12, 4};
  int pleb_size = sizeof(num_plebs) / sizeof(num_plebs[0]);

  pass_in(num_plebs, pleb_size);

  return 0;
}
