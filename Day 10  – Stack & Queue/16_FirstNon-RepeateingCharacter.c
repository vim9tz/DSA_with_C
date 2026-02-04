// FIRST NON-REPEATING CHARACTER IN A STREAM (Amazon, Zoho, Microsoft)

// Problem Statement

// Given a stream of characters, find the first non-repeating character at every step.

// Example

// Input
// a a b c

// Output
// a -1 b b

// Solution in C:

#include <stdio.h>

int main()
{
    char stream[] = "aabc";
    int freq[256] = {0};
    char queue[50];
    int front = 0, rear = -1;

    for (int i = 0; stream[i] != '\0'; i++)
    {
        char ch = stream[i];
        freq[ch]++;
        queue[++rear] = ch;

        while (front <= rear && freq[queue[front]] > 1)
            front++;

        if (front > rear)
            printf("-1 ");
        else
            printf("%c ", queue[front]);
    }

    return 0;
}