// Pass Structure to Function

#include <stdio.h>

struct Student
{
    int id;
    float marks;
};

void display(struct Student s)
{
    printf("ID: %d, Marks: %.2f\n", s.id, s.marks);
}

int main()
{
    struct Student s1 = {1, 88.5};
    display(s1);

    return 0;
}