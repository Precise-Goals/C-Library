#include<iostream.h>
#include<conio.h>
void main(){
	clrscr();
	// pointers in array
	int nums[4]={1,2,3,4};
	int* p = nums;
	cout<<*p<<endl;
	for(int i=1; i<4; i++){
	cout<<*(p+i)<<endl;
	}
	getch();
}