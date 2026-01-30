// Frequency of a Character

#include <stdio.h>

int main()
{
    char str[] = "programming";
    char ch = 'g';
    int i, count = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
            count++;
    }

    printf("Frequency = %d\n", count);

    return 0;
}