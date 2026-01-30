// Remove Spaces from a String ⭐

#include <stdio.h>

int main()
{
    char str[] = "C Programming Language";
    int i, j = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
            str[j++] = str[i];
    }
    str[j] = '\0';

    printf("%s\n", str);

    return 0;
}