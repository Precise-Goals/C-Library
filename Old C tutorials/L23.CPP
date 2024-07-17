// OBJECT ORIENTED PROJGRAMMING
#include<iostream.h>
#include<conio.h>
// Constructor is special member function with same name as of class
// automatically alled whenever object is created
// used to initialise the object
class number{
   int a,b;
   public:
     number(){
       a=2;
       b=4;
     }
     void getData(){
       cout<<"the value of a is "<<a<<endl;
       cout<<"the value of b is "<<b<<endl;
     };
};

// Main Section
void main(){
   clrscr();
   number o1;
   o1.getData();
   getch();
}