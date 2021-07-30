# include <iostream>
using namespace std;

class Student
{
public:
Student();
Student(int);
Student(int,int);
};

Student::Student()
{
cout<<"\n default Ctr.";
}

Student::Student(int)
{
cout<<"\n Ctr. with one parameter";
}

Student::Student(int,int)
{
cout<<"\n Ctr. with two parameter\n";
}

int main()
{
Student s;
Student s1(10);
Student s2(10,20);
}


/*
profound@profound-desktop:~/Desktop/brushup49/cpp_program$ g++ constr.cpp
profound@profound-desktop:~/Desktop/brushup49/cpp_program$ ./a.out

 default Ctr.
 Ctr. with one parameter
 Ctr. with two parameter
profound@profound-desktop:~/Desktop/brushup49/cpp_program$ 

*/
