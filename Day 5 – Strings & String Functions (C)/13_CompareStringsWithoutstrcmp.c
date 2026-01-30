// Compare Strings Without strcmp

#include <stdio.h>

int main()
{
    char s1[] = "test";
    char s2[] = "test";
    int i = 0, equal = 1;

    while (s1[i] != '\0' || s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            equal = 0;
            break;
        }
        i++;
    }

    if (equal)
        printf("Equal\n");
    else
        printf("Not Equal\n");

    return 0;
}