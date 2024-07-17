#include<iostream.h>
#include<conio.h>
void change(int &x, int &y){   //& lagane se call by ref
x = x++;                         // int &x = a ; int &y =b
y = y++;
}

void main(){
   clrscr();
// call by reference
// every variable has different address
   int nishant;
   int &piyush = nishant; //address change bc
   nishant = 95;
   piyush = 80;
   cout<<nishant;

   int a,b;
   a=13;
   b=14;
   change(a,b);
   cout<<"\n \t"<<a<<"\t"<<b<<endl;

   getch();
}