#include<stdio.h>

void main() {
    // find the perfect number
    int i, j, sum;
    for (i = 1; i <= 1000; i++) {
        sum = 0;
        for (j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            printf("%d is a perfect number: ", i);
            for (j = 1; j < i; j++) {
                if (i % j == 0) {
                    printf("%d ", j);
                }
            }
            printf("\n");
        }
    }

}