#include<stdio.h>
#include<conio.h>

typedef struct Node{
       int v;
       struct Node* nx;
} Node;

struct Node* cN(int v){
	Node *n;
	n = (Node*) malloc(sizeof(Node));
	n -> v = v;
	n -> nx = NULL;
	return n;

}

void main(){
	Node *adjList[20];
	Node *t;
	int v,e,i,j,s,d;
	printf("Create the graph using adjacency List\n");
	printf("Enter the Number of Vertices: ");
	scanf("%d",&v);
	for(i=0;i<v;i++){
		adjList[i] = NULL;
	}
	printf("Enter the Number of Edges: ");
	scanf("%d", &e);
	for(i=0;i<e;i++){
		printf("Vertex %d: ",i+1);
		scanf("%d %d",&s, &d);

		t = cN(d);
		t -> nx = adjList[s];
		adjList[s] = t;

		t = cN(s);
		t -> nx = adjList[d];
		adjList[d] = t;
	}
	printf("Adjacency List: \n");
	for(i=0;i<v;i++){
		Node *ptr = adjList[i];
		printf("Vertex %d: ",i);
		while(ptr != NULL){
			printf("%d -> ",ptr -> v);
			ptr = ptr -> nx;
		}
		printf("NULL \n");
	}
	getch();
}
