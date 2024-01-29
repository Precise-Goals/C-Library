#include<iostream.h>
#include<conio.h>
//calling various functions with same name is function  overloading
int sum(int a,int b){
  return a+b;
}
int mul(int a,int b){
  return a*b;
}
int mul(int a,int b,int c){
  return b*a*c;
}

void main(){
   clrscr();
   int a,b,c;
   cout<<"Enter the value of a: ";
   cin>>a;
   cout<<"Enter the value of b: ";
   cin>>b;
   cout<<"Enter the value of c: ";
   cin>>c;

   cout<<sum(a,b)<<endl;
   cout<<mul(a,b)<<endl;
   cout<<mul(a,b,c)<<endl;

   getch();
}