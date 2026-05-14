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
  size_t lenOriginal = strlen(originalString); 
  char destinationString[lenOriginal + 1];

  copy(destinationString, originalString);
  printf("%zu\n", lenOriginal);
  printf("%s\n", originalString);
  printf("%s", destinationString);
}
