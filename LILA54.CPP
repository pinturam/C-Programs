//C++ program to reverse a string
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
clrscr();
char str[100],temp;
int i,j=0;
cout<<"enter any string:";
gets(str);//gets funtion for input string
i=0;
j=strlen(str)-1;
while(i<j)
{
temp=str[i];
str[i]=str[j];
str[j]=temp;
i++;
j--;
}
cout<<"reverse string is :"<<str;
getch();
}