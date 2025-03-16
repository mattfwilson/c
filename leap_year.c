#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int year) {
  if (year % 4 != 0) {
    printf("Not divisible by 4: not leap year.\n");
    return false; 
  }
  else if (year % 100 != 0) {
    printf("%d is divisible by 4 but NOT 100\n, LEAP YEAR!", year);
    return true;
    }
  else if (year % 400 != 0) {
    printf("%d is divisible by 4 and 100: not leap year.\n", year);
    return false;
  }
  else {
    printf("%d unknown\n", year);
  }
}


int main() {
  is_leap_year(2000);
  return 0;
}
