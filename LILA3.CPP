//c++ program to swap values of two variables:
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,temp;
cout<<"enter first number:";
cin>>a;
cout<<"enter second number:";
cin>>b;
temp=a;
a=b;
b=temp;
cout<<"after swapping:";
cout<<"\nfirst number is :"<<a;
cout<<"\nsecond number is:"<<b;
getch();
}