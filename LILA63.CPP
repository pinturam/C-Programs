//C++ program to find sum of array elements
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[100],i,n,sum=0;
cout<<"enter array size:";
cin>>n;
cout<<"enter array elements:";
for(i=0;i<n;i++)
{
cin>>a[i];
}

for(i=0;i<n;i++)
{
sum=sum+a[i];
}
cout<<"sum of array's elements is :"<<sum;

getch();
}