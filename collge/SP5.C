#include<stdio.h>
#include<conio.h>

typedef struct Node{
       int d;
       struct Node* nx;
} Node;


Node* add(Node *h);
void dis(Node *h);
void f(Node *h);

void main(){
	Node *h=NULL, *n, *t;
	int c;
	clrscr();
	do{
	  printf("Linked List Operation\n");
	  printf("1. Add the Data element\n");
	  printf("2. Display the Data element\n");
	  printf("0. Exit\n");
	  printf("Enter your choice: ");
	  scanf("%d", &c);
	  switch(c){
		case 1:
			h = add(h);break;
		case 2:
			dis(h);break;
		case 0:
			break;
		default:
			printf("Invalid choice");
	  }
	} while(c!=0);

	f(h);
	getch();
}

Node *add(Node *h){
	if(h != NULL){
		Node *n = (Node*)malloc(sizeof(Node));
		printf("Enter the element to add: ");
		scanf("%d", &n -> d);
		n -> nx = h;
		return n;
	} else {
		printf("Memory Allocation failed! \n");
	}
}
void dis(Node *h){
	Node *t = h;
	if(t != NULL){
		while(t != NULL){
			printf("%d -> ", t->d);
			t = t -> nx;
		}
		printf("NULL\n");
	} else {
		printf("LIST IS EMPTY! \n");
	}
}
void f(Node *h){
	Node *curr = h;
	Node *next;
	while(curr != NULL){
		next = curr -> nx;
		free(curr);
		curr = next;
	}
}