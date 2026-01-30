// Dynamic String Using malloc

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str;

    str = (char *)malloc(20 * sizeof(char));

    printf("Enter string: ");
    scanf("%s", str);

    printf("You entered: %s\n", str);

    free(str);
    return 0;
}