#include <stdio.h>

char welcome[12];
int x = 5;
int y = 2;
int z = 3;
int mod_x_y;

int main(void) {
    int res = (x + z) / y;
    mod_x_y = x % y;

    strcpy(welcome, "HelloWorld!");
    printf("Can you hear me? %s\n", welcome);
    printf(mod_x_y);

    return 0;
}
