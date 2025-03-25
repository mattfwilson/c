#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


void play(const char *arr[], int size) {
  srand(time(NULL));
  int rand_index = rand() % size;
  printf("CPU chose %s!\n", arr[rand_index]);
  
  for (int i; i < size; i++) {
    printf("%s\n", arr[i]);
  }
}


int main() {
  const char *choices[] = {"Rock", "Paper", "Scissors", "Shotgun"};
  int size = sizeof(choices) / sizeof(choices[0]);
  char choice[40];

  printf("Enter choice: ");
  scanf("%s", &choice);

  int found;
  found = 0;

  for (int i; i < size; i++) {
    if (strcmp(choice, choices[i]) == 0) {
      found = 1;
      break;
      }
  }

  if (found == 1) {
    printf("%s is not valid.", choice);
  }
    else {
    printf("You chose %s!\n", choice);
    play(choices, size);
  }

  return 0;
}
