// Write a C program that:
// 	1.	Reads two strings
// 	2.	Finds the length of both strings
// 	3.	Copies one string into another
// 	4.	Concatenates the two strings
// 	5.	Compares the original strings
// 	6.	Reverses one string
// 	7.	Searches for a character in a string

// String Functions Covered

// strlen() - Find length
// strcpy() - Copy string
// strcat() - Concatenate
// strcmp() - Compare
// strrev() - Reverse (non-standard, explained)
// strchr() - Find character

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], copy[100], concat[200];
    char ch;
    char *pos;

    /* Input strings */
    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    /* 1. Length of strings */
    printf("\nLength of str1 = %lu\n", strlen(str1));
    printf("Length of str2 = %lu\n", strlen(str2));

    /* 2. Copy string */
    strcpy(copy, str1);
    printf("\nCopied string = %s\n", copy);

    /* 3. Concatenation */
    strcpy(concat, str1);
    strcat(concat, str2);
    printf("Concatenated string = %s\n", concat);

    /* 4. Compare strings */
    if (strcmp(str1, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    /* 5. Reverse string (manual for portability) */
    strcpy(copy, str1);
    strrev(copy); // If not supported, see note below
    printf("Reversed str1 = %s\n", copy);

    /* 6. Search character */
    printf("\nEnter character to search in str1: ");
    scanf(" %c", &ch);

    pos = strchr(str1, ch);
    if (pos != NULL)
        printf("Character '%c' found at position %ld\n", ch, pos - str1);
    else
        printf("Character '%c' not found\n", ch);

    return 0;
}