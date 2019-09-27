//C++ program to add two matrix
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int x[10][10],y[10][10],m,n,i,j;
cout<<"enter dimension of matrix:";
cin>>m>>n;
cout<<"enter matrix elements:";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cin>>x[i][j];
}
}
cout<<"enter matrix elements:";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cin>>y[i][j];
}
}

cout<<"matrix x is:\n";
for(i=0;i<m;i++)
{
cout<<"\n";
for(j=0;j<n;j++)
{
cout<<x[i][j]<<"  ";
}
}
cout<<"\nmatrix y is:\n";
for(i=0;i<m;i++)
{
cout<<"\n";
for(j=0;j<n;j++)
{
cout<<y[i][j]<<"  ";
}
}
cout<<"\naddition of two matrix is:\n";
for(i=0;i<m;i++)
{
cout<<"\n";
for(j=0;j<n;j++)
{
cout<<x[i][j]+y[i][j]<<"  ";
}
}

getch();
}