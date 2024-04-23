#include <stdio.h>
#include <math.h>

int main() {
  double weight;
  int planet;

  printf("What is your weight? ");
  scanf("%lf", &weight);

  printf("Which planet are you visiting? \n");
  printf("1. Mercury\n2. Venus\n3. Mars\n4. Jupiter\n5. Saturn\n6. Uranus\n7. Neptune\n\n");
  scanf("%d", &planet);

  if (planet == 1) {
    weight = weight * 0.38;
  } else if (planet == 2) {
    weight = weight * .91;
  } else if (planet == 3) {
    weight = weight * .38;
  } else if (planet == 4) {
    weight = weight * 2.34;
  } else if (planet == 5) {
    weight = weight * 1.06;
  } else if (planet == 6) {
    weight = weight * .92;
  } else if (planet == 7) {
    weight = weight * 1.19;
  }
 
  float rounded_weight = round(weight * 100) / 100;
  printf("Your weight on the destination planet is is %f", rounded_weight);

  return 0;
}
