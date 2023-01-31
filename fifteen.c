#include<stdio.h>

void main() {
    
    int arr[5] = {3, 6, 1, 9, 2};

    int max = arr[0], min = arr[0];
    for (int i = 0; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("The maximum number in the array is %d and the minimum number is %d", max, min);

}