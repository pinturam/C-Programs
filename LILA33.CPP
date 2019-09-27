//C++ program to reverse of a number.
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int num,rem,rev=0;
cout<<"enter number:";
cin>>num;
while(num>0)
{
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
cout<<"reverse number is :"<<rev;
getch();
}