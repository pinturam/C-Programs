//C++ program to generate fibonacci series
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int first=0,second=1,next;
int i,num;
cout<<"enter number of terms for series:";
cin>>num;
cout<<"fibonacci series are:\n";
for(i=0;i<num;i++)
{
cout<<first<<" ";
next=first+second;
first=second;
second=next;
}
getch();
}