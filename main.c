#include <stdio.h>

int main(int argc, char *argv[]) {
  printf("Program name (argument 0) is: %s\n", argv[0]);

  if (argc > 0) {
    for (int i = 1; i < argc; i++) {
      printf("Argument is %d: %s\n", i, argv[i]);
    }
  }

  else {
    printf("No other args passed in.\n");
  }

  return 0;
}
