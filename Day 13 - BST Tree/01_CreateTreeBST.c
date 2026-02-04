// CREATE / INSERT INTO BST

// Problem Statement
// Insert elements into a Binary Search Tree.

// BST Rule
// Left subtree < Root < Right subtree


#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

struct Node* insert(struct Node* root, int data) {
    if (root == NULL)
        return createNode(data);

    if (data < root->data)
        root->left = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);

    return root;
}

void inorder(struct Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

int main() {
    struct Node* root = NULL;

    int values[] = {50, 30, 70, 20, 40, 60, 80};
    int n = 7;

    for (int i = 0; i < n; i++)
        root = insert(root, values[i]);

    printf("Inorder Traversal: ");
    inorder(root);

    return 0;
}