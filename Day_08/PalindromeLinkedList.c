#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

/* Insert at End */
struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL)
        return newNode;

    struct Node *temp = head;
    while (temp->next)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

/* Reverse Linked List */
struct Node *reverse(struct Node *head)
{
    struct Node *prev = NULL, *curr = head, *next = NULL;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

/* Check Palindrome */
int isPalindrome(struct Node *head)
{
    if (head == NULL || head->next == NULL)
        return 1;

    struct Node *slow = head, *fast = head;

    /* Find middle */
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    /* Reverse second half */
    struct Node *secondHalf = reverse(slow);

    /* Compare both halves */
    struct Node *firstHalf = head;
    while (secondHalf != NULL)
    {
        if (firstHalf->data != secondHalf->data)
            return 0;

        firstHalf = firstHalf->next;
        secondHalf = secondHalf->next;
    }

    return 1;
}

/* Display */
void display(struct Node *head)
{
    while (head)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Node *head = NULL;

    head = insertAtEnd(head, 1);
    head = insertAtEnd(head, 2);
    head = insertAtEnd(head, 3);
    head = insertAtEnd(head, 2);
    head = insertAtEnd(head, 1);

    display(head);

    if (isPalindrome(head))
        printf("Linked List is Palindrome\n");
    else
        printf("Linked List is NOT Palindrome\n");

    return 0;
}