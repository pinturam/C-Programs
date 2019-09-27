//C++ program to sort an array in asending order
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,n,a[100],temp;
cout<<"Enter array size:";
cin>>n;
cout<<"Enter array elements:\n";
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
	if(a[i]<a[j])
	{
	temp=a[j];
	a[j]=a[i];
	a[i]=temp;
	}
	}
}
cout<<"sorted array:";
for(i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
getch();
}