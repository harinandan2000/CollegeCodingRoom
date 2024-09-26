// Name:- Harinandan Paswan
// Reg No:- 22105128034
// Branch:- CSE
// AIM:- Write a Program in C to insert an element after an existing element in doubly linked list?

#include <stdio.h>
#include <stdlib.h>

// Node structure

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

// Function to create a new node

struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

// Function to insert a node after a given node

void insertAfter(struct Node *prevNode, int data)
{
    if (prevNode == NULL)
    {
        printf("The given previous node cannot be NULL.\n");
        return;
    }

    struct Node *newNode = createNode(data);

    newNode->next = prevNode->next;
    newNode->prev = prevNode;

    if (prevNode->next != NULL)
        prevNode->next->prev = newNode;

    prevNode->next = newNode;
}

// Function to print the doubly linked list

void printList(struct Node *node)
{
    struct Node *last;
    printf("Traversal in forward direction:\n");
    while (node != NULL)
    {
        printf("%d ", node->data);
        last = node;
        node = node->next;
    }
    printf("\nTraversal in reverse direction:\n");
    while (last != NULL)
    {
        printf("%d ", last->data);
        last = last->prev;
    }
    printf("\n");
}

// Main function

int main()
{
    struct Node *head = createNode(10);
    struct Node *second = createNode(20);
    struct Node *third = createNode(30);

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;

    printf("Original doubly linked list:\n");
    printList(head);

    int data = 25;
    printf("\nInserting %d after %d:\n", data, second->data);
    insertAfter(second, data);

    printList(head);

    return 0;
}
