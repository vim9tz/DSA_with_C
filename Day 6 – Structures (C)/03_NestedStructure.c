// Nested Structure (Address Inside Employee)

#include <stdio.h>

struct Address
{
    char city[20];
    int pin;
};

struct Employee
{
    int empId;
    char name[20];
    struct Address addr;
};

int main()
{
    struct Employee e1 = {101, "Ravi", {"Chennai", 600001}};

    printf("ID: %d\n", e1.empId);
    printf("Name: %s\n", e1.name);
    printf("City: %s\n", e1.addr.city);
    printf("PIN: %d\n", e1.addr.pin);

    return 0;
}