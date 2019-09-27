//C++ program to convert decimal to octal
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int num,rem[20],i=0,j;
cout<<"enter any number:";
cin>>num;
while(num>0)
{
rem[i]=num%8;
i++;
num=num/8;
}
cout<<"octal number is :";
for(j=i-1;j>=0;j--)
{
cout<<rem[j];
}
getch();
}
