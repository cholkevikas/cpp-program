# include <iostream>
using namespace std;

class A
{
public:
int a,b,c,d;

public:
void getdata()
{
cout<<"\n Enter value for a :";
cin>>a;

cout<<"\n Enter value for b :";
cin>>b;
}
};



class B:public A
{
public:
void showdata()
{
c=a+b;
d=a-b;
cout<<"\n Addition : "<<c;	
cout<<"\n Substraction : "<<d<<"\n";

}
};


int main()
{
B b;
b.getdata();
b.showdata();
}


