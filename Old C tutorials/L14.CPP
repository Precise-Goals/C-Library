#include<iostream.h>
#include<conio.h>
inline void t(){
 cout<<"Thank you Statement"<<endl;
 cout<<"Regards"<<endl;
}
// paste the contents into that location where t() called
// time saved due to saving the request and acceptance.
/*Compiler can reject request when program has
 complex structures in inline fucntions*/
void main(){
   clrscr();
// inline Functions
   t();
   t();
   cout<<"everywhere it will work but this called a lot of times"<<endl;
   t();
   t();
   getch();
}