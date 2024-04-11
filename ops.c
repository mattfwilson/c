#include <stdio.h>

int main() {
    float x = 8;
    float y = 2;
    float z = 3;
    float mod_x_y = (x + z) / y;

    printf("x + y / z = %f\n", mod_x_y);
    
    if (x > y) {
        printf("%f is greater than y.", x);
    } else if (x < y) {
        printf("%f is less than y.", x);
    } else {
        printf("%f is equal to %f.", x, y);
    }
}
