//C++ program to count vowels in a string
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
char line[150];
int i,v,c,d,s;
v=c=d=s=0;
cout<<"enter a line of string:";
gets(line);
for(i=0;line[i]!='\0';++i)
{
	if(line[i]=='a'||line[i]=='e'||line[i]=='i'||line[i]=='o'||line[i]=='u'||line[i]=='A'||line[i]=='E'||line[i]=='I'||line[i]=='O'||line[i]=='U')
	++v;
	else if((line[i]>='a'&&line[i]<='z')||(line[i]>='A'&&line[i]<='Z'))
	++c;
	else if(line[i]>='0'&&line[i]<='9')
	++d;
	else if(line[i]==' ')
	++s;
}
cout<<"vowels:"<<v;
cout<<"\nconsonants:"<<c;
cout<<"\ndigits:"<<d;
cout<<"\nwhite spaces:"<<s;
getch();
}
