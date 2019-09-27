//C++ program to pass array in function
#include<iostream.h>
#include<conio.h>
void pass(int[],int);
void main()
{
clrscr();
int a[]={1,2,3,4,5};
pass(a,5);
getch();
}

void pass(int b[],int n)
{
for(int i=0;i<n;i++)
{
cout<<b[i]<<" ";
}
}
