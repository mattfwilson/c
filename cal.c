#include <stdio.h>
#include <stdbool.h>


bool is_leap_year(int year) {
  if (year > 2000) {
    printf("is greater than 2000");
    return true;
  }
  else {
    printf("is less than 2000");
    return false;
  }
}


int main() {
  int year1 = 2001;
  int year2 = 1999;

  is_leap_year(year1);

  return 0;
}


