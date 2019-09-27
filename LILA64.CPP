
//C++ program to find duplicate element in array
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,a[100],i,j;
cout<<"enter array size:";
cin>>n;
cout<<"enter array's elements:";
for(i=0;i<n;i++)
{
cin>>a[i];
}
//calculating duplicate element in array
cout<<"duplicate array's elements are:";
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
	if(a[i]==a[j])
	{
	cout<<a[i]<<" ";
	}

}
getch();
}