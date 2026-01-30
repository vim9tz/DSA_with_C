// Find Student with Highest Marks

#include <stdio.h>

struct Student {
    int id;
    float marks;
};

int main() {
    struct Student s[3] = {
        {1, 78},
        {2, 92},
        {3, 85}
    };

    int i, maxIndex = 0;

    for (i = 1; i < 3; i++) {
        if (s[i].marks > s[maxIndex].marks)
            maxIndex = i;
    }

    printf("Topper ID: %d\n", s[maxIndex].id);

    return 0;
}