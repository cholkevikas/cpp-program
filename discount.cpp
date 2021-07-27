#include <iostream>

using namespace std;


int main()

{
  string item;
  int nitem;
  float price;
  float tprice;
  float fprice;
  
  cout<<"\n Enter item name : ";
  cin>>item;
  
  cout<<"\n Enter number of item : ";
  cin>>nitem;
  
  cout<<"\n Enter price of item : ";
  cin>>price;
 
  tprice=nitem*price;
  
  cout<<"\n Total price = "<<tprice;
 
  if(tprice>=1000)
  {
  fprice=tprice-(tprice*0.1);
 
  cout<<"\n Final price of item ="<<fprice ;
  }
 
 
 return 0; 
}

/*
profound@profound-desktop:~/Desktop/brushup49/cpp_program$ g++ discount.cpp
profound@profound-desktop:~/Desktop/brushup49/cpp_program$ ./a.out

 Enter item name : pen

 Enter number of item : 100

 Enter price of item : 10

 Total price = 1000
 Final price of item =900profound@profound-desktop:~/Desktop/brushup49/cpp_program$ 
*/
