// Problem Statement

// Find the depth (level) of a given key in a BST.

// Why this matters
// 	•	Depth = distance from root
// 	•	Uses BST search logic

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *insert(struct Node *root, int data)
{
    if (!root)
    {
        struct Node *n = malloc(sizeof(struct Node));
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

int findDepth(struct Node *root, int key, int depth)
{
    if (root == NULL)
        return -1;

    if (root->data == key)
        return depth;

    if (key < root->data)
        return findDepth(root->left, key, depth + 1);
    else
        return findDepth(root->right, key, depth + 1);
}

int main()
{
    struct Node *root = NULL;
    int values[] = {50, 30, 70, 20, 40, 60, 80};

    for (int i = 0; i < 7; i++)
        root = insert(root, values[i]);

    int key = 60;
    int depth = findDepth(root, key, 0);

    printf("Depth of %d = %d\n", key, depth);
    return 0;
}