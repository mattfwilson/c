#include <stdio.h>

void pass_in(int arr1[], int arr2[], int size) {
  for (int i = 0; i < size; i++) {
    int sum = 0;
    sum = arr1[i] + arr2[i];
    
    printf("index %d - ", i);
    printf("%d + %d = %d\n", arr1[i], arr2[i], sum);
  }
  printf("\narr1: %d\n", arr1);
  printf("arr2: %d\n", arr2);
  printf("\n");
}

int matchIndex(int matchArr[], int input) {
  return matchArr[input];
}

int main() {
  int plebs[] = {7, 3, 0, 12, 4};
  int noobs[] = {6, 10, 22, 7, 9};
  int size = sizeof(plebs) / sizeof(plebs[0]);
  int input;
  int match;

  pass_in(plebs, noobs, size);

  printf("What index do you want to match? ");
  scanf("%d", &input);
  match = matchIndex(noobs, input);
  printf("Your match is: %d", match);

  return 0;
}
