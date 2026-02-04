// FIND HEIGHT OF BST

// Problem Statement

// Find the height of a BST.

// Why this matters
// 	•	Height affects performance
// 	•	Used in AVL trees, balancing


#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* insert(struct Node* root, int data) {
    if (!root) {
        struct Node* n = malloc(sizeof(struct Node));
        n->data = data;
        n->left = n->right = NULL;
        return n;
    }
    if (data < root->data)
        root->left = insert(root->left, data);
    else
        root->right = insert(root->right, data);
    return root;
}

int height(struct Node* root) {
    if (root == NULL)
        return -1;   // height in terms of edges

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
}

int main() {
    struct Node* root = NULL;
    int values[] = {50, 30, 70, 20, 40, 60, 80};

    for (int i = 0; i < 7; i++)
        root = insert(root, values[i]);

    printf("Height of BST = %d\n", height(root));
    return 0;
}