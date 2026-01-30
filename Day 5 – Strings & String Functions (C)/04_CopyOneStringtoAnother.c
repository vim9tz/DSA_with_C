// Copy One String to Another (strcpy)

#include <stdio.h>
#include <string.h>

int main()
{
    char src[] = "C Programming";
    char dest[20];

    strcpy(dest, src);

    printf("%s\n", dest);

    return 0;
}