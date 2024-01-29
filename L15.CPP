#include<iostream.h>
#include<conio.h>
// in recursion is term which function is called in same function...
// factorial finder using recursions            n (n-1) !
int factorial(int n){
if(n<=1)
   {
      return 1;
   }
   return n* factorial(n-1);
}
void main(){
   clrscr();
   int n;
   cout<<"enter the number to find its factorial : ";
   cin>>n;
   cout<<"Factorial for the given number is given: "<<factorial(n);
// recursions
   getch();
}