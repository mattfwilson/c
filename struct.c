#include <stdio.h>
#include <string.h>

struct Card {
  char name[75];
  int energy;
  char type[75];
  int attack;
  int block;
};

int main() {
  struct Card c1;
  strcpy(c1.name, "Strike");
  c1.energy = 1;
  strcpy(c1.type, "Attack");
  c1.attack = 6;
  c1.block = 0;

  printf("Card 1    ----------------\n");
  printf("name:     %s\n", c1.name);
  printf("type:     %s\n", c1.type);
  printf("energy:   %d\n", c1.energy);
  printf("attack:   %d\n", c1.attack);
  printf("block:    %d\n\n", c1.block);

  printf("Card 2    ----------------\n");
  struct Card c2 = {"Defend", 1, "Block", 0, 5};
  printf("energy:   %d\n", c2.energy);

  struct Card* c2Pointer = &c2;
  (*c2Pointer).energy = 10;

  printf("name:     %s\n", c2.name);
  printf("type:     %s\n", c2.type);
  printf("energy:   %d\n", c2.energy);
  printf("attack:   %d\n", c2.attack);
  printf("block:    %d\n", c2.block);

  c2Pointer -> energy = 3;
  printf("energy:   %d\n", c2.energy);

  return 0;
}
