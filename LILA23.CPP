//c++ program to find the length of the string
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char text[20];
char *str=text;
int count=0;

//inputting string from user
cout<<"enter any string:";
cin>>text;

//iterating though last element of the string
while(*(str++)!='\0')
count++;

cout<<"length of "<<text<<" is "<<count;
getch();
}