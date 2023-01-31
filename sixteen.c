#include<stdio.h>

void main() {
    // sort an array using bubble sort from largest to smallest
    int arr[5] = {2, 7, 4, 1, 5};
    int temp;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 - i - 1 ; j++) {
            if (arr[j] < arr[j + 1]) {
                // printf("=====%d %d=====\n", arr[j], arr[j + 1]);
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                // printf("----%d %d----\n", arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

}