//c++ program to convert days to years, weaks and days:
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int days, years, weeks;
cout<<"enter days:";
cin>>days;
years=(days/365);
weeks=(days%365)/7;
days=days-((years*365)+(weeks*7));

cout<<"years:"<<years<<endl;
cout<<"weeks:"<<weeks<<endl;
cout<<"days:"<<days<<endl;

getch();
}