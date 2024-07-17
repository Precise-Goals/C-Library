#include<iostream.h>
#include<conio.h>
void main(){
	clrscr();
	/*
	cout<<&a;
	&--> Address Operator;
	*--> Dereference Operator;
	cout<<*a;
	*/
	int a;
	int* b = &a; //pointer
	a=2;
	cout<<"Value of A is : "<<a<<endl;
	cout<<"Value of A is : "<<*b<<endl;
	cout<<"The Address of A is : "<<&a<<endl;
	cout<<"The Address of A is : "<<b<<endl;
	getch();
}