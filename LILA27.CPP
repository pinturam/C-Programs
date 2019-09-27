//c++ program to find sum of each row and columns of a matrix
#include<iostream.h>
#include<conio.h>
#define size 3//matrix size
void main()
{
clrscr();
int arr[size][size];
int row, col, sum=0;
//inputting elements in matrix from user
cout<<"enter elements in matrix of size "<<size<<"x"<<size<<"\n";
for(row=0;row<size;row++)
{
for(col=0;col<size;col++)
{
cin>>arr[row][col];
}
}
//calculating sum of elements of each row of matrix
for(row=0;row<size;row++)
{
sum=0;
for(col=0;col<size;col++)
{
sum+=arr[row][col];
}
//printing sum of row elements
cout<<"sum of elements of row:"<<row+1<<" = "<<sum<<"\n";
}
//finding sum of elements of each columns of matrix
for(row=0;row<size;row++)
{
sum=0;
for(col=0;col<size;col++)
{
sum+=arr[col][row];
}
//printing sum of columns elements
cout<<"sum of elements of column "<<row+1<<"="<<sum<<"\n";
}
getch();
}