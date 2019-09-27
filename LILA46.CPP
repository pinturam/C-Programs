//C++ program to convert decimal to binary
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
rem[i]=num%2;
i++;
num=num/2;
}
cout<<"Binary number is:";
for(j=i-1;j>=0;j--)
{
cout<<rem[j];
}
getch();
}