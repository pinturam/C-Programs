// C++ program to convert uppercase to lowercase
#include<iostream.h>
#include<conio.h>
void main()
{
char ch;
cout<<"enter a character in uppercase:";
cin>>ch;
//converting the uppercase char to lowercase by adding 32 to the ascii value of the input character
ch=ch+32;
cout<<"entered character in lowercase:"<<ch;
getch();
}