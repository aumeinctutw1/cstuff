#include <stdio.h>

void printArr(const short *arr, int arrLen) {
    for (int i = 0; i < arrLen; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

short maxValue(const short *arr, int arrLen) {
    short max = arr[0];
    for (int i = 1; i < arrLen; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main(int argc, const char* argv[]) {
    /* 6 2 Byte integers */
    short arr[] = {6, 6, 7 , -1 , -2 , 1, 2, 3, 4, 5, 6};

    printArr(arr, sizeof(arr) / sizeof(short));

    printf("Max value: %d\n", maxValue(arr, sizeof(arr) / sizeof(short)));

    return 0;
}