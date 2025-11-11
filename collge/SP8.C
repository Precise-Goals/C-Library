#include<stdio.h>
#include<conio.h>
#define mx 20
int a[mx][mx];
int vist[mx];
int q[mx];
int f=-1,r=-1;

void enq(int v){
	if(r == mx -1 ){
		printf("\nQueue Overflow \n");
	} else {
		if(f==-1){f=0;}
		r++;
		q[r] = v;
	}
}
int deq(){
	int v;
	if(f == -1 || f > r){
		printf("Queue Underflow \n");
	} else {
		v = q[f];
		f++;
		return v;
	}
	return -1;
}
void BFS(int st,int v){
	int i,c;
	for(i=0;i<v;i++){
		vist[i]=0;
	}
	enq(st);
	vist[st] = 1;
	printf("\nBFS Start %d: \n",st);
	while((c=deq()) !=-1){
		printf("%d ",c);
		for(i=0;i<v;i++){
			if(a[c][i]==1 && vist[i] == 0){
				enq(i);
				vist[i] = 0;
			}
		}
	}
	printf("\n");
}

int main(){
	int v,e,i,j,s,d,st;
	clrscr();
	printf("Create Graph and Perform BFS\n");
	printf("Enter the no of Vertices (atleast 5): ");
	scanf("%d", &v);
	if(v<5){
		printf("Graph must have atleast 5 nodes\n");
		getch();
		return -1;
	}
	printf("Enter the Number of Edges: ");
	scanf("%d", &e);
	for(i=0;i<v;i++){
		for(j=0;j<v;j++){
			a[i][j] = 0;
		}
	}
	printf("\n Enter Edges(s d): ");
	for(i=0;i<e;i++){
		printf("Edge %d: ",i+1);
		scanf("%d %d",&s,&d);
		a[s][d] = 1;
		a[d][s] = 1;
	}
	printf("Enter starting Node: ");
	scanf("%d",&st);
	BFS(st,v);
	getch();
	return 0;
}
