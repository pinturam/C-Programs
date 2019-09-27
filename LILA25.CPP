//c++ program to interchange the diagonals of a matrix
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
static int array[10][10];
int i,j,m,n,a;
cout<<"enter the order of the matrix\n";
cin>>m>>n;
if(m==n)
{
	cout<<"enter the coefficient of the matrix\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		cin>>array[i][j];
		}
	}
	cout<<"the given matrix is \n";
	for(i=0;i<m;++i)
	{
		for(j=0;j<n;++j)
		{
		cout<<" "<<array[i][j];
		}
		cout<<"\n";
	}
	for(i=0;i<m;++i)
	{
	a=array[i][i];
	array[i][i]=array[i][m-i-1];
	array[i][m-i-1]=a;
	}
	cout<<"the matrix after changing the \n";
	cout<<"main diagonal & secondary diagonal\n";
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
	cout<<" "<<array[i][j];
	}
	cout<<"\n";
	}
}
else
cout<<"the given order is not square matrix.";

getch();
}