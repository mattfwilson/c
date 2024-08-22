#include <stdio.h>

void printAgeValue(int age) {
  printf("Your are %d years old according to age var.\n", age);
}

void printWithPointer(int *age) {
  printf("Your are %d years old according to pAge pointing to age var.\n", *age);
}

int main() {
  int age = 21;
  int *pAge = NULL;
  pAge = &age;
    
  printf("address of age: %p\n", &age);
  printf("address in pAge: %p\n\n", pAge);
  
  printf("size of age: %d bytes\n", sizeof(age));
  printf("size of pAge: %d bytes\n\n", sizeof(pAge));

  printf("value of age: %d\n", age);
  printf("value of pAge: %d\n\n", *pAge); // value at address "dereferencing"
  
  printAgeValue(age);
  printWithPointer(pAge);

  return 0;
}
