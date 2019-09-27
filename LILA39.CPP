//C++ program to find hcf/gcd of two numbers.
#include<iostream.h>
#include<conio.h>
void gcd(int a,int b);
void main()
{
clrscr();
int a,b;
cout<<"enter two numbers:";
cin>>a>>b;
gcd(a,b);
getch();
}
void gcd(int a, int b)
{
int m,n;
m=a;
n=b;
while(m!=n)
{
	if(m>n)
	      m=m-n;
	else
		n=n-m;
}
cout<<"\nHCF is:"<<m;
getch();
}