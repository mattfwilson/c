#include <stdio.h>

int main() {
  int matrix[5][3] = {
    {1, 2, 3}, 
    {4, 5, 6}, 
    {7, 8, 9}, 
    {10, 11, 12}, 
    {13, 14, 15}
  };
  
  int rowDim = sizeof(matrix) / sizeof(matrix[0]);
  int colDim = sizeof(matrix[0]) / sizeof(int);
  int sum = 0;
  int row_to_print = 4;

  printf("rowDim: %i", rowDim);
  printf("\ncolDim: %i", colDim);

  for (int i = 0; i < rowDim; i++) {
    //sum += i; 
    //printf("\nSum: %i", sum);

    for (int j = 0; j < colDim; j++) {
      int idx = matrix[i][j];
      if (idx % 2 == 0) {
        printf("%i\n", idx);

      }
    }
  }

  for (int k = 0; k < colDim; k++) {
    printf("%d ", matrix[row_to_print][k]);
  }

  return 0;
}
