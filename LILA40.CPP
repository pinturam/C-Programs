//C++ program to find lcm of two numbers.
#include<iostream.h>
#include<conio.h>
void lcm(int,int);
void main()
{
clrscr();
int a,b;
clrscr();
cout<<"enter two numbers:";
cin>>a>>b;
lcm(a,b);
getch();
}
void lcm(int a,int b)
{
	int m,n;
	m=a;
	n=b;
	while(m!=n)
	{
		if(m<n)
		{
		m=m+a;
		}
		else
		{
		n=n+b;
		}
	}
	cout<<"LCM is :"<<m;
}