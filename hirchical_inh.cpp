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
cout<<"\n Addition : "<<c;	
}
};


class C:public A
{
public:

void showdata1()
{
d=a-b;
cout<<"\n Substraction : "<<d;	
}
};


int main()
{
C c;
B b;
b.getdata();
b.showdata();
c.getdata();
c.showdata1();
}

/*
profound@profound-desktop:~/Desktop/brushup49/cpp_program$ .p
profound@profound-desktop:~/Desktop/brushup49/cpp_program$ ./a.out

 Enter value for a :20

 Enter value for b :10

 Addition : 30
 Enter value for a :50

 Enter value for b :20

 Substraction : 30profound@profound-desktop:~/Desktop/brushup49/cpp_program$ 

*/
