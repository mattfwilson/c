#include <stdio.h>

int main() {
    int x = 8;
    int y = 2;
    int z = 3;
    float mod_x_y = (x + z) / y;

    printf("%d + %d / %d = %f\n", x, z, y, mod_x_y);
    
    if (x > y) {
        printf("%f is greater than y.", x);
    } else if (x < y) {
        printf("%f is less than y.", x);
    } else {
        printf("%f is equal to %f.", x, y);
    }
}
