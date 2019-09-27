//C++ program to buzz fizz
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int num;
cout<<"enter range of numbers:";
cin>>num;
for(int i=1;i<=num;i++)
{
	if(i%(3*5)==0)
	{
	cout<<"FizzBuzz\n";
	}
	else if((i%5)==0)
	{
	cout<<"Buzz\n";
	}
	else if((i%3)==0)
	{
	cout<<"Fizz\n";
	}
	else
	{
	cout<<i<<"\n";
	}
}
getch();
}