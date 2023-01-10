#include <stdio.h>

int main() {
    int num, originalNum, remainder, n = 0, result = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Determine the number of digits in the integer
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Check if the number is an Armstrong number
    while (originalNum != 0) {
        remainder = originalNum % 10;
        int i;
        int sum = 1;
        for (i = 0; i < n; i++) {
            sum *= remainder;
        }
        result += sum;
          
        originalNum /= 10;
       
    }

    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}