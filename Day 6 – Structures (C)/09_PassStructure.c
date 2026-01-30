// Pass Structure by Pointer to Modify Data ⭐⭐⭐ (call by reference using structures)

#include <stdio.h>

struct Student
{
    int id;
    float marks;
};

void updateMarks(struct Student *s)
{
    s->marks += 10; // bonus marks
}

int main()
{
    struct Student s1 = {101, 75.0};

    updateMarks(&s1);

    printf("Updated Marks = %.2f\n", s1.marks);

    return 0;
}