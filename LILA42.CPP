//C++ program to find cube root of a number
#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{
int num;
float ans;
cout<<"enter any number:";
cin>>num;
ans=pow(num,1.0/3.0);
cout<<"first method:\n cube root ="<<ans;
//ans=cbrt(num);
cout<<"\nsecond method:\n cube root ="<<ans;
getch();
}