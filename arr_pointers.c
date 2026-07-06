#include <stdio.h>
#include <string.h>


int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int arr_len = sizeof(arr) / sizeof(arr[0]);
    int i;
    int j = 2;

    for (i = 0; j < arr_len; i++) {
        printf("%d\n", arr[i]);
        printf("%p\n", (void *)&arr[i]);
    }

    return 0;
}

