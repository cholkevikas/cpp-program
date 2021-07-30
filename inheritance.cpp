# include <iostream>
using namespace std;

class Add
{
public:

int a,b,c;

public:

void getdata()
{
	cout<<"\n Enter value for a : ";
	cin>>a;
	
	cout<<"\n Enter value for b : ";
	cin>>b;
	
}

void showdata()
{
	c=a+b;
	cout<<"\n Addition is : "<<c;
}
};

class Sub:public Add
{
	public:

int p,q,r;

public:

void getdata1()
{
	cout<<"\n Enter value for p : ";
	cin>>p;
	
	cout<<"\n Enter value for q : ";
	cin>>q;
	
}

void showdata1()
{
	r=p-q;
	cout<<"\n Substraction is : "<<r;
}

};

int main()
{
	Add m;
	Sub n;
	m.getdata();
	n.getdata1();
	m.showdata();
	n.showdata1();
}	

	
