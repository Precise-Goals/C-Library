// OBJECT ORIENTED PROJGRAMMING
#include<iostream.h>
#include<conio.h>
//parameterized constructor
class number{
   int a,b;
   public:
      number(int x,int y){
	a = x;
	b = y;
      }
      void getData(){
	cout<<"value of a is "<<a<<endl;
	cout<<"value of b is "<<b<<endl;
      }
};
// Main Section
void main(){
   clrscr();
   number o1(4,5);
   o1.getData();
   getch();
}