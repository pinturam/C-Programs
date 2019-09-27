//C++ program to compare two stings
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
char str1[20],str2[20],flag=0;
cout<<"enter first string:";
gets(str1);
cout<<"enter first string:";
gets(str2);
int i=0;
int j=0;
while(str1[i]!='\0')
{
i++;
}
while(str2[j]!='\0')
{
j++;
}
if(i!=j)
{
flag=0;
}
else
{
	for(i=0,j=0;str1[j]!='\0',str2[j]!='\0';i++,j++)
	{
		if(str1[i]==str2[j])
		{
		flag=1;
		}
	}
}
if(flag==0)
{
cout<<"String are not equal";
}
else
{
cout<<"String are equal";
}
getch();
}
