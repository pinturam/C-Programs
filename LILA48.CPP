//C++ program to convert decimal to hexadecimal
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
rem[i]=num%16;
i++;
num=num/16;
}
cout<<"hexadecimal number is :";
for(j=i-1;j>=0;j--)
{
	switch(rem[j])
	{
	case 10:cout<<"A";break;
	case 11:cout<<"B";break;
	case 12:cout<<"C";break;
	case 13:cout<<"D";break;
	case 14:cout<<"E";break;
	case 15:cout<<"F";break;
	default:cout<<rem[j];
	}
}
getch();
}