#include <iostream>
using namespace std;

int main()

{
  
  int km,m,cm,mm;
  
  cout<<"\n Enter distance in km : ";
  cin>>km;
  
  m=km*1000;
  cm=m*100;
  mm=cm*10;
  
  cout<<"\nm :"<<m<< "\ncm :"<<cm<< "\nmm :"<<mm;
  
  return 0;
  
}

/*
C:\Users\SAINATH\OneDrive\Desktop\Program\cpp_program>g++ km.cpp

C:\Users\SAINATH\OneDrive\Desktop\Program\cpp_program>g++ -o km km.cpp

C:\Users\SAINATH\OneDrive\Desktop\Program\cpp_program>km

 Enter distance in km : 50

m :50000
cm :5000000
mm :50000000
C:\Users\SAINATH\OneDrive\Desktop\Program\cpp_program>
*/