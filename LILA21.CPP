//c++ program to concatenate two strings using pointers
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char str1[10],str2[10];
char *s1=str1;
char *s2=str2;

//inputtin 2 strings from user
cout<<"enter 1st string:";
cin>>str1;
cout<<"enter 2nd string:";
cin>>str2;

//moving till the end of str1
while(*(++s1));
//coping str2 to str1
while(*(s1++)=*(s2++));

cout<<"concatenated string:"<<str1;
getch();
}