#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];  // declare a string with maximum length of 100
    int length;
    int i;
    int palindrome = 1;  // flag variable to store whether the string is palindrome or not

    printf("Enter a string: ");
    scanf("%s", str);  // read the string from the user

    length = strlen(str);  // get the length of the string

    // check if the string is palindrome
    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])  // compare the first and last characters, then second and second-last, and so on
        {
            palindrome = 0;  // set the flag to 0 if the characters are not the same
            break;  // exit the loop if a non-matching pair of characters is found
        }
    }

    if (palindrome)  // check the value of the flag
    {
        printf("The string is palindrome\n");
    }
    else
    {
        printf("The string is not palindrome\n");
    }

    return 0;
}
