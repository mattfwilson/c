#include <stdio.h>

int print_size(int arr[], int len) {
  if (len > 10) {
    printf("array len: %d, HUGE", len);
    return len;
  } else {
    printf("array len: %d, tiny...", len);
    return len;
  }
}

int main() {
  int numArr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17};
  int arrSize = sizeof(numArr) / sizeof(int);
  int res = print_size(numArr, arrSize);
  printf("\n%d", res);

  return 0;
}
