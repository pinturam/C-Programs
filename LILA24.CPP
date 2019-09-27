//c++ program to sum of array element using pointers
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int arr[5],i,sum=0;
int *ptr;
cout<<"enter any 5 numbers:";
for(i=0;i<5;i++)
{
cin>>arr[i];
}
ptr=arr;
for(i=0;i<5;i++)
{
sum=sum+ *(ptr+i);
}
cout<<"\n sum of array elements :"<<sum;
getch();
}