#include <stdio.h>
#include <stdlib.h> 
struct Node {
    int data;         
    struct Node* next; 
};
void printList(struct Node* n) {
    printf("List: ");
    while (n != NULL) {
        printf("%d -> ", n->data);
        n = n->next;             
    }
    printf("NULL\n");
}
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL; 
    
    return newNode;
}

int main() {
    struct Node * head = createNode(19);
    struct Node * second = createNode(21);
    head->next = second; 
    printList(head);
    free(head);
    free(second);

    return 0;
}