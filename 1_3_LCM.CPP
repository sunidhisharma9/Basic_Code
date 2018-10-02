//lcm of two numbers
#include<iostream.h>
#include<conio.h>

 void main()
{  int a,b,lcm;
clrscr();
cout<<"enter two numbers whose lcm is to be calculated";
cin>>a>>b;
if(a>b)
{ if(a%b==0)
  { lcm=a; }
  else
  { lcm=a*b; }
}
else if(b>a)
{ if(b%a==0)
  { lcm=b;}
  else
  { lcm=a*b; }
}
cout<<"lcm is "<<lcm;
getch(); }