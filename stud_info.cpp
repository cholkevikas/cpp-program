/*Q.3 Define class student which shows the information about the Student using
constructor and destructor - Include the following members
Data Members
1. Name of the Student
2. Roll No
3. Address
4. Percentage
Member functions
1. To assign initial values
2. To accept the values from user.
3. To display all data to user including Grade by using following conditions
a. Per>=70 Distinction
b. Per <70 and Per >=60 First Class
c. Per<60 and Per>=40 Second class
d. Per<40 Student is Fail
*/

#include <iostream>
using namespace std;

class Student
{

public:
char name[20],add[30];
int rn;
float per;

public:

Student()
{
cout<<"\n Enter Name of Student : ";
cin>>name;

cout<<"\n Enter Roll No. of Student : ";
cin>>rn;

cout<<"\n Enter Address of Student : ";
cin>>add;

cout<<"\n Enter Percentage of Student : ";
cin>>per;

}

void display()
{
cout<<"\n Name of Student : "<<name;

cout<<"\n Roll No. of Student : "<<rn;

cout<<"\n Address of Student : "<<add;

cout<<"\n Percentage of Student : "<<per;
}
void show()
{
if(per>=70)
{
cout<<"\n Distinction";
}

else if(per<70 && per>=60)
{
cout<<"\n First Class";
}

else if(per<60 && per>=40)
{
cout<<"\n Second Class";
}

else
{
cout<<"\n Fail";
}
}

};


int main()
{
Student s;
s.display();
s.show();
}







