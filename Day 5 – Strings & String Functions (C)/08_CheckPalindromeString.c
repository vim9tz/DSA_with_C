// Check Palindrome String ⭐

#include <stdio.h>

int main()
{
    char str[] = "madam";
    int i, len = 0, flag = 1;

    while (str[len] != '\0')
        len++;

    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}