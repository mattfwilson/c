#include <stdio.h>

void swap_int(int *a, int *b) 
{
  printf("a: %p\nb: %p\n", a, b);
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main(void)
{
  int x = 25;
  int y = 50;

  printf("x: %d, y: %d\n", x, y);
  printf("x address: %p\ny address: %p\n", &x, &y);
  swap_int(&x, &y);
  printf("x: %d, y: %d\n", x, y);

  return 0;
}
