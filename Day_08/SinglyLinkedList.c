#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

/* Insert at Begin */
struct Node* insertAtBegin(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    return newNode;
}

/* Insert at End */
struct Node* insertAtEnd(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        return newNode;
    }

    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;

    return head;   // ✅ correct
}

/* Insert After */
void insertAfter(struct Node* head, int key, int data) {
    while (head != NULL && head->data != key)
        head = head->next;

    if (head != NULL) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = head->next;
        head->next = newNode;
    }
}

/* Display */
void Display(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    head = insertAtEnd(head, 5);
    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 30);

    insertAfter(head, 5, 15);

    Display(head);
    return 0;
}