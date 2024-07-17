#include<iostream.h>
#include<conio.h>
union employee{
   int id;
   float salary;
};
void main(){
   clrscr();
   // union
   //storage ke liye jagah reserved;
   //while in structure its different for individually

   // nishant
   employee nishant;
   nishant.id = 424;  // eg 2 bytes
   cout<<nishant.id<<endl;
   nishant.salary = 32122; //eg 4 bytes
   cout<<nishant.salary<<endl;
   // everyone getting highest same byte storage reserved
  // alloting a lot



   getch();
}