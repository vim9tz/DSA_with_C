//  Reverse a String

#include <stdio.h>

int main()
{
    char str[] = "CProgram";
    int i, len = 0;
    char temp;

    while (str[len] != '\0')
        len++;

    for (i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    printf("%s\n", str);

    return 0;
}