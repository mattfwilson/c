#include <stdio.h>
#include <string.h>
 
void copy(char* destination, char* original) {
  while (*original != '\0') {
    *destination = *original;
    original++;

    printf("%s\n", original);
    destination++;
    printf("%s\n", destination);
  }
  *destination = '\0';
}
 
int main(){
  char originalString[] = "Hello World";
  int lenOriginal = (int)strlen(originalString) + 1; 
  char destinationString[lenOriginal];

  copy(destinationString, originalString);
  printf("%d\n", lenOriginal);
  printf("%s\n", originalString);
  printf("%s", destinationString);
}
