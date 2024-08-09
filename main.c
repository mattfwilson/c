#include <stdio.h>

int main(int argc, char *argv[]) {
  printf("Program name (Argument 0) is: %s\n", argv[0]);

  if (argc > 1) {
    for (int i = 1; i < argc; i++) {
      printf("Argument %d is: %s\n", i, argv[i]);
    }
  }

  else {
    printf("No other arguments passed in.\n");
  }

  return 0;
}
