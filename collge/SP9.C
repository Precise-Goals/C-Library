#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct Node{
	char da;
	struct Node *l,*r;
}Node;

Node *cN(char data){
	Node *nw;
	nw = (Node *)malloc(sizeof(Node));
	nw -> da = data;
	nw -> l = NULL;
	nw -> r = NULL;
	return nw;
}
int isOp(char c){
	if(
		c == '+' ||
		c == '-' ||
		c == '*' ||
		c == '/' ||
		c == '^'
	){
		return 1;
	}
	return 0;
}

Node* stack[50];
int tp = -1;

void push(Node* nod){
	stack[++tp] = nod;
}
Node* pop(){
	if(tp == -1){
		return NULL;
	}
	return stack[tp--];
}
Node *constructTree(char pf[]){
	int i;
	int len = strlen(pf);
	Node *n,*n1,*n2;

	for(i=len-1;i>=0;i--){
		if(!isOp(pf[i])){
			n = cN(pf[i]);
			push(n);
		} else {
			n = cN(pf[i]);
			n1 = pop();
			n2 = pop();
			n -> l = n1;
			n -> r = n2;
			push(n);
		}
	}
	return pop();
}
void post(Node *root){
	if(root != NULL){
		post(root -> l);
		post(root -> r);
		printf("%c",root -> da);
	}
}
void main(){
	char pf[50];
	Node* root;
	clrscr();
	printf("Expression Tree\n");
	printf("Enter prefix exp(+--a*bc/def):");
	scanf("%s",pf);
	root = constructTree(pf);

	printf("\nPost order Traversal of tree: ");
	post(root);
	getch();
}