#include <stdio.h>

int main() {
  int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}, {13, 14, 15}};
  int rowDim = sizeof(arr) / sizeof(arr[0]);
  int colDim = sizeof(arr[0]) / sizeof(int);

  printf("rowDim: %i", rowDim);
  printf("\ncolDim: %i", colDim);

  for (int i = 0; i < rowDim; i++) {
    for (int j = 0; j < colDim; j++) {
      printf("\n%i", arr[i][j]);
    }
  }

  return 0;
}
