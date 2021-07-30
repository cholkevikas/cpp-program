#include <iostream>
using namespace std;

int main( )
{
int m1, m2, m3, m4, m5, per ;
cout<<"Enter marks in five subjects ";
cin>>m1>>m2>>m3>>m4>>m5;
per = ( m1 + m2 + m3 + m4 + m5 ) / 5 ;

if ( per >= 60 )
cout<<"\nFirst division ";
else
{
if ( per >= 50 )
cout<<"\nSecond division";
else
{
if ( per >= 40 )
cout<<"\nThird division";
else
cout<<"Fail";
}
}
}