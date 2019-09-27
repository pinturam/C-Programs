//c++ program to print right angled(right oriented) pyramid of numbers
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,rows,space,k=1;
cout<<"enter number of rows:";
cin>>rows;
for(i=1;i<=rows;i++)
{
	for(space=i;space<rows;space++)
	{
		cout<<"\t";
	}
	for(j=1;j<=i;j++)
	{
		cout<<k<<"\t";
		k++;
	}
	cout<<"\n";
}
getch();
}