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
    if (isEmpty()) {
        printf("Queue Underflow! Cannot dequeue.\n");
        front = -1;
        rear = -1;
        return -1; 
    } else {
        int data = queue[front]; 
        front++;
        printf("Dequeued: %d\n", data);
        return data;
    }
}

void display() {
    if (isEmpty()) {
        printf("\nQueue is empty.\n");
    } else {
        printf("\nQueue (front to rear):\n");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
    printf("---------------------\n");
}

/**
 * Main function to demonstrate the queue operations.
 */
void main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display(); // Queue: 10 20 30

    dequeue(); // Dequeues 10
    display(); // Queue: 20 30

    enqueue(40);
    enqueue(50);
    display(); 
    enqueue(60); 
    enqueue(70);
    display();

    dequeue(); 
    dequeue(); 
    dequeue(); 
    dequeue(); 
    display(); 
    dequeue();

    getch();
}