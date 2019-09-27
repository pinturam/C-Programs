//C++ program to find compoud interest
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int p,r,i,t,ci,a;
cout<<"enter principal amount:";
cin>>p;
cout<<"enter interest rate:";
cin>>r;
cout<<"enter time period in years:";
cin>>t;

i=1+(r/100);
//ci=pow(i,t);
ci=1;
for(a=1;a<=t;a++)
{
ci=ci*i;
}
ci=p*ci-p;
cout<<"compound interest is:"<<ci;
getch();
}