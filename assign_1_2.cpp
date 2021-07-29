# include <iostream>
using namespace std;

class Team
{
char country[20], player[20];
int matches,age;
float battingavg,ballingavg;


public:

void getdata()
{
cout<<"\n Enter country name : ";
cin>>country;
cout<<"\n Enter player name : ";
cin>>player;
cout<<"\n Enter matches : ";
cin>>matches;
cout<<"\n Enter age of player : ";
cin>>age;
cout<<"\n Enter Batting average : ";
cin>>battingavg;
cout<<"\n Enter Balling average : ";
cin>>ballingavg;
}

void showdata()
{
cout<<"\n country name : "<<country;
cout<<"\n player name : "<<player;
cout<<"\n matches : "<<matches;
cout<<"\n age of player : "<<age;
cout<<"\n batting average : "<<battingavg;
cout<<"\n balling average : "<<ballingavg;
}

};

int main()
{
Team t;
t.getdata();
t.showdata();

}

/*
profound@profound-desktop:~/Desktop/brushup49/cpp_program$ g++ assign_1_2.cpp
profound@profound-desktop:~/Desktop/brushup49/cpp_program$ ./a.out

 Enter country name : india

 Enter player name : sachin

 Enter matches : 295

 Enter age of player : 30

 Enter Batting average : 45.51

 Enter Balling average : 53.00

 country name : india
 player name : sachin
 matches : 295
 age of player : 30
 batting average : 45.51
 balling average : 53profound@profound-desktop:~/Desktop/brushup49/cpp_program$ 

*/


	
