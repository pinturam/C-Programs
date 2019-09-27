//C++ program to find power of a number.
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int base,power,ans;
cout<<"enter base and power:";
cin>>base>>power;
ans=pow(base,power);
cout<<"power is:"<<ans;
getch();
}