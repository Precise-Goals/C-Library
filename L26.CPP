// OBJECT ORIENTED PROJGRAMMING
#include<iostream.h>
#include<conio.h>
// contructor with default arguments
class Number{
  int a,b,c;
  public:
   Number(int x = 0, int y = 0, int z = 1){ //here its default and used when not given
     a = x;
     b = y;
     c = z;
   }
   void getData(){
     cout<<"value of a is "<<a<<endl
	 <<"value of b is "<<b<<endl
	 <<"value of c is "<<c<<endl;
   }
};
// Main Section
void main(){
   clrscr();
   Number obj1(4,5);
   obj1.getData();
   getch();
}