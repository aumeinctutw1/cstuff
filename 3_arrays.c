#include <stdio.h>

void printArr(const short *arr, int arrLen) {
    for (int i = 0; i < arrLen; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(int argc, const char* argv[]) {
    /* 6 2 Byte integers */
    short arr[] = {1, 2, 3, 4, 5, 6};

    printArr(arr, sizeof(arr) / sizeof(short));

    return 0;
}