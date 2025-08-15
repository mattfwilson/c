#include <stdio.h>

void print_size(int arr[], int len) {
  if (len > 10) {
    printf("array len: %d, HUGE", len);
  } else {
    printf("array len: %d, tiny...", len);
  }
}

int main() {
  int numArr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17};
  int arrSize = sizeof(numArr) / sizeof(int);
  print_size(numArr, arrSize);

  return 0;
}
