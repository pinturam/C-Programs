//c++ program to two numbers using pointers
#include<iostream.h>
#include<conio.h>
void swap(int *num1,int *num2)
{
	int temp;
	temp=*num1;
	*num1=*num2;
	*num2=temp;
}
void main()
{
clrscr();
int num1,num2;
cout<<"enter first number:";
cin>>num1;
cout<<"enter second number:";
cin>>num2;
swap(&num1,&num2);
cout<<"\nfirst number:"<<num1;
cout<<"\nsecond number:"<<num2;
getch();
}
