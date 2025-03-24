#include <stdio.h>
#include <stdbool.h>


int days_in_month[] = {[0]=0, [1]=31, [2]=28, [3]=31, [4]=30, [5]=31, [6]=30, [7]=31, [8]=31, [9]=30, [10]=31, [11]=30, [12]=31};


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

  for (int i = 0; i < 13; i++) {
    printf("%i\n", days_in_month[i]);
  }
  return 0;
}


