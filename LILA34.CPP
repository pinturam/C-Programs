//C++ program to find number of digits of a number
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int num,a=0;
cout<<"enter number:";
cin>>num;
while(num>0)
{
num=num/10;
a++;
}
cout<<"number of digits of number is:"<<a;
getch();
}