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
}
};



class B:public A
{
public:
void getdata1()
{
cout<<"\n Enter value for b :";
cin>>b;
}
};


class C:public B
{
public:

void showdata()
{
c=a+b;
cout<<"\n Addition : "<<c;	
}
};


int main()
{
C c;
c.getdata();
c.getdata1();
c.showdata();
}

/*
profound@profound-desktop:~/Desktop/brushup49/cpp_program$ g++ multilevel_inh.cpp
profound@profound-desktop:~/Desktop/brushup49/cpp_program$ ./a.out

 Enter value for a :10

 Enter value for b :20

 Addition : 30profound@profound-desktop:~/Desktop/brushup49/cpp_program$ 

*/

