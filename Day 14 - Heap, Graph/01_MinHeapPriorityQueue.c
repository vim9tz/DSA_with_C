// MIN-HEAP Priority Queue

#include <stdio.h>
#include <stdlib.h>

#define MAX 10 // Maximum size of the priority queue

// Structure for the priority queue
struct PriorityQueue
{
    int arr[MAX]; // Array to store heap elements
    int size;     // Number of elements in the heap
};

// Swap function to swap two elements
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Heapify function to maintain the heap property (min-heap)
void heapify(struct PriorityQueue *pq, int index)
{
    int smallest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if (left < pq->size && pq->arr[left] < pq->arr[smallest])
        smallest = left;

    if (right < pq->size && pq->arr[right] < pq->arr[smallest])
        smallest = right;

    if (smallest != index)
    {
        swap(&pq->arr[index], &pq->arr[smallest]);
        heapify(pq, smallest); // Recursively heapify the affected subtree
    }
}

// Insert function to add elements to the priority queue
void insert(struct PriorityQueue *pq, int value)
{
    if (pq->size == MAX)
    {
        printf("Priority Queue is full!\n");
        return;
    }

    pq->arr[pq->size] = value;
    pq->size++;

    // Heapify the inserted element (bubble-up)
    for (int i = (pq->size / 2) - 1; i >= 0; i--)
    {
        heapify(pq, i);
    }
}

// Extract-Min function to remove and return the element with the lowest priority
int extractMin(struct PriorityQueue *pq)
{
    if (pq->size == 0)
    {
        printf("Priority Queue is empty!\n");
        return -1;
    }

    int min = pq->arr[0];               // The root of the heap is the minimum element
    pq->arr[0] = pq->arr[pq->size - 1]; // Replace root with the last element
    pq->size--;

    // Heapify the root element to maintain the heap property
    heapify(pq, 0);

    return min;
}

// Peek function to view the element with the lowest priority (without removing it)
int peek(struct PriorityQueue *pq)
{
    if (pq->size == 0)
    {
        printf("Priority Queue is empty!\n");
        return -1;
    }
    return pq->arr[0]; // Root is the minimum element
}

// Size function to return the number of elements in the priority queue
int size(struct PriorityQueue *pq)
{
    return pq->size;
}

int main()
{
    struct PriorityQueue pq;
    pq.size = 0;

    // Insert some elements into the priority queue
    insert(&pq, 10);
    insert(&pq, 5);
    insert(&pq, 20);
    insert(&pq, 15);

    // Extract the minimum element (the root of the heap)
    printf("Min element: %d\n", extractMin(&pq)); // Should print 5

    // Peek at the current root (minimum element)
    printf("Current Min element: %d\n", peek(&pq)); // Should print 10 (new root)

    // Check the size of the priority queue
    printf("Priority Queue size: %d\n", size(&pq)); // Should print 3

    return 0;
}