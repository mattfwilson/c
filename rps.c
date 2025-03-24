#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


void play(const char *choice) {
  const char *cpu_choices[] = {"Rock", "Paper", "Scissors"};
  int choice_count = sizeof(cpu_choices) / sizeof(cpu_choices[0]);
  srand(time(NULL));
  int rand_index = rand() % choice_count;

  printf("You played:%s\n", choice);
  printf("CPU played: %s\n", cpu_choices[rand_index]);
}


int main() {
  const char *player_choices[] = {"Rock", "Paper", "Scissors"};
  int choice_count = sizeof(player_choices) / sizeof(player_choices[0]);

  play(player_choices[2]);

  return 0;
}
