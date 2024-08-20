#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "Hello ";
  char str2[] = "World";
  int len = strlen(str1);
  char greet[13];
  
  printf("str1 length: %d\n", len);

  strcat(str1, str2);
  
  printf("str1: %s\n", str1);
  
  len = strlen(str1);

  printf("str1 length: %d\n", len);
  printf("str1: %s", str1);  

  strcpy(greet, str1);
  printf("greet: %s", greet);

  return 0;
}
