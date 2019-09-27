//c++ program to generate random numbers
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
clrscr();
int i;//loop counter
int num;//store random number
randomize();//call it once to generate random numbers
for(i=1;i<=10;i++)
{
num=rand()%100;//get random number
cout<<num<<"\t";

}
getch();
}