//C++ program to print table of any number
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int num;
cout<<"enter number:";
cin>>num;
cout<<"table of "<<num<<" is"<<endl;
for(int i=1;i<=10;i++)
{
cout<<num*i<<"\n";
}
getch();
}
