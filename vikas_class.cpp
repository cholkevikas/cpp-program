# include <iostream>
using namespace std;

class vikas
{
	public:
	
	int rn;
	char name[10];
	int mn;
	char add[20];
	
	void getdata()
	{
		cout<<"\n Enter roll no: ";
		cin>>rn;
		
		cout<<"\n Enter name: ";
		cin>>name;
		
		cout<<"\n Enter mobile no.: ";
		cin>>mn;
		
		cout<<"\n Enter address: ";
		cin>>add;
		
	}
	
	void showdata()
	{
		cout<<"\nRoll no.: "<<rn;
		cout<<"\nName: "<<name;
		cout<<"\nMobile no: "<<mn;
		cout<<"\nAddress: "<<add;
		
	}
	
};



class kiran
{
	public:
	
	int rn;
	char name[10];
	int mn;
	char add[20];
	
	void getdata1()
	{
		cout<<"\n Enter roll no: ";
		cin>>rn;
		
		cout<<"\n Enter name: ";
		cin>>name;
		
		cout<<"\n Enter mobile no.: ";
		cin>>mn;
		
		cout<<"\n Enter address: ";
		cin>>add;
		
	}
	
	void showdata1()
	{
		cout<<"\nRoll no.: "<<rn;
		cout<<"\nName: "<<name;
		cout<<"\nMobile no: "<<mn;
		cout<<"\nAddress: "<<add;
		
	}
	
};

int main()
{
	
	vikas v;
	kiran k;
	v.getdata();
	k.getdata1();
	v.showdata();
	k.showdata1();
	
}

/*
C:\Users\SAINATH\OneDrive\Desktop\Program\cpp_program>g++ vikas_class.cpp

C:\Users\SAINATH\OneDrive\Desktop\Program\cpp_program>g++ -o vikas_class vikas_class.cpp

C:\Users\SAINATH\OneDrive\Desktop\Program\cpp_program>vikas_class

 Enter roll no: 1

 Enter name: vikas

 Enter mobile no.: 5662

 Enter address: loni

 Enter roll no: 2

 Enter name: kiran

 Enter mobile no.: 454

 Enter address: pune

Roll no.: 1
Name: vikas
Mobile no: 5662
Address: loni
Roll no.: 2
Name: kiran
Mobile no: 454
Address: pune
C:\Users\SAINATH\OneDrive\Desktop\Program\cpp_program>
*/
		