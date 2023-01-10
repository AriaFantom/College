#include<stdio.h>

void main() {
    
    int range, i, sum = 0;
    printf("Enter the range: ");
    scanf("%d", &range);

    for(int i = 1; i <= range; i++) {
        sum += i;
    }
    printf("The sum of all the numbers from 1 to %d is %d", range, sum);
}