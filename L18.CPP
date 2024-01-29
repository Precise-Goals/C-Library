// OBJECT ORIENTED PROJGRAMMING
#include<iostream.h>
#include<conio.h>
// Classes AND PUBLIC, PRIVATE access modifiers

class employee{
   int a,b;
   public:
     int c;
     void setData(int x,int y);
     void getData(){
	  cout<<"Value of A is "<<a<<endl;
	  cout<<"Value of B is "<<b<<endl;
	  cout<<"Value of C is "<<c<<endl;
     };
};//dont forgot semicolon
void employee::setData(int x,int y){//scope resolution operator relate with class
    a = x;
    b = y;
}

void main(){
   clrscr();
   int a,b;
   a = 3;
   b = 5;
   // cant access private one here
   employee nishant;
   nishant.c = 8;
   nishant.setData(a,b);
   nishant.getData();
   getch();
}