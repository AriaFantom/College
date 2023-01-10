#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }

    int is_palindrome = 1;
    for (int i = 0; i < len / 2; i++)
    {
        printf("%c %c\n", str[i], str[len - i - 1]);
        if (str[i] != str[len - i - 1])
        {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome)
    {
        printf("%s is a palindrome.\n", str);
    }
    else
    {
        printf("%s is not a palindrome.\n", str);
    }
    return 0;
}
