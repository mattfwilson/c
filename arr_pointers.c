#include <stdio.h>
#include <string.h>

int myFunc(int input) {
    return input + 5;
}

int main() {
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int arr_len = sizeof(arr) / sizeof(arr[0]);
    int i;
    int j = 2;
    int k = 0;

    for (i = 1 + j; j < arr_len; j++) {
        printf("array item: %d\n", arr[i]);
        printf("array item address: %p\n", (void *)&arr[i]);
        printf("full array address: %p\n", &arr);
    }
    
    while (k < 5) {
        printf("%d is still less than 5\n", k);
        k++;
    }
    
    int test = myFunc(4);
    printf("test: %d", test);

    return 0;
}




