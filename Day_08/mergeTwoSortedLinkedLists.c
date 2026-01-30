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

/* Merge Two Sorted Lists */
struct Node *mergeSortedLists(struct Node *l1, struct Node *l2)
{
    if (l1 == NULL)
        return l2;
    if (l2 == NULL)
        return l1;

    struct Node *mergedHead = NULL;
    struct Node *tail = NULL;

    /* Initialize merged head */
    if (l1->data < l2->data)
    {
        mergedHead = tail = l1;
        l1 = l1->next;
    }
    else
    {
        mergedHead = tail = l2;
        l2 = l2->next;
    }

    /* Merge remaining nodes */
    while (l1 != NULL && l2 != NULL)
    {
        if (l1->data < l2->data)
        {
            tail->next = l1;
            l1 = l1->next;
        }
        else
        {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }

    /* Attach remaining nodes */
    if (l1 != NULL)
        tail->next = l1;
    else
        tail->next = l2;

    return mergedHead;
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
    struct Node *list1 = NULL;
    struct Node *list2 = NULL;
    struct Node *merged = NULL;

    /* First sorted list */
    list1 = insertAtEnd(list1, 1);
    list1 = insertAtEnd(list1, 3);
    list1 = insertAtEnd(list1, 5);

    /* Second sorted list */
    list2 = insertAtEnd(list2, 2);
    list2 = insertAtEnd(list2, 4);
    list2 = insertAtEnd(list2, 6);

    printf("List 1:\n");
    display(list1);

    printf("List 2:\n");
    display(list2);

    merged = mergeSortedLists(list1, list2);

    printf("Merged List:\n");
    display(merged);

    return 0;
}