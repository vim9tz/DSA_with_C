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
    newNode->prev = NULL;
    newNode->next = head;

    if (head != NULL) {
        head->prev = newNode;
    }

    return newNode;  // new head
}

/* Insert at End */
struct Node* insertAtEnd(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        newNode->prev = NULL;
        return newNode;
    }

    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;

    return head;
}

/* Insert After a Given Value */
void insertAfter(struct Node* head, int key, int data) {
    struct Node* temp = head;
    
    while (temp != NULL && temp->data != key) {
        temp = temp->next;
    }

    if (temp != NULL) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = temp->next;
        newNode->prev = temp;

        if (temp->next != NULL) {
            temp->next->prev = newNode;
        }

        temp->next = newNode;
    }
}

/* Delete by Value */
struct Node* deleteByValue(struct Node* head, int key) {
    if (head == NULL) return NULL;

    struct Node* temp = head;

    if (head->data == key) {
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        free(temp);
        return head;
    }

    while (temp != NULL && temp->data != key) {
        temp = temp->next;
    }

    if (temp != NULL) {
        temp->prev->next = temp->next;
        if (temp->next != NULL) {
            temp->next->prev = temp->prev;
        }
        free(temp);
    }

    return head;
}

/* Display */
void Display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    head = insertAtEnd(head, 5);
    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtBegin(head, 1);

    insertAfter(head, 10, 15);

    Display(head);

    head = deleteByValue(head, 15);

    Display(head);

    return 0;
}