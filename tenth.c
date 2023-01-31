#include<stdio.h>

void main() {
   
    int j, sum=0, num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (j = 1; j < num; j++) {
        if (num % j == 0) {
            sum += j;
        }
    }
    
    if (sum == num) {
        printf("%d is a perfect number: ", num);

    } else {
        printf("%d is not a perfect number\n", num);
    }



}