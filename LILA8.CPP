//c++ program to convert farenheit to celcius:
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float f,c;
cout<<"enter  value in farenheit:";
cin>>f;
c=(f-32)*5/9;
cout<<"value in celcius is :"<<c;
getch();
}