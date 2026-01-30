// Modify Value Using Pointer-to-Pointer ⭐

#include <stdio.h>

void change(int **pp) {
    **pp = 50;
}

int main() {
    int a = 10;
    int *p = &a;

    change(&p);

    printf("%d\n", a);
    return 0;
}