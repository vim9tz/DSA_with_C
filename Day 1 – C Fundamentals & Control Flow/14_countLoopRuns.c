// Loop Runs How Many Times? (for + if)

#include <stdio.h>

int main()
{
    int i;

    for (i = 1; i <= 10; i++)
    {
        if (i % 3 == 0)
            printf("Hello\n");
    }

    return 0;
}