//C++ programk to merge two arrays in third array
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[100],b[100],c[200],i,m,n;
cout<<"enter first array size:";
cin>>m;
cout<<"enter first array elements:\n";
for(i=0;i<m;i++)
{
cin>>a[i];
}
cout<<"enter second array size:";
cin>>n;
cout<<"enter second array elements:\n";
for(i=0;i<n;i++)
{
cin>>b[i];
}
cout<<"merged array:\n";
for(i=0;i<m+n;i++)
{
c[i]=a[i];
c[i+m]=b[i];
}
for(i=0;i<m+n;i++)
{
cout<<c[i];
}
getch();
}
