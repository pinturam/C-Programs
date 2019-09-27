//C++ program to find largest number among three numbers
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
cout<<"enter any three number:";
cin>>a>>b>>c;
if(a>=b&&a>=c)
{
cout<<"largest number:"<<a;
}
if(b>=a&&b>=c)
{
cout<<"largest number:"<<b;
}
if(c>=a&&c>=b)
{
cout<<"largest number:"<<c;
}
getch();
}
