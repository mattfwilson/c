#include <stdio.h>

int print_size(int arr[], int len, int *arrPtr) {
  if (len > 10) {
    printf("array len %d stored at: %p, HUGE", len, arrPtr);
  } else {
    printf("array len %d stored at: %p, tiny...", len, arrPtr);
  }
  return len;
}

int main() {
  int numArr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17};
  int arrSize = sizeof(numArr) / sizeof(int);
  int *arrPtr = &arrSize;
  int res = print_size(numArr, arrSize, arrPtr);
  printf("\n%d", res);

  return 0;
}
