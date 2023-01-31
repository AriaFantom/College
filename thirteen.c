#include<stdio.h>

void main() {
    // find the number of vowels in a string
    char str[100];
    int i, count = 0;
    printf("Enter a string: ");
    scanf("%s", &str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            count++;
        }
    }
    printf("The number of vowels in the string is %d", count);
}