#include <stdio.h>

int main() {
    int x = 9;
    int y = 2;
    int z = 3;
    int mod_x_y = (x + z) / y;

    printf("x + y / z = %d\n", mod_x_y);
    
    if (x > y) {
        printf("%d is greater than y.", x);
    } else if (x < y) {
        printf("%d is less than y.", x);
    } else {
        printf("%d is equal to %d.", x, y);
    }
}
