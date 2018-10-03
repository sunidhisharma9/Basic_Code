//factorial of a number
#include<iostream.h>
#include<conio.h>

void main()
{ int fac=1,num;
  clrscr(); //clrscr() to clear screen.
  cout<<"enter number whose factorial is to be printed";
  cin>>num;
  for(int i=num;i>0;i--)
  { fac=fac*i; }
  cout<<"factorial is "<<fac;
  getch();
}
