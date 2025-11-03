#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void printList(struct Node* n)
{
    printf("List: ");
    while (n != NULL) {
        printf("%d -> ", n->data);
        n = n->next;
    }
    printf("NULL\n");
}

struct Node* createNode(int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

void main()
{
    struct Node* head;
    struct Node* second;
    struct Node* third;

    // clrscr();

    head = createNode(10);
    second = createNode(20);
    third = createNode(30);

    head->next = second;
    second->next = third;

    printList(head);

    printf("\nPress any key to exit...");
    getch();

    free(head);
    free(second);
    free(third);
}