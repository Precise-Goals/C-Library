#include <conio.h>
#include <stdio.h>

#define MAX_SIZE 5

int stack[MAX_SIZE];
int top = -1;

int isFull()
{
    if (top == MAX_SIZE - 1) {
        return 1;
    }
    return 0;
}

int isEmpty()
{
    if (top == -1) {
        return 1;
    }
    return 0;
}

void push(int data)
{
    if (isFull()) {
        printf("Stack Overflow! Cannot push %d.\n", data);
    } else {
        top++;
        stack[top] = data;
        printf("%d pushed to stack.\n", data);
    }
}

int pop()
{
    int data;
    if (isEmpty()) {
        printf("Stack Underflow! Cannot pop.\n");
        return -1;
    } else {
        data = stack[top];
        top--;
        return data;
    }
}

int peek()
{
    if (isEmpty()) {
        printf("Stack is empty! Cannot peek.\n");
        return -1;
    } else {
        return stack[top];
    }
}

void main()
{
    // clrscr();

    printf("--- Pushing ---\n");
    push(10);
    push(20);

    printf("\n--- Peeking ---\n");
    printf("Top element is: %d\n", peek());

    printf("\n--- Popping ---\n");
    printf("Popped: %d\n", pop());
    printf("Popped: %d\n", pop());

    printf("\n--- Underflow Test ---\n");
    printf("Popped: %d\n", pop());

    printf("\nPress any key to exit...");
    getch();
}