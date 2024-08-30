#include <stdio.h>
#include <string.h>


int main() {
  int a = 20;
  int* aPtr = &a;
  char str[] = "For the love of god...";
  char* pStr = &str[0];
  
  void show_values() {
    printf("a: %i\n", a);
    printf("aPtr: %p\n", aPtr);
    printf("&a: %p\n", &a);
    printf("*aPtr: %i\n\n", *aPtr);
  }

  show_values();

  a += 5;
  printf("a += 5\n\n");
  show_values();

  aPtr += 4;
  printf("aPtr += 4\n\n");
  show_values();

  *aPtr += 2;
  printf("*aPtr += 2\n\n");
  show_values();

  printf("%s\n", str);
  for (int i = 0; i < strlen(str); i++) {
    *pStr = '%';
    pStr++;
  }
  printf("%s\n", str);

  return 0;
}
