#include <iostream>
using namespace std;

class Person
{
	public:
	int age;
	char health;
	char sex;
	
	public:
	void getdata()
	{
		cout<<"\n Enter age : ";
		cin>>age;
		
		cout<<"\n Enter sex : ";
		cin>>sex;
		
		cout<<"\n Enter health : ";
		cin>>health;
	}
	
	
	void showdata()
	{
		cout<<"\n age : "<<age;
		cout<<"\n sex : "<<sex;
		cout<<"\n health : "<<health;
		
	

		if((age>25&&age<35)&&(sex=='m')&&(health=='e'))
		{
		cout<<"\n person is insured.";
		}
		
		else 
		{	
		cout<<"\n person is not insured.";
		}
		
	}
	
};

int main()
{
	Person p;
	p.getdata();
	p.showdata();
	//p.showdata1();
	
	return 0;
}

/*
C:\Users\SAINATH\OneDrive\Desktop\Program\cpp_program>g++ health.cpp

C:\Users\SAINATH\OneDrive\Desktop\Program\cpp_program>g++ -o health health.cpp

C:\Users\SAINATH\OneDrive\Desktop\Program\cpp_program>health

 Enter age : 20

 Enter sex : m

 Enter health : e

 age : 20
 sex : m
 health : e
 person is not insured.
C:\Users\SAINATH\OneDrive\Desktop\Program\cpp_program>health

 Enter age : 30

 Enter sex : m

 Enter health : e

 age : 30
 sex : m
 health : e
 person is insured.
C:\Users\SAINATH\OneDrive\Desktop\Program\cpp_program>
*/