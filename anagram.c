#include <stdio.h>
#include <string.h>


int main() {
  int counter1[] = {0, 0, 0, 0};
  int counter2[] = {0, 0, 0, 0};
  char str1[] = {"ra ceca r"};
  char str2[] = {"r  a ce ca   r"};
  int flag = 0;

  for (int i = 0; i < strlen(str1); i++) {
    printf("%d\n", str1[i]);
    if (str1[i] == 'a') {
      counter1[0]++;
    }
    else if (str1[i] == 'b') {
      counter1[1]++;
    }
    else if (str1[i] == 'c') {
      counter1[2]++;
    }
    else if (str1[i] == 'd') {
      counter1[3]++;
    }
    else {
      continue;
    }
  }

  for (int i = 0; i < strlen(str2); i++) {
    printf("%d\n", str2[i]);
    if (str2[i] == 'a') {
      counter2[0]++;
    }
    else if (str2[i] == 'b') {
      counter2[1]++;
    }
    else if (str2[i] == 'c') {
      counter2[2]++;
    }
    else if (str2[i] == 'd') {
      counter2[3]++;
    }
    else {
      continue;
    }
  }
  
  for (int i = 0; i < 4; i++) {
    if (counter1[i] != counter2[i]) {
      flag = 1;
    }
    else {
      flag = 0;
    }
  }

  if (flag == 1) {
    printf("Not Anagram!");
  }
  else if (flag = 0) {
    printf("Anagram!");
  }
  else {
    printf("Unknown error");
  }


  return 0;
}
