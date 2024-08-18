#include <stdio.h>

int main() {
  int slices = 20;
  int *pSlices = &slices;

  printf("\nSlices: %d\n", slices);
  printf("slices pointer (void): %p\n", (void*)pSlices);
  printf("slices value via pointer: %d\n", *pSlices);
  
  slices++;

  printf("\nSlices: %d\n", slices);
  printf("slices pointer (void): %p\n", (void*)pSlices);
  printf("slices value via pointer: %d\n", *pSlices);

  *pSlices = 30;
  (*pSlices)++;

  printf("\nSlices: %d\n", slices);
  printf("slices pointer (void): %p\n", (void*)pSlices);
  printf("slices value via pointer: %d\n", *pSlices);

  return 0;
}
