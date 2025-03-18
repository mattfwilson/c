#include <stdio.h>
#include <stdbool.h>


bool is_leap_year(int year) {
  if (year > 2000) {
    printf("%d is greater than 2000\n", year);
    return true;
  }
  else {
    printf("%i is less than 2000\n", year);
    return false;
  }
}


int main() {
  int year1 = 2001;
  int year2 = 1999;

  is_leap_year(year1);


  int days_in_month[13] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 10, 11, 12};
  days_in_month[0] = 31;
  days_in_month[1] = 31;
  days_in_month[2] = 28;
  days_in_month[3] = 31;
  days_in_month[4] = 30;
  days_in_month[5] = 31;
  days_in_month[6] = 30;
  days_in_month[7] = 31;
  days_in_month[8] = 31;
  days_in_month[9] = 30;
  days_in_month[10] = 31;
  days_in_month[11] = 31;
  days_in_month[12] = 31;

  for (int i = 0; i < 13; i++) {
    printf("%d\n", days_in_month[i]);
  }
  return 0;
}


