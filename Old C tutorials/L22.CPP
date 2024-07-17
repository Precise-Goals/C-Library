// OBJECT ORIENTED PROJGRAMMING
#include<iostream.h>
#include<conio.h>
// Friend Functions
class func{
   int a;  //private
   friend int sum(func obj); //friend function
   public:
     int b;         //public
     void setData(int x,int y){
	a=x;
	b=y;
     }
     void getData(){
	cout<<"Value of x is : "<<a<<endl;
	cout<<"Value of y is : "<<b<<endl;
     }
};

//normal function
int sum(func obj){
  return obj.a + obj.b;
};

// Main Section
void main(){
   clrscr();
   func o1;
   o1.setData(4,5);
   o1.getData();
   cout<<"Sum of both no: "<<sum(o1);
   getch();
}