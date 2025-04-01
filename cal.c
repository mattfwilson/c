#include <stdio.h>
#include <stdbool.h>


int days_in_month[] = {[0]=0, [1]=31, [2]=28, [3]=31, [4]=30, [5]=31, [6]=30, [7]=31, [8]=31, [9]=30, [10]=31, [11]=30, [12]=31};

bool is_leap_year(int year) {
  return (year % 4 == 0 && (year % 100 || year % 400 == 0));
}

void add_days_to_date(int* mm, int* dd, int* yy, int days_left_to_add) {
  int days_left_in_month;
  while (days_left_to_add > 0) {
    days_left_in_month = days_in_month[*mm] - *dd;
    if (days_in_month[2] && is_leap_year(*yy) == true) {
      days_left_in_month++;
    }
  if (days_left_to_add > days_left_in_month) {
    days_left_to_add -= days_left_in_month;
    days_left_to_add -= 1;
    *dd = 1;
    if (*mm == 12) {
      *mm = 1;
      *yy = *yy + 1;
    } else *mm = *mm + 1;
  } else {
    *dd = *dd + days_left_to_add;
    days_left_to_add = 0;
    }
  }
}

int main() {
  int year = year, *mm, *dd, *yy, days_left_to_add;
  year = 2000;

  if (is_leap_year(year)) {
    printf("%d is a leap year\n", year);
  }
  else {
    printf("%d is NOT a leap year\n", year);
  }
  for (int i = 0; i < 13; i++) {
    printf("%i\n", days_in_month[i]);
  }
  return 0;
}


