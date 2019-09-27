//c++ program to demonstrate use of reference variable:
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a=10;
/*reference variable is alias of other variable,
it does not take space in memory*/
int &b=a;
cout<<"value of a:"<<a;
cout<<"\nvalue of b:"<<b;
 getch();

}