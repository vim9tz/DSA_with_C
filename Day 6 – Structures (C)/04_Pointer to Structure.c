// Pointer to Structure

#include <stdio.h>

struct Book
{
    char title[20];
    int price;
};

int main()
{
    struct Book b = {"C Guide", 500};
    struct Book *p = &b;

    printf("Title: %s\n", p->title);
    printf("Price: %d\n", p->price);

    return 0;
}