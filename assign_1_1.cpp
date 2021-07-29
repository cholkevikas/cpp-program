# include <iostream>
using namespace std;

class Time
{
public:
float t;
public:
void getdata()
{
cout<<"\n Enter Time : ";
cin>>t;
}

void showdata()
{
cout<<"\n Time : "<<t;
}
};


class Date
{
public:
int d;
public:
void getdata()
{
cout<<"\n Enter date : ";
cin>>d;
}

void showdata()
{
cout<<"\n Date : "<<d;
}
};


class Person
{
public:
char name[20];
public:
void getdata()
{
cout<<"\n Enter Name : ";
cin>>name;
}

void showdata()
{
cout<<"\n Name : "<<name;
}
};


class Student
{
public:

int i;
public:
void getdata()
{
cout<<"\n Enter Student id : ";
cin>>i;
}

void showdata()
{
cout<<"\n Student id : "<<i;
}

};
class Fan
{
public:
char f[20];
public:
void getdata()
{
cout<<"\n Enter Fan company : ";
cin>>f;
}

void showdata()
{
cout<<"\n Fan company : "<<f;
}
};

class Point
{
public:
int p,q;
public:
void getdata()
{
cout<<"\n Enter x, y cordinate : ";
cin>>p>>q;
}

void showdata()
{
cout<<"\n co ordinate x & y : "<<p<<q;
}
};

class Box
{
public:
char box[20];
public:
void getdata()
{
cout<<"\n Enter box type : ";
cin>>box;
}

void showdata()
{
cout<<"\n Box type : "<<box;
cout<<"\n";
}
};



int main()
{
Time t;
Date d;
Person p;
Student s;
Fan f;
Point e;
Box b;
t.getdata();
d.getdata();
p.getdata();
s.getdata();
f.getdata();
e.getdata();
b.getdata();

t.showdata();
d.showdata();
p.showdata();
s.showdata();
f.showdata();
e.showdata();
b.showdata();

}


/*
profound@profound-desktop:~/Desktop/brushup49/cpp_program$ g++ assign_1_1.cpp
profound@profound-desktop:~/Desktop/brushup49/cpp_program$ ./a.out

 Enter Time : 9.00

 Enter date : 29

 Enter Name : vikas

 Enter Student id : 101

 Enter Fan company : bajaj

 Enter x, y cordinate : 5
5

 Time : 9
 Date : 29
 Name : vikas
 Student id : 101
 Fan company : bajaj
 co ordinate x & y : 55profound@profound-desktop:~/Desktop/brushup49/cpp_program$ 

*/



