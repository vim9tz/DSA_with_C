#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (!head)
        return newNode;

    struct Node *temp = head;
    while (temp->next)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

void nthFromEnd(struct Node *head, int n)
{
    struct Node *fast = head, *slow = head;

    for (int i = 0; i < n; i++)
        fast = fast->next;

    while (fast)
    {
        slow = slow->next;
        fast = fast->next;
    }

    printf("%dth node from end: %d\n", n, slow->data);
}

int main()
{
    struct Node *head = NULL;

    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 30);
    head = insertAtEnd(head, 40);
    head = insertAtEnd(head, 50);

    nthFromEnd(head, 2);

    return 0;
}