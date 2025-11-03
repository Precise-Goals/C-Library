#include <stdio.h>
#include <conio.h> 
#define MAX_SIZE 5
int stack[MAX_SIZE];
int top = -1; 

int isFull() {
    if (top == MAX_SIZE - 1) {
        return 1;
    }
    return 0;
}


int isEmpty() {
    if (top == -1) {
        return 1;
    }
    return 0;
}

void push(int data) {
    if (isFull()) {
        printf("Stack Overflow! Cannot push %d.\n", data);
    } else {
        top++; 
        stack[top] = data; 
        printf("%d pushed to stack.\n", data);
    }
}
int pop() {
    if (isEmpty()) {
        printf("Stack Underflow! Cannot pop.\n");
        return -1; 
    } else {
        int data = stack[top]; 
        top--; 
        return data;
    }
}

int peek() {
    if (isEmpty()) {
        printf("Stack is empty! Cannot peek.\n");
        return -1; 
    } else {
        return stack[top]; 
    }
}

void display() {
    if (isEmpty()) {
        printf("\nStack is empty.\n");
    } else {
        printf("\nStack (top to bottom):\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
    printf("---------------------\n");
}

void main() {
    printf("--- Pushing elements ---\n");
    push(10);
    push(20);
    push(30);
    display();

    printf("Top element is: %d\n", peek());
    display();

    printf("Popped: %d\n", pop());
    display();

    printf("Popped: %d\n", pop());
    display();
    
    printf("Popped: %d\n", pop());
    printf("Popped: %d\n", pop()); 
    display();

    push(1);
    push(2);
    push(3);
    push(4);
    push(5); 
    display();
    push(6); 
    
    getch();
}