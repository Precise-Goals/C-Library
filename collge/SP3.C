#include<stdio.h>
#include<conio.h>
#define MAX 50

int stack[MAX];
int top = -1;

void push();
void pop();
void peek();
void display();

void main(){
	int c;
	clrscr();
	do{
		  printf("STACK OPERATIONS\n");
		  printf("1. PUSH\n");
		  printf("2. PEEK\n");
		  printf("3. DISPLAY\n");
		  printf("4. POP\n");
		  printf("0. EXIT\n");
		  printf("provide the choice: ");
		  scanf("%d" ,&c);
		  switch(c){
			case 1:
				push();break;
			case 2:
				peek();break;
			case 3:
				display();break;
			case 4:
				pop();break;
			default:
				printf("invalid choice\n");
		  }
	}while(c!=0);
}

void push(){
	int d;
	if(top != MAX-1){
		printf("Enter Element to push: ");
		top++;
		scanf("%d",&stack[top]);
		printf("Element pushed!\n");
	} else {
		printf("STACK OVERFLOW\n");
	}
}
void peek(){
	printf("peeked element %d\n", stack[top]);
}
void pop(){
	if(top == -1){
		printf("STACK UNDERFLOW! \n");
	} else {
		int d = stack[top];
		top--;
		printf("%d is popped\n",d);
	}
}
void display(){
	int i = 0;
	printf("Stack Elements:");
	while(i<=top){
		printf("%d ", stack[i]);
		i++;
	}
	printf("\n");
}