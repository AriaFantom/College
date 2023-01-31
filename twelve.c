#include<stdio.h>

void main() {
    // find the lcm
    int num1, num2, i, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    for (i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            lcm = (num1 * num2) / i;
        }
    }
    printf("The lcm of %d and %d is %d", num1, num2, lcm);
}