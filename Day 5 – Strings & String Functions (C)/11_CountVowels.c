// Count Vowels in a String

#include <stdio.h>

int main()
{
    char str[] = "education";
    int i, count = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u')
            count++;
    }

    printf("Vowels = %d\n", count);

    return 0;
}