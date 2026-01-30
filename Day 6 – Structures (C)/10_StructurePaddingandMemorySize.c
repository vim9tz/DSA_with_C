// Structure Padding & Memory Size ⭐⭐⭐⭐

#include <stdio.h>

struct Test
{
    char a;
    int b;
    char c;
};

int main()
{
    printf("Size = %lu\n", sizeof(struct Test));
    return 0;
}