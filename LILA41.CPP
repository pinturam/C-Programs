//C++ program to find square root
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int num;
float ans;
cout<<"enter any number:";
cin>>num;
ans=pow(num,0.5);
cout<<"first method:\nsquare of mumber is:"<<ans;
ans=sqrt(num);
cout<<"\nsecond method:\nsquare root of number is :"<<ans;

getch();
}