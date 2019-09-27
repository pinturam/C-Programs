//C++ program to find simple interest
#include<iostream.h>
#include<conio.h>
void main()
{
float amount,rate,time,si;
clrscr();
cout<<"enter principla amount:";
cin>>amount;
cout<<"enter rate of interest:";
cin>>rate;
cout<<"enter period of time:";
cin>>time;
si=(amount*rate*time)/100;
cout<<"Simple interest:"<<si;
getch();
}