//C++ program to reverse an array
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[100],b[100],n,i,j;
cout<<"enter array size:";
cin>>n;
cout<<"enter array elements :";
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"reversed array:";
for(i=n-1,j=0;i>=0;i--,j++)
{
b[i]=a[j];
}
for(i=0;i<n;i++)
{
cout<<b[i];
}
getch();
}