// Store and Display Multiple Students

#include <stdio.h>

struct Student
{
    int id;
    char name[20];
    float marks;
};

int main()
{
    struct Student s[3] = {
        {1, "A", 78},
        {2, "B", 85},
        {3, "C", 90}};

    int i;
    for (i = 0; i < 3; i++)
    {
        printf("%d %s %.2f\n", s[i].id, s[i].name, s[i].marks);
    }

    return 0;
}