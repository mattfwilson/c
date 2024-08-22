#include <stdio.h>

void printViaValue(int age) {
  printf("Your are %d years old according to age var.\n", age);
}

void printViaPointer(int *age) {
  printf("Your are %d years old according to pAge pointing to age var.\n\n", *age);
}

int main() {
  int age = 21;
  int *pAge = NULL;
  pAge = &age;
  int arr[] = {*pAge, 100};
    
  printf("address of age: %p\n", &age);
  printf("address in pAge: %p\n\n", pAge);
  
  printf("size of age: %d bytes\n", sizeof(age));
  printf("size of pAge: %d bytes\n\n", sizeof(pAge));

  printf("value of age: %d\n", age);
  printf("value of pAge: %d\n\n", *pAge); // dereferenced - outputs value at address
  
  printViaValue(age);
  printViaPointer(pAge);

  for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
    printf("%d, ", arr[i]);
  }

  return 0;
}
