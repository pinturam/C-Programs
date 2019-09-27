//c++ program to print right angled pyramid of numbers
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,rows,j,k=1;
cout<<"enter the number of rows:";
cin>>rows;
for(i=1;i<=rows;i++)
{
	for(j=1;j<=i;j++)
	{
	cout<<k<<"\t";
	k++;
	}
	cout<<"\n";
}
getch();
}