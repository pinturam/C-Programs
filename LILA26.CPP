//c++ program to find the frequencing of odd and even numbers in the given matrix
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
static int arr[10][10];
int i,j,m,n;
int even,odd;

cout<<"enter the order of the matrix\n";
cin>>m;
cin>>n;
cout<<"enter the coefficients of matrix\n";

//assuming that there are 0 even and odd elements
even=0;
odd=0;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cin>>arr[i][j];
if((arr[i][j]%2)==0)
{
++even;
}
else
++odd;
}
}

//printing user's given matrix
cout<<"the given matrix is \n";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout<<" "<<arr[i][j];
}
cout<<"\n";
}

//printing occurance of even and odd numbers
cout<<"the frequencing of occurance of odd number="<<odd;
cout<<"\nthe frequencing of occurance of even number="<<even;

getch();
}


