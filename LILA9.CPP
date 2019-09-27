//c++ program to find the size of data types:
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char c;
int i;
float f;
double d;
long l;
short s;
//note: sizeof operator is used to evaluate the size of a declared data types
cout<<"size of char:"<<sizeof(c)<<"byte"<<endl;
cout<<"size of int:"<<sizeof(i)<<"byte"<<endl;
cout<<"size of float:"<<sizeof(f)<<"byte"<<endl;
cout<<"size of double:"<<sizeof(d)<<"byte"<<endl;
cout<<"size of long:"<<sizeof(l)<<"byte"<<endl;
cout<<"size of short:"<<sizeof(s)<<"byte"<<endl;
getch();
}