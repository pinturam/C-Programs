//c++ program to perform all airthmetic operation
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,sum=0,sub=0,mul=0,div=0,mod=0;
cout<<"enter first number:";
cin>>a;
cout<<"enter second number:";
cin>>b;
sum=a+b;
sub=a-b;
mul=a*b;
div=a/b;
mod=a%b;
cout<<"results:\nsum="<<sum<<"\nsub="<<sub<<"\nmul="<<mul<<"\ndiv="<<div<<"\nmod="<<mod;
getch();
}