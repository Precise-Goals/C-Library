#include<iostream.h>
#include<conio.h>
void change(int x,int y) {
 x = x++;
 y = y++;
}
void main(){
// call by reference
   clrscr();
   int a,b;
   a = 1;
   b = 3;
   change(a,b);
   cout<<"\n \t"<<a<<"\t"<<b;
   getch();
}