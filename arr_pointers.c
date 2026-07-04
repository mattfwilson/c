#include <stdio.h>
#include <string.h>


int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int arr_len = sizeof(arr) / sizeof(arr[0]);
    int i;

    for (i = 0; i < arr_len; i++) {
        printf("%d\n", arr[i]);
        printf("%p\n", &arr[i]);
    }

    return 0;
}

