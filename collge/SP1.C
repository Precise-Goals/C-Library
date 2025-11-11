#include<stdio.h>
#include<conio.h>

int Lin(int arr[],int n, int k){
	int i = 0;
	while(i<n){
		if(arr[i] == k){
			return i;
		}
		i++;
	}
	return 0;
}

void main(){
   int r,e,n,i=0,cID[1000];
   clrscr();
   printf("Enter the number of customers: ");
   scanf("%d",&n);

   printf("Enter the customer ids: ");
   while(i<n){
	scanf("%d", &cID[i]);
	i++;
   }
   printf("Enter the target: ");
   scanf("%d", &e);
   r = Lin(cID,n,e);
   if(r){
	printf("Search at index: %d \n",r);
   } else {
	printf("Search cannot Be found \n");
   }
   getch();
}