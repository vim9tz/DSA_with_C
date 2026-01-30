#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

/* Insert at Beginning */
struct Node* insertAtBegin(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    if (head == NULL) {
        newNode->next = newNode;
        newNode->prev = newNode;
        return newNode;
    }

    struct Node* last = head->prev;

    newNode->next = head;
    newNode->prev = last;
    head->prev = newNode;
    last->next = newNode;

    return newNode;  // new head
}

/* Insert at End */
struct Node* insertAtEnd(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    if (head == NULL) {
        newNode->next = newNode;
        newNode->prev = newNode;
        return newNode;
    }

    struct Node* last = head->prev;

    newNode->next = head;
    newNode->prev = last;
    last->next = newNode;
    head->prev = newNode;

    return head;
}

/* Insert After a Given Value */
void insertAfter(struct Node* head, int key, int data) {
    if (head == NULL)
        return;

    struct Node* temp = head;

    do {
        if (temp->data == key) {
            struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
            newNode->data = data;

            newNode->next = temp->next;
            newNode->prev = temp;
            temp->next->prev = newNode;
            temp->next = newNode;
            return;
        }
        temp = temp->next;
    } while (temp != head);
}

/* Display */
void Display(struct Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node* temp = head;
    do {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    } while (temp != head);

    printf("(back to head)\n");
}

int main() {
    struct Node* head = NULL;

    head = insertAtEnd(head, 5);
    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtBegin(head, 1);

    insertAfter(head, 10, 15);

    Display(head);

    return 0;
}