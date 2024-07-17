//typedef and structures

#include<iostream.h>
#include<conio.h>

typedef struct employee{
  int id;
  char favchar;
  float salary;
} emp;// given name using typedef

void main(){
  clrscr();
  employee nishant;
  employee n;
  // nishant
  nishant.id = 2132;
  nishant.favchar='n';
  nishant.salary=102019;

  // n
  n.id = 423;
  n.favchar = 'h';
  n.salary = 980979;

  cout<<nishant.id<<endl;
  cout<<nishant.salary<<endl;
  cout<<n.id<<endl;
  cout<<n.salary<<endl;

  getch();
}