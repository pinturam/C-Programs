//C++ program to check number is palindrome or not
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int num,rem,rev=0,temp;
cout<<"enter number:";
cin>>num;
temp=num;
while(num>0)
{
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
if(rev==temp)
{
cout<<"palindorme";
}
else
{
cout<<"not palindorme";
}
getch();
}