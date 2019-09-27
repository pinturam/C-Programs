//C++ program to calulate sum of digits
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int rem,num,sum=0;
cout<<"enter any number:";
cin>>num;
while(num>0)
{
rem=num%10;
sum=sum+rem;
num=num/10;
}
cout<<"sum of digits is:"<<sum;
getch();
}