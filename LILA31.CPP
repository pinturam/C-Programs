//C++ program to find factorial of a number
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int num,fact=1;
cout<<"enter number:";
cin>>num;
for(int i=1;i<=num;i++)
{
fact=fact*i;
}
cout<<"factorial of number is => "<<fact;
getch();
}