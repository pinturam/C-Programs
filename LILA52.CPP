//C++ program to check number is positive or negative
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int num;
cout<<"enter any number:";
cin>>num;
if(num>0)
{
cout<<"+ve number";
}
else if(num<0)
{
cout<<"-ve number";
}
else
{
cout<<"0 is neither +ve nor -ve";
}
getch();
}
