#include <stdio.h>

void swap_int(int *a, int *b);

int main(void)
{
  int x = 25;
  int y = 50;

  printf("x: %d, y: %d\n", x, y);
  swap_int(&x, &y);
  printf("x: %d, y: %d\n", x, y);

  return 0;
}

void swap_int(int *a, int *b) 
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
