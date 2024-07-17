#include<iostream.h>
#include<conio.h>
void main(){
	clrscr();
	  //Array
	  int id[4]; //{0,1,2,3} places
	  //insertion--> 1.Direct and 2.Loops
	  //printing --> 1. Direct method aand 2.loops

	  // 1. Direct Method
	  cout<<"Example for Direct Method"<<endl;
	  id[0] = 1000;
	  id[1] = 4255;
	  id[2] = 4233;
	  id[3] = 3232;
	  cout<<id[0]<<endl;
	  cout<<id[2]<<endl;
	  cout<<id[1]<<endl;
	  cout<<id[3]<<endl;
	  // 2. Loop Method
	  cout<<"Example for Loop Method"<<endl;
	  for(int i = 0;i<=4;i++){
	    cout<<"Enter the Value : "<<endl;
	    cin>>id[i];
	  }
	  for(i=0;i<=4;i++){
	    cout<<"Array is "<<id[i]<<endl;
	  }
	getch();
}