// Swap Two Structures

#include <stdio.h>

struct Point
{
    int x, y;
};

int main()
{
    struct Point p1 = {1, 2};
    struct Point p2 = {3, 4};
    struct Point temp;

    temp = p1;
    p1 = p2;
    p2 = temp;

    printf("p1 = (%d,%d)\n", p1.x, p1.y);
    printf("p2 = (%d,%d)\n", p2.x, p2.y);

    return 0;
}