#include<stdio.h>
#include<conio.h>
#define MAX 50

int q[MAX];
int f=-1,r=-1;

void enq();
void deq();
void dis();

void main(){
	int c;
	clrscr();
	do{
		printf("QUEUE OPERATIONS\n");
		printf("1. Enqueue an Element\n");
		printf("2. Dequeue an Element\n");
		printf("3. Display an Queue\n");
		printf("0. Exit\n");

		printf("Enter your choice: ");
		scanf("%d", &c);

		switch(c){
		case 1:
			enq();break;
		case 2:
			deq();break;
		case 3:
			dis();break;
		default:
			printf("Invalid choice\n");
		}
	}while(c!=0);
}

void enq(){
	int v;
	if(r != MAX-1){
		r++;
		printf("Enter the element to Enqueue: ");
		scanf("%d",&q[r]);
		if(f==-1){
			f=0;
		}
	} else {
		printf("STACK OVERFLOW! \n");
	}
}
void deq(){
	if(f == -1 || f > r){
		printf("STACK UNDERFLOW! \n");
	} else {
		f++;
		printf("Element dequeued! \n");
		if(f>r){
			f=r=-1;
		}
	}
}
void dis(){
	int i = 0;
	if(f != -1){
		for(i = f; i <= r; i++){
			printf("%d ", q[i]);
		}
		printf("\n");
	} else {
		printf("Queue is Empty! \n");
	}
}