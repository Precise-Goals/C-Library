// OBJECT ORIENTED PROJGRAMMING
#include<iostream.h>
#include<conio.h>
// Constructor overloading  => using many constructor in one class
class number{
   int a,b;
   public:
     number(){
       a = 0;
       b = 0;
     }
     number(int x){
       a = x;
       b = 0;
     }
     number(int x,int y){
       a = x;
       b = y;
     }
     void getData(){
	cout<<"The value of a is "<<a<<endl;
	cout<<"The value of b is "<<b<<endl;
     }
};
// Main Section
void main(){
   clrscr();
   number obj1(0);
   obj1.getData();
   getch();
}