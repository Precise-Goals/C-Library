// OBJECT ORIENTED PROJGRAMMING
#include<iostream.h>
#include<conio.h>
// using array in classes
class company{
  int id[100];
  float price[100];
  int counter;

  public:
    void initcounter(){
     counter = 0;
    }
    void setData();
    void displayprice();
};
// setData....
 void company::setData(){
    cout<<"Enter the Id of Item : ";
    cin>>id[counter];
    cout<<"Enter Price of item  :  ";
    cin>>price[counter];
    counter++;
 }
 //displaydata
 void company::displayprice(){
    for(int i = 0;i<counter;i++){
       cout<<"Price of Item with Id "<<id[i]<<" is "<<price[i]<<endl;
    }
 }

int main(){
   clrscr();
   int choice;
   cout<<"\n *************************************";
   cout<<"\n Precise Goals Registration Services";
   cout<<"\n 1. Add an Service to Company";
   cout<<"\n 2. Remove an Service from Company";
   cout<<"\n 3. Enlist an Services of Company";
   cout<<"\n 4. Exit from the Interface";
   cout<<"\n *************************************";
   cout<<"\n Enter the Choice to Continue : ";
   cin>>choice;
   company precise;
   precise.initcounter();
   switch(choice){
    case 1:
      int en;
      cout<<" Enter the no of entries to add : ";
      cin>>en;
      for(int j=1;j<=en;j++){
	 precise.setData();
      }
      break;
    case 2:
     // precise.removeId();
      break;
    case 3:
      precise.displayprice();
      break;
    case 4:
      cout<<"Thanks for using Service Pannel.";
      return 0;
    default:
      cout<<"Invalid interactions";
      break;
   }
   getch();
}