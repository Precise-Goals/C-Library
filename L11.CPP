#include<iostream.h>
#include<conio.h>

int sum(int,int); //function prototype to decalre above

void main(){
   clrscr();
   int a,b;
   cout<<"Give Value for A : ";
   cin>>a;
   cout<<"Give Value for B : ";
   cin>>b;
   cout<<"Summation for a,b: "<<sum(a,b);
   //Functions
   getch();
}
int sum(int a, int b){
return a+b;
cout<<"You cant see";
}