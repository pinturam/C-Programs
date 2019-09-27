//C++ program to check leap year
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int y;
cout<<"enter a year:";
cin>>y;
if(y%4==0)
{
cout<<"leap year";
}
else
{
cout<<"not a leap year";
}
getch();
}
