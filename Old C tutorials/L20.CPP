// OBJECT ORIENTED PROJGRAMMING
#include<iostream.h>
#include<conio.h>
// passing objects as functions

// Class Section
class complex{
   int a, b;
   public:
      void setData(int x, int y){
	   a = x;
	   b = y;
      }
      void setDat(complex o1,complex o2){
	   a = o1.a + o2.a;
	   b = o1.b + o2.b;
      }
      void display(){
	   cout<<"Your Complex number is "<<a<<" + i"<<b<<endl;
      }
};

// Main Section
void main(){
   clrscr();
   complex o1,o2,o3;
   o1.setData(1,2);
   o1.display();
   o2.setData(69,35);
   o2.display();
   o3.setDat(o1,o2);
   o3.display();
   getch();
}