//c++ program to copy one string to another string
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char text1[10],text2[10];//10 is the max size
char *str1=text1;
char *str2=text2;

//inputting string from user
cout<<"enter any string:";
cin>>text1;

//copying text1 to text2 character by character
while(*(str2++)=*(str1++));

cout<<"first string:"<<text1;
cout<<"\nsecond string:"<<text2;

getch();
}