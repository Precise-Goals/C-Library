#include<stdio.h>
#include<conio.h>

void Sort(int arr[],int n){
	int i,j,t;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j] > arr[j+1]){
			      t = arr[j];
			      arr[j] = arr[j+1];
			      arr[j+1]=t;
			}
		}
	}
}
void prin(int a[],int n){
	int i = 0;
	while(i<n){
		printf("%d ",a[i]);
		i++;
	}
	printf("\n");
}

void main(){
   int r,e,n,i=0;
   int cID[1000];
   clrscr();
   printf("Enter the number of Employees: ");
   scanf("%d",&n);

   printf("Enter their salaries: ");
   while(i<n){
	scanf("%d", &cID[i]);
	i++;
   }
   prin(cID,n);
   Sort(cID,n);
   prin(cID,n);

   getch();
}