# include <iostream>
using namespace std;

class A
{
public:
int a,b,c;

public:
void getdata()
{
cout<<"\n Enter value for a :";
cin>>a;

cout<<"\n Enter value for b :";
cin>>b;
}

};



class B
{
public:
int p,q,r;
public:
void getdata1()
{
cout<<"\n Enter value for p :";
cin>>p;

cout<<"\n Enter value for q :";
cin>>q;
}


};


class C:public A,public B
{
public:

void showdata()
{
c=a+b;
cout<<"\n Addition : "<<c;	
}

void showdata1()
{
r=p-q;
cout<<"\n Substraction : "<<r;	
}

};


int main()
{
C c;
c.getdata();
c.getdata1();
c.showdata();
c.showdata1();
}

/*
profound@profound-desktop:~/Desktop/brushup49/cpp_program$ g++ multiple_inh.cpp
^[[Aprofound@profound-desktop:~/Desktop/brushup49/cpp_program$ g++ multiple_inh../a.out

 Enter value for a :20

 Enter value for b :30

 Enter value for p :50

 Enter value for q :10

 Addition : 50
 Substraction : 40profound@profound-desktop:~/Desktop/brushup49/cpp_program$ 

*/


