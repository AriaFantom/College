#include<stdio.h>

void main() {
    // linear search algorithm 
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i, num, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 0; i < 10; i++) {
        if (arr[i] == num) {
            flag = 1;
            break;
        }
    }

    if (flag == 1) {
        printf("The number %d is present in the array", num);
    } else {
        printf("The number %d is not present in the array", num);
    }
}