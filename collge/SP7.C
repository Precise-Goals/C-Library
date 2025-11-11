#include<stdio.h>
#include<conio.h>
void main(){
	int a[20][20];
	int v,e,i,j,s,d;
	clrscr();
	printf("Enter the No of Vertices: ");
	scanf("%d",&v);
	for(i=0;i<v;i++){
		for(j=0;j<v;j++){
			a[i][j] = 0;
		}
	}
	printf("Enter the No of Edges: ");
	scanf("%d", &e);
	for(i=0;i<e;i++){
		printf("Enter the Vertex %d (s d): ",i);
		scanf("%d %d",&s,&d);
		a[s][d] = 1;
		a[d][s] = 1;
	}
	printf("Adjacency Matrix \n");
	printf("   ");
	for(i=0;i<v;i++){
		printf(" %d ",i);
	}
	printf("\n");
	for(i=0;i<v;i++){
		printf(" %d ",i);
		for(j=0;j<v;j++){
			printf(" %d ",a[i][j]);
		}
		printf("   \n");
	}
	getch();
}