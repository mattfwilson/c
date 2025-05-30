#include <stdio.h>
#include <string.h>
 
void copy(char* dst, char* src) {
  while (*src != '\0') {
    *dst = *src;
    src++;
    printf("%s\n", src);
    dst++;
    printf("%s\n", dst);
  }
  *dst = '\0';
}
 
int main(){
  char srcString[] = "Hello World";
  char dstString[strlen(srcString) + 1];

  copy(dstString, srcString);
  printf("%s\n", srcString);
  printf("%s", dstString);
}
