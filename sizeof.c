#include <stdio.h>

void print_size(int arr[], int len) {
   printf("array len: %d\n", len);
}

int main() {
  int numArr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21};
  int arrSize = sizeof(numArr) / sizeof(int);
  print_size(numArr, arrSize);

  return 0;
}
