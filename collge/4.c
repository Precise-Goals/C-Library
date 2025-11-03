#include <stdio.h>
#include <conio.h> 

#define MAX_SIZE 5

int queue[MAX_SIZE];
int front = -1; 
int rear = -1;  

int isFull() {
    if (rear == MAX_SIZE - 1) {
        return 1;
    }
    return 0;
}

int isEmpty() {
    if (front == -1 || front > rear) {
        return 1;
    }
    return 0;
}

void enqueue(int data) {
    if (isFull()) {
        printf("Queue Overflow! Cannot add %d.\n", data);
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++; 
        queue[rear] = data; 
        printf("%d enqueued to queue.\n", data);
    }
}

int dequeue() {
    int data;
    if (isEmpty()) {
        printf("Queue Underflow! Cannot dequeue.\n");
        front = -1;
        rear = -1;
        return -1; 
    } else {
        data = queue[front]; 
        front++; 
        printf("Dequeued: %d\n", data);
        return data;
    }
}

void main() {
    // clrscr();
    
    printf("--- Enqueueing ---\n");
    enqueue(10);
    enqueue(20);
    enqueue(30);

    printf("\n--- Dequeueing ---\n");
    dequeue(); 
    dequeue(); 
    dequeue(); 

    printf("\n--- Underflow Test ---\n");
    dequeue(); 
    
    printf("\nPress any key to exit...");
    getch();
}