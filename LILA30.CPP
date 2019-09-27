//C++ program to check prime or not
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int num;
cout<<"enter a number:";
cin>>num;
if(num==1)
{
cout<<"smallest prime number is 2.";
}
for(int i=2;i<num;i++)
{
	if(num%i==0)
	{
	cout<<"=>not prime";
	break;
	}
}
if(num==i)
{
cout<<"=>prime";
}
getch();
}