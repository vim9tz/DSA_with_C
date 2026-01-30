// Check Palindrome Number Using Recursion

#include <stdio.h>

int reverse(int, int);

int main()
{
    int num = 121;
    int rev = reverse(num, 0);

    if (num == rev)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}

int reverse(int n, int rev)
{
    if (n == 0)
        return rev;
    return reverse(n / 10, rev * 10 + n % 10);
}